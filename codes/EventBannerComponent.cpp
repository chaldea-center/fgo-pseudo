void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A1E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_418A1E9 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *bannerList; // x20
  signed __int64 size; // x8
  unsigned __int64 v10; // x21
  UnityEngine_Object_o *v11; // x20

  if ( (byte_418A1E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418A1E7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerList = this->fields.bannerList) == 0LL) )
  {
LABEL_16:
    sub_B2C434(gameObject, v7);
  }
  LODWORD(size) = bannerList->fields._size;
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = (UnityEngine_Object_o *)bannerList->fields._items->m_Items[v10];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v11, 0LL);
      bannerList = this->fields.bannerList;
      if ( !bannerList )
        goto LABEL_16;
      size = bannerList->fields._size;
      ++v10;
    }
    while ( (__int64)v10 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x24
  EventEntity_o *v12; // x21
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Transform_o *v16; // x23
  int v17; // s0
  __int64 v20; // x0

  if ( (byte_418A1E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A1E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v9);
  if ( EnableEntityList )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v10 = *(_QWORD *)&EnableEntityList->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= (unsigned int)v10 )
        {
          v20 = sub_B2C460(Instance);
          sub_B2C400(v20, 0LL);
        }
        v12 = EnableEntityList->m_Items[v11];
        if ( !v12 )
          break;
        if ( v12->fields.bannerId >= 1 )
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
          v15 = (UnityEngine_GameObject_o *)Instance;
          v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
          if ( !v16 )
            break;
          UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v15,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v12, 0LL);
          Instance = (DataManager_o *)this->fields.bannerList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v10 = *(_QWORD *)&EnableEntityList->max_length;
        }
        if ( (int)++v11 >= (int)v10 )
          goto LABEL_19;
      }
LABEL_22:
      sub_B2C434(Instance, v7);
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