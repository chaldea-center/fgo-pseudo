void CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  System_Collections_Generic_List_object__o *Instance; // x0
  struct System_Object_array *items; // x8
  const MethodInfo *v6; // x2

  if ( (byte_4C364F9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364F9 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (items = Instance[34].fields._items) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)items->m_Items[12]) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Instance,
                                                                  0,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0
    || !completeMissionFrameSprite )
  {
    sub_1C32E7C(Instance);
  }
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, Instance->fields._version, v6);
}


void CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  CompleteMissionPanelComponent_o *Instance; // x0
  const MethodInfo *v5; // x2
  intptr_t m_CachedPtr; // x8
  __int64 v7; // x8
  EventMissionEntity_o *v8; // x19
  const MethodInfo *v9; // x3
  intptr_t v10; // x8

  if ( (byte_4C364FA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364FA = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  m_CachedPtr = Instance[34].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_14;
  v7 = *(_QWORD *)(m_CachedPtr + 128);
  if ( !v7 )
    goto LABEL_14;
  if ( dispNum >= 1 && *(_DWORD *)(v7 + 24) >= dispNum )
  {
    v8 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v5);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v10 = Instance[34].fields.m_CachedPtr;
      if ( v10 )
      {
        if ( v8 )
        {
          Instance = *(CompleteMissionPanelComponent_o **)(v10 + 72);
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v8->fields.id,
              0,
              v9);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1C32E7C(Instance);
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
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)DispNum, 0);
  v5 = System_Int32__Parse(name, 0);
  CompleteMissionPanelComponent__MoveMissionBoard(this, v5, v6);
}


void CompleteMissionPanelComponent__OnDestroy(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x0

  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    sub_1C32E7C(0);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


EventMissionEntity_o *CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Instance; // x0
  struct System_Object_array *items; // x8
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C364FB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364FB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (items = Instance[34].fields._items) == 0
    || (Instance = (System_Collections_Generic_List_object__o *)items->m_Items[12]) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C32E7C(v6);
    if ( *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_20) == dispNum )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  return (EventMissionEntity_o *)current;
}