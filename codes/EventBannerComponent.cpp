void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B15655 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B15655 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bannerList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w20
  __int64 v13; // x1
  Il2CppObject *Item; // x21
  int32_t v15; // w2
  int v16; // w8

  if ( (byte_4B15653 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B15653 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerList) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, v11);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v12 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v12,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
      gameObject = this->fields.bannerList;
      if ( !gameObject )
        goto LABEL_14;
      v15 = *((_DWORD *)gameObject + 6);
      ++v12;
    }
    while ( v12 < v15 );
    v16 = *((_DWORD *)gameObject + 7) + 1;
    *((_DWORD *)gameObject + 6) = 0;
    *((_DWORD *)gameObject + 7) = v16;
    if ( v15 >= 1 )
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v15, 0LL);
  }
}


void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 Instance; // x0
  __int64 v11; // x1
  EventEntity_array *EnableEntityList; // x20
  const MethodInfo *v13; // x1
  int max_length; // w8
  __int64 v15; // x26
  EventEntity_o *v16; // x23
  UnityEngine_GameObject_o *bannerPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v19; // x22
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x24
  const MethodInfo *v22; // x2
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8

  if ( (byte_4B15654 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15654 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v13);
  if ( EnableEntityList )
  {
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1BCAA44(Instance, v11);
        v16 = EnableEntityList->m_Items[v15];
        if ( !v16 )
          break;
        if ( v16->fields.bannerId >= 1 )
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
          v19 = (UnityEngine_GameObject_o *)Instance;
          Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          v21 = (UnityEngine_Transform_o *)Instance;
          if ( !byte_4B109C6 )
          {
            Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v20);
            byte_4B109C6 = 1;
          }
          if ( !v21 )
            break;
          UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v19,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v16, v22);
          Instance = (__int64)this->fields.bannerList;
          if ( !Instance )
            break;
          v29 = *(_QWORD *)(Instance + 16);
          v30 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v29 )
            break;
          v31 = *(int *)(Instance + 24);
          if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v19,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * v31;
            *(_DWORD *)(Instance + 24) = v31 + 1;
            *(_QWORD *)(v32 + 32) = v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v19, v23, v24, v25, v26, v27, v28);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1BCAA3C(Instance, v11);
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