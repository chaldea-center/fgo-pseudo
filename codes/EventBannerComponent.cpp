void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB876 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42EB876 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_GameObject__o *bannerList; // x20
  signed __int64 size; // x8
  unsigned __int64 v18; // x21
  UnityEngine_Object_o *v19; // x20

  if ( (byte_42EB874 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EB874 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerList = this->fields.bannerList) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v15);
  }
  LODWORD(size) = bannerList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = (UnityEngine_Object_o *)bannerList->fields._items->m_Items[v18];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v19, 0LL);
      bannerList = this->fields.bannerList;
      if ( !bannerList )
        goto LABEL_16;
      size = bannerList->fields._size;
      ++v18;
    }
    while ( (__int64)v18 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v17; // x1
  __int64 v18; // x8
  __int64 v19; // x24
  EventEntity_o *v20; // x21
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Transform_o *v24; // x23
  int v25; // s0
  __int64 v28; // x0

  if ( (byte_42EB875 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB875 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v17);
  if ( EnableEntityList )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v18 = *(_QWORD *)&EnableEntityList->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)v18 )
        {
          v28 = sub_B5D6C8(Instance);
          sub_B5D668(v28, 0LL);
        }
        v20 = EnableEntityList->m_Items[v19];
        if ( !v20 )
          break;
        if ( v20->fields.bannerId >= 1 )
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
          v23 = (UnityEngine_GameObject_o *)Instance;
          v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
          if ( !v24 )
            break;
          UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v23,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v20, 0LL);
          Instance = (DataManager_o *)this->fields.bannerList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v18 = *(_QWORD *)&EnableEntityList->max_length;
        }
        if ( (int)++v19 >= (int)v18 )
          goto LABEL_19;
      }
LABEL_22:
      sub_B5D69C(Instance, v15);
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