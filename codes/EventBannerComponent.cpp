void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FC51A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FC51A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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

  if ( (byte_40FC518 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC518 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerList = this->fields.bannerList) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  LODWORD(size) = bannerList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = (UnityEngine_Object_o *)bannerList->fields._items->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v10, 0LL);
      bannerList = this->fields.bannerList;
      if ( !bannerList )
        goto LABEL_16;
      size = bannerList->fields._size;
      ++v9;
    }
    while ( (__int64)v9 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  __int64 v15; // x24
  EventEntity_o *v16; // x21
  UnityEngine_Component_o *bannerGrid; // x0
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  BannerComponent_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *bannerList; // x0
  struct UIGrid_o *v28; // x0

  if ( (byte_40FC519 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC519 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v9);
  if ( EnableEntityList )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v14 = *(_QWORD *)&EnableEntityList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= (unsigned int)v14 )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v16 = EnableEntityList->m_Items[v15];
        if ( !v16 )
          break;
        if ( v16->fields.bannerId >= 1 )
        {
          bannerGrid = (UnityEngine_Component_o *)this->fields.bannerGrid;
          if ( !bannerGrid )
            break;
          bannerPrefab = this->fields.bannerPrefab;
          transform = UnityEngine_Component__get_transform(bannerGrid, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPrefab, transform, 0LL, 0LL);
          if ( !Object )
            break;
          v21 = Object;
          v22 = UnityEngine_GameObject__get_transform(Object, 0LL);
          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
          if ( !v22 )
            break;
          UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
          Component_srcLineSprite = (BannerComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v21,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Component_srcLineSprite )
            break;
          BannerComponent__SetBanner(Component_srcLineSprite, v16, 0LL);
          bannerList = this->fields.bannerList;
          if ( !bannerList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bannerList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v14 = *(_QWORD *)&EnableEntityList->max_length;
        }
        if ( (int)++v15 >= (int)v14 )
          goto LABEL_19;
      }
LABEL_22:
      sub_B170D4();
    }
LABEL_19:
    v28 = this->fields.bannerGrid;
    if ( !v28 )
      goto LABEL_22;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v28->klass->vtable._8_Reposition.method)(
      v28,
      v28->klass->vtable._9_ResetPosition.methodPtr);
  }
}