void __fastcall CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *syncRoot; // x8
  const MethodInfo *v10; // x2

  if ( (byte_4B14F62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B14F62 = 1;
  }
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (syncRoot = Instance[33].fields._syncRoot) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)syncRoot[8].klass) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Instance,
                                                                  0,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL
    || !completeMissionFrameSprite )
  {
    sub_1BCAA3C(Instance, v8);
  }
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, Instance->fields._version, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionPanelComponent_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct CompleteMissionSprite_o *completeMissionFrameSprite; // x8
  struct AssetData_o *eventUIAssetData; // x8
  EventMissionEntity_o *v11; // x19
  const MethodInfo *v12; // x3
  struct CompleteMissionSprite_o *v13; // x8

  if ( (byte_4B14F63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, *(_QWORD *)&dispNum, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B14F63 = 1;
  }
  Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v11 = CompleteMissionPanelComponent__targetCompleteMissionId(Instance, dispNum, v8);
    Instance = (CompleteMissionPanelComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v13 = Instance[33].fields.completeMissionFrameSprite;
      if ( v13 )
      {
        if ( v11 )
        {
          Instance = (CompleteMissionPanelComponent_o *)v13->fields.sprite;
          if ( Instance )
          {
            CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
              (CompleteMissionListViewManager_o *)Instance,
              v11->fields.id,
              0LL,
              v12);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(Instance, v7);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_o *__fastcall CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *syncRoot; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14F64 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__,
      *(_QWORD *)&dispNum,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B14F64 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (syncRoot = Instance[33].fields._syncRoot) == 0LL
    || (Instance = (System_Collections_Generic_List_object__o *)syncRoot[8].klass) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BCAA3C(v15, v16);
    if ( LODWORD(v19.fields._current[2].klass) == dispNum )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  return (EventMissionEntity_o *)current;
}