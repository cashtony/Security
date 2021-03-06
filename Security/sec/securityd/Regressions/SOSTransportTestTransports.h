#ifndef SEC_SOSTransportTestTransports_h
#define SEC_SOSTransportTestTransports_h

typedef struct SOSTransportKeyParameterTest *SOSTransportKeyParameterTestRef;
typedef struct SOSTransportCircleTest *SOSTransportCircleTestRef;
typedef struct SOSTransportMessageTest *SOSTransportMessageTestRef;

CF_RETURNS_RETAINED
CFDictionaryRef SOSTransportMessageTestHandleMessages(SOSTransportMessageTestRef transport, CFMutableDictionaryRef circle_peer_messages_table, CFErrorRef *error);

void SOSAccountUpdateTestTransports(SOSAccountRef account, CFDictionaryRef gestalt);
    
SOSTransportKeyParameterTestRef SOSTransportTestCreateKeyParameter(SOSAccountRef account, CFStringRef name, CFStringRef circleName);
SOSTransportCircleTestRef SOSTransportTestCreateCircle(SOSAccountRef account, CFStringRef name, CFStringRef circleName);
SOSTransportMessageTestRef SOSTransportTestCreateMessage(SOSAccountRef account, CFStringRef name, CFStringRef circleName);

CFMutableArrayRef key_transports;
CFMutableArrayRef circle_transports;
CFMutableArrayRef message_transports;

CFStringRef SOSTransportMessageTestGetName(SOSTransportMessageTestRef transport);
CFStringRef SOSTransportCircleTestGetName(SOSTransportCircleTestRef transport);
CFStringRef SOSTransportKeyParameterTestGetName(SOSTransportKeyParameterTestRef transport);

void SOSTransportKeyParameterTestSetName(SOSTransportKeyParameterTestRef transport, CFStringRef accountName);
void SOSTransportCircleTestSetName(SOSTransportCircleTestRef transport, CFStringRef accountName);
void SOSTransportMessageTestSetName(SOSTransportMessageTestRef transport, CFStringRef accountName);


CFMutableDictionaryRef SOSTransportMessageTestGetChanges(SOSTransportMessageTestRef transport);
CFMutableDictionaryRef SOSTransportCircleTestGetChanges(SOSTransportCircleTestRef transport);
CFMutableDictionaryRef SOSTransportKeyParameterTestGetChanges(SOSTransportKeyParameterTestRef transport);

SOSAccountRef SOSTransportMessageTestGetAccount(SOSTransportMessageTestRef transport);
SOSAccountRef SOSTransportCircleTestGetAccount(SOSTransportCircleTestRef transport);
SOSAccountRef SOSTransportKeyParameterTestGetAccount(SOSTransportKeyParameterTestRef transport);

bool SOSAccountInflateTestTransportsForCircle(SOSAccountRef account, CFStringRef circleName, CFStringRef accountName, CFErrorRef *error);
bool SOSAccountEnsureFactoryCirclesTest(SOSAccountRef a, CFStringRef accountName);

#endif
