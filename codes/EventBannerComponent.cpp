void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB8B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_49FB8B3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerList, (int32_t)v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *gameObject; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  int32_t v9; // w2
  int v10; // w8

  if ( (byte_49FB8B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FB8B1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerList) == 0LL) )
  {
LABEL_14:
    sub_1B64324(gameObject);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v7,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Item, 0LL);
      gameObject = this->fields.bannerList;
      if ( !gameObject )
        goto LABEL_14;
      v9 = *((_DWORD *)gameObject + 6);
      ++v7;
    }
    while ( v7 < v9 );
    v10 = *((_DWORD *)gameObject + 7) + 1;
    *((_DWORD *)gameObject + 6) = 0;
    *((_DWORD *)gameObject + 7) = v10;
    if ( v9 >= 1 )
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v9, 0LL);
  }
}


void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Instance; // x0
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  int max_length; // w8
  __int64 v11; // x26
  EventEntity_o *v12; // x23
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x22
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  if ( (byte_49FB8B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FB8B2 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v8);
  if ( EnableEntityList )
  {
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1B6432C(Instance, v9);
        v12 = EnableEntityList->m_Items[v11];
        if ( !v12 )
          break;
        if ( v12->fields.bannerId >= 1 )
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
          v15 = (UnityEngine_GameObject_o *)Instance;
          Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          v17 = (UnityEngine_Transform_o *)Instance;
          if ( !byte_49F7116 )
          {
            Instance = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
            byte_49F7116 = 1;
          }
          if ( !v17 )
            break;
          UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v15,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v12, 0LL);
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
              (Il2CppObject *)v15,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = v20 + 8 * v22;
            *(_DWORD *)(Instance + 24) = v22 + 1;
            *(_QWORD *)(v23 + 32) = v15;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v15, v18, v19);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1B64324(Instance);
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