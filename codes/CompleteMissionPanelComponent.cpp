void __fastcall CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_String_o *errorMessage; // x8
  System_String_c *klass; // x20
  __int64 v14; // x8

  if ( (byte_42E8F17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E8F17 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  errorMessage = Instance[11].fields.errorMessage;
  if ( !errorMessage )
    goto LABEL_11;
  klass = errorMessage[5].klass;
  if ( !klass )
    goto LABEL_11;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v14 = *((_QWORD *)klass->_1.name + 4);
  if ( !v14 || !completeMissionFrameSprite )
LABEL_11:
    sub_B5D69C(Instance, v10);
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, *(_DWORD *)(v14 + 28), v11);
}


void __fastcall CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CompleteMissionPanelComponent_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct CompleteMissionSprite_o *completeMissionFrameSprite; // x8
  struct UISprite_o *sprite; // x8
  EventMissionEntity_o *v13; // x19
  const MethodInfo *v14; // x3
  struct CompleteMissionSprite_o *v15; // x8

  if ( (byte_42E8F18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, dispNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E8F18 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v13 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v10);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v15 = Instance[38].fields.completeMissionFrameSprite;
      if ( v15 )
      {
        if ( v13 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v15[1].klass;
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v13->fields.id,
              0LL,
              v14);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


EventMissionEntity_o *__fastcall CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x8
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  int v23; // w19
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8F19 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__,
      dispNum,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42E8F19 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (klass = Instance[31].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass->_1.klass) == 0LL )
  {
    sub_B5D69C(Instance, v18);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B5D69C(v20, v21);
    if ( LODWORD(v25.fields.current[2].klass) == dispNum )
    {
      v23 = 3;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v23 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  if ( (unsigned int)(v23 + 1) >> 2 )
    return (EventMissionEntity_o *)current;
  else
    return 0LL;
}