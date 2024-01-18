void __fastcall CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_String_o *errorMessage; // x8
  System_String_c *klass; // x20
  __int64 v10; // x8

  if ( (byte_4187F75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4187F75 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  errorMessage = Instance[11].fields.errorMessage;
  if ( !errorMessage )
    goto LABEL_11;
  klass = errorMessage[5].klass;
  if ( !klass )
    goto LABEL_11;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v10 = *((_QWORD *)klass->_1.name + 4);
  if ( !v10 || !completeMissionFrameSprite )
LABEL_11:
    sub_B2C434(Instance, v6);
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, *(_DWORD *)(v10 + 28), v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CompleteMissionPanelComponent_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct CompleteMissionSprite_o *completeMissionFrameSprite; // x8
  struct UISprite_o *sprite; // x8
  EventMissionEntity_o *v10; // x19
  const MethodInfo *v11; // x3
  struct CompleteMissionSprite_o *v12; // x8

  if ( (byte_4187F76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, *(_QWORD *)&dispNum);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4187F76 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v10 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v7);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v12 = Instance[38].fields.completeMissionFrameSprite;
      if ( v12 )
      {
        if ( v10 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v12[1].klass;
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v10->fields.id,
              0LL,
              v11);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B2C434(Instance, v6);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_o *__fastcall CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x8
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  int v14; // w19
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187F77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, *(_QWORD *)&dispNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4187F77 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (klass = Instance[31].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass->_1.klass) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B2C434(v11, v12);
    if ( LODWORD(v16.fields.current[2].klass) == dispNum )
    {
      v14 = 3;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v14 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  if ( (unsigned int)(v14 + 1) >> 2 )
    return (EventMissionEntity_o *)current;
  else
    return 0LL;
}