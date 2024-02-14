void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216E2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4216E2F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *bannerList; // x20
  signed __int64 size; // x8
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4216E2D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216E2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerList = this->fields.bannerList) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  LODWORD(size) = bannerList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v10 = (UnityEngine_Object_o *)bannerList->fields._items->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v10, 0LL);
      bannerList = this->fields.bannerList;
      if ( !bannerList )
        goto LABEL_16;
      size = bannerList->fields._size;
      ++v9;
    }
    while ( (__int64)v9 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x24
  EventEntity_o *v11; // x21
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Transform_o *v15; // x23
  int v16; // s0
  __int64 v19; // x0

  if ( (byte_4216E2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216E2E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v8);
  if ( EnableEntityList )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v9 = *(_QWORD *)&EnableEntityList->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= (unsigned int)v9 )
        {
          v19 = sub_B0D9A8(Instance);
          sub_B0D948(v19, 0LL);
        }
        v11 = EnableEntityList->m_Items[v10];
        if ( !v11 )
          break;
        if ( v11->fields.bannerId >= 1 )
        {
          Instance = (DataManager_o *)this->fields.bannerGrid;
          if ( !Instance )
            break;
          bannerPrefab = this->fields.bannerPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        bannerPrefab,
                                        transform,
                                        0LL,
                                        0LL);
          if ( !Instance )
            break;
          v14 = (UnityEngine_GameObject_o *)Instance;
          v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
          if ( !v15 )
            break;
          UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v14,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v11, 0LL);
          Instance = (DataManager_o *)this->fields.bannerList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v9 = *(_QWORD *)&EnableEntityList->max_length;
        }
        if ( (int)++v10 >= (int)v9 )
          goto LABEL_19;
      }
LABEL_22:
      sub_B0D97C(Instance);
    }
LABEL_19:
    Instance = (DataManager_o *)this->fields.bannerGrid;
    if ( !Instance )
      goto LABEL_22;
    ((void (__fastcall *)(DataManager_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
      Instance,
      Instance->klass[1]._1.declaringType);
  }
}