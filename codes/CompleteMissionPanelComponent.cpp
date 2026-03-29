void CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *syncRoot; // x8
  const MethodInfo *v7; // x2

  if ( (byte_4D2F425 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F425 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (syncRoot = Instance[33].fields._syncRoot) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)syncRoot[8].klass) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Instance,
                                                                  0,
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0
    || !completeMissionFrameSprite )
  {
    sub_1C93D2C(Instance, v5);
  }
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, Instance->fields._version, v7);
}


void CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  CompleteMissionPanelComponent_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CompleteMissionSprite_o *completeMissionFrameSprite; // x8
  struct AssetData_o *eventUIAssetData; // x8
  EventMissionEntity_o *v9; // x19
  const MethodInfo *v10; // x3
  struct CompleteMissionSprite_o *v11; // x8

  if ( (byte_4D2F426 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F426 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  completeMissionFrameSprite = Instance[33].fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    goto LABEL_14;
  eventUIAssetData = completeMissionFrameSprite[1].fields.eventUIAssetData;
  if ( !eventUIAssetData )
    goto LABEL_14;
  if ( dispNum >= 1 && SLODWORD(eventUIAssetData->fields.name) >= dispNum )
  {
    v9 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v6);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v11 = Instance[33].fields.completeMissionFrameSprite;
      if ( v11 )
      {
        if ( v9 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v11->fields.sprite;
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v9->fields.id,
              0,
              v10);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1C93D2C(Instance, v5);
  }
}


void CompleteMissionPanelComponent__OnClickPanel(
        CompleteMissionPanelComponent_o *this,
        UnityEngine_GameObject_o *DispNum,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( !DispNum )
    sub_1C93D2C(this, 0);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)DispNum, 0);
  v5 = System_Int32__Parse(name, 0);
  CompleteMissionPanelComponent__MoveMissionBoard(this, v5, v6);
}


void CompleteMissionPanelComponent__OnDestroy(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x0

  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    sub_1C93D2C(0, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


EventMissionEntity_o *CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *syncRoot; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2F427 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F427 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (syncRoot = Instance[33].fields._syncRoot) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)syncRoot[8].klass) == 0 )
  {
    sub_1C93D2C(Instance, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    Instance,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C93D2C(v7, v8);
    if ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_20) == dispNum )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  return (EventMissionEntity_o *)current;
}