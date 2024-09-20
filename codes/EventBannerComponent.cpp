void __fastcall EventBannerComponent___ctor(EventBannerComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A5EB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5A5EB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bannerList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerComponent__ClearBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  int32_t v7; // w2
  int v8; // w8

  if ( (byte_4A5A5E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5E9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerList) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(gameObject, v4);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v5,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Item, 0LL);
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
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v7, 0LL);
  }
}


void __fastcall EventBannerComponent__SetBanner(EventBannerComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
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
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8

  if ( (byte_4A5A5EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A5EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 6, 1, 0LL);
  EventBannerComponent__ClearBanner(this, v6);
  if ( EnableEntityList )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1B88814(Instance, v4);
        v9 = EnableEntityList->m_Items[v8];
        if ( !v9 )
          break;
        if ( v9->fields.bannerId >= 1 )
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
          v12 = (UnityEngine_GameObject_o *)Instance;
          Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
          v13 = (UnityEngine_Transform_o *)Instance;
          if ( !byte_4A55CE6 )
          {
            Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          if ( !v13 )
            break;
          UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v12,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Instance )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)Instance, v9, v14);
          Instance = (DataManager_o *)this->fields.bannerList;
          if ( !Instance )
            break;
          v17 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v18 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v17 )
            break;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v12,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = v17 + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v20 + 32) = v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v12, v15, v16);
          }
        }
        max_length = EnableEntityList->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1B8880C(Instance, v4);
    }
LABEL_24:
    Instance = (DataManager_o *)this->fields.bannerGrid;
    if ( !Instance )
      goto LABEL_27;
    ((void (__fastcall *)(DataManager_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
      Instance,
      Instance->klass[1]._1.declaringType);
  }
}