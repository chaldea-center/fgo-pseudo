void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B43E89 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B43E89 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.bannerList, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  Il2CppObject *Item; // x21
  int32_t v10; // w2
  int v11; // w8

  if ( (byte_4B43E87 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B43E87 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerList) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(gameObject, v7);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v8 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v8,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)Item, 0LL);
      gameObject = this->fields.bannerList;
      if ( !gameObject )
        goto LABEL_14;
      v10 = *((_DWORD *)gameObject + 6);
      ++v8;
    }
    while ( v8 < v10 );
    v11 = *((_DWORD *)gameObject + 7) + 1;
    *((_DWORD *)gameObject + 6) = 0;
    *((_DWORD *)gameObject + 7) = v11;
    if ( v10 >= 1 )
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v10, 0LL);
  }
}


void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Instance; // x0
  __int64 v7; // x1
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  __int64 v12; // x26
  EventEntity_o *v13; // x23
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x22
  UnityEngine_Transform_o *v17; // x24
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8

  if ( (byte_4B43E88 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B43E88 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0, 0LL);
  EventBannerComponent__ClearBanner(this, v9);
  if ( EnableEntityList )
  {
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1BDBADC(Instance, v7, v10);
        v13 = EnableEntityList->m_Items[v12];
        if ( !v13 )
          break;
        if ( v13->fields.bannerId >= 1 )
        {
          Instance = (__int64)this->fields.bannerGrid;
          if ( !Instance )
            break;
          bannerPrefab = this->fields.bannerPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (__int64)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                bannerPrefab,
                                transform,
                                0LL,
                                0LL);
          if ( !Instance )
            break;
          v16 = (UnityEngine_GameObject_o *)Instance;
          Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          v17 = (UnityEngine_Transform_o *)Instance;
          if ( !byte_4B3E916 )
          {
            Instance = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v7);
            byte_4B3E916 = 1;
          }
          if ( !v17 )
            break;
          UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v16,
                                (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v13, v18);
          Instance = (__int64)this->fields.bannerList;
          if ( !Instance )
            break;
          v21 = *(_QWORD *)(Instance + 16);
          v22 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v21 )
            break;
          v23 = *(int *)(Instance + 24);
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v16,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = v21 + 8 * v23;
            *(_DWORD *)(Instance + 24) = v23 + 1;
            *(_QWORD *)(v24 + 32) = v16;
            sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v16, v19, v20);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1BDBAD4(Instance, v7);
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