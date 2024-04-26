void __fastcall CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_String_o *errorMessage; // x8
  System_String_c *klass; // x20
  __int64 v9; // x8

  if ( (byte_43514A7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43514A7 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  errorMessage = Instance[11].fields.errorMessage;
  if ( !errorMessage )
    goto LABEL_11;
  klass = errorMessage[5].klass;
  if ( !klass )
    goto LABEL_11;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v9 = *((_QWORD *)klass->_1.name + 4);
  if ( !v9 || !completeMissionFrameSprite )
LABEL_11:
    sub_B7076C(Instance, v5);
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, *(_DWORD *)(v9 + 28), v6);
}


void __fastcall CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  CompleteMissionPanelComponent_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CompleteMissionSprite_o *completeMissionFrameSprite; // x8
  struct UISprite_o *sprite; // x8
  EventMissionEntity_o *v9; // x19
  const MethodInfo *v10; // x3
  struct CompleteMissionSprite_o *v11; // x8

  if ( (byte_43514A8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43514A8 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  completeMissionFrameSprite = Instance[38].fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    goto LABEL_14;
  sprite = completeMissionFrameSprite[1].fields.sprite;
  if ( !sprite )
    goto LABEL_14;
  if ( dispNum >= 1 && SLODWORD(sprite->fields.leftAnchor) >= dispNum )
  {
    v9 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v6);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v11 = Instance[38].fields.completeMissionFrameSprite;
      if ( v11 )
      {
        if ( v9 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v11[1].klass;
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v9->fields.id,
              0LL,
              v10);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B7076C(Instance, v5);
  }
}


void __fastcall CompleteMissionPanelComponent__OnClickPanel(
        CompleteMissionPanelComponent_o *this,
        UnityEngine_GameObject_o *DispNum,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( !DispNum )
    sub_B7076C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)DispNum, 0LL);
  v5 = System_Int32__Parse(name, 0LL);
  CompleteMissionPanelComponent__MoveMissionBoard(this, v5, v6);
}


void __fastcall CompleteMissionPanelComponent__OnDestroy(
        CompleteMissionPanelComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x0

  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    sub_B7076C(0LL, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


EventMissionEntity_o *__fastcall CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  int v10; // w19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43514A9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43514A9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (klass = Instance[31].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass->_1.klass) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    Instance,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B7076C(v7, v8);
    if ( LODWORD(v12.fields.current[2].klass) == dispNum )
    {
      v10 = 3;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v10 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  if ( (unsigned int)(v10 + 1) >> 2 )
    return (EventMissionEntity_o *)current;
  else
    return 0LL;
}