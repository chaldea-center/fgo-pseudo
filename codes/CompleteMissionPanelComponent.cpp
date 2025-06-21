void __fastcall CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__c *klass; // x8
  const MethodInfo *v8; // x2

  if ( (byte_4B1B091 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B1B091 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (klass = Instance[34].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)klass->_1.fields) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Instance,
                                                                  0,
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL
    || !completeMissionFrameSprite )
  {
    sub_1BCB254(Instance, v6);
  }
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, Instance->fields._version, v8);
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
  CompleteMissionPanelComponent_c *klass; // x8
  _DWORD *fields; // x8
  EventMissionEntity_o *v10; // x19
  const MethodInfo *v11; // x3
  CompleteMissionPanelComponent_c *v12; // x8

  if ( (byte_4B1B092 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, *(_QWORD *)&dispNum);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B1B092 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  klass = Instance[34].klass;
  if ( !klass )
    goto LABEL_14;
  fields = klass->_1.fields;
  if ( !fields )
    goto LABEL_14;
  if ( dispNum >= 1 && fields[6] >= dispNum )
  {
    v10 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v7);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v12 = Instance[34].klass;
      if ( v12 )
      {
        if ( v10 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v12->_1.castClass;
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
    sub_1BCB254(Instance, v6);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(0LL, method);
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
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__c *klass; // x8
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1B093 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, *(_QWORD *)&dispNum);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B1B093 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (klass = Instance[34].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)klass->_1.fields) == 0LL )
  {
    sub_1BCB254(Instance, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    Instance,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1BCB254(v11, v12);
    if ( LODWORD(v15.fields._current[2].klass) == dispNum )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  return (EventMissionEntity_o *)current;
}