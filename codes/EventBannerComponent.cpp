void EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC67A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CC67A1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bannerList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  int32_t v7; // w2
  int v8; // w8

  if ( (byte_4CC679F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC679F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = this->fields.bannerList) == 0) )
  {
LABEL_14:
    sub_1C71608(gameObject, v4);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v5,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)Item, 0);
      gameObject = this->fields.bannerList;
      if ( !gameObject )
        goto LABEL_14;
      v7 = *((_DWORD *)gameObject + 6);
      ++v5;
    }
    while ( v5 < v7 );
    v8 = *((_DWORD *)gameObject + 7) + 1;
    *((_DWORD *)gameObject + 6) = 0;
    *((_DWORD *)gameObject + 7) = v8;
    if ( v7 >= 1 )
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v7, 0);
  }
}


void EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v6; // x1
  int max_length; // w8
  __int64 v8; // x26
  EventEntity_o *v9; // x23
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_Transform_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  if ( (byte_4CC67A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC67A0 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0, 0);
  EventBannerComponent__ClearBanner(this, v6);
  if ( EnableEntityList )
  {
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C71610(Instance);
        v9 = EnableEntityList->m_Items[v8];
        if ( !v9 )
          break;
        if ( v9->fields.bannerId >= 1 )
        {
          Instance = (__int64)this->fields.bannerGrid;
          if ( !Instance )
            break;
          bannerPrefab = this->fields.bannerPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
          Instance = (__int64)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                bannerPrefab,
                                transform,
                                0,
                                0);
          if ( !Instance )
            break;
          v12 = (UnityEngine_GameObject_o *)Instance;
          Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
          v13 = (UnityEngine_Transform_o *)Instance;
          if ( !byte_4CC0D0E )
          {
            Instance = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
            byte_4CC0D0E = 1;
          }
          if ( !v13 )
            break;
          UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v12,
                                (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v9, 0);
          Instance = (__int64)this->fields.bannerList;
          if ( !Instance )
            break;
          v20 = *(_QWORD *)(Instance + 16);
          v21 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v20 )
            break;
          v22 = *(int *)(Instance + 24);
          if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v12,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = v20 + 8 * v22;
            *(_DWORD *)(Instance + 24) = v22 + 1;
            *(_QWORD *)(v23 + 32) = v12;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 32), (int32_t)v12, v14, v15, v16, v17, v18, v19);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1C71608(Instance, v4);
    }
LABEL_24:
    Instance = (__int64)this->fields.bannerGrid;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}