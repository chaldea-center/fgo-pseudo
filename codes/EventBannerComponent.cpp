void EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5681 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB5681 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bannerList, (int32_t)v3, v4, v5);
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

  if ( (byte_4CB567F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB567F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = this->fields.bannerList) == 0) )
  {
LABEL_14:
    sub_1C6BC60(gameObject, v4);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v5,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)Item, 0);
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
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8

  if ( (byte_4CB5680 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5680 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
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
          sub_1C6BC68(Instance);
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
          if ( !byte_4CAFC0E )
          {
            Instance = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC0E = 1;
          }
          if ( !v13 )
            break;
          UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v12,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v9, 0);
          Instance = (__int64)this->fields.bannerList;
          if ( !Instance )
            break;
          v16 = *(_QWORD *)(Instance + 16);
          v17 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v16 )
            break;
          v18 = *(int *)(Instance + 24);
          if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v12,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = v16 + 8 * v18;
            *(_DWORD *)(Instance + 24) = v18 + 1;
            *(_QWORD *)(v19 + 32) = v12;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v12, v14, v15);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1C6BC60(Instance, v4);
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