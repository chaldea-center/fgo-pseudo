void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E94D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5E94D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bannerIdList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bannerObjList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  int32_t v7; // w2
  int v8; // w8

  if ( (byte_4A5E94B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E94B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerObjList) == 0LL) )
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
      gameObject = this->fields.bannerObjList;
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


void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x24
  int max_length; // w8
  __int64 v6; // x26
  EventEntity_o *v7; // x21
  __int64 v8; // x8
  _QWORD *v9; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v13; // x22
  EventBannerControl_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8

  v2 = this;
  if ( (byte_4A5E94C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventBannerControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4A5E94C = 1;
  }
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_31;
  combineEventList = combineData->fields.combineEventList;
  this = (EventBannerControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_31;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1B88814(this, method);
        v7 = combineEventList->m_Items[v6];
        if ( !v7 )
          break;
        method = (const MethodInfo *)(unsigned int)v7->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          v8 = *(_QWORD *)&this->fields.m_CachedPtr;
          v9 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v8 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v8 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v8 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (EventBannerControl_o *)v2->fields.bannerGrid;
          if ( !this )
            break;
          bannerPf = v2->fields.bannerPf;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (EventBannerControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v2,
                                           bannerPf,
                                           transform,
                                           0LL,
                                           0LL);
          if ( !this )
            break;
          v13 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v14 = this;
          if ( !byte_4A55CE6 )
          {
            this = (EventBannerControl_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          if ( !v14 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v14,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v13,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v7, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v17 = *(_QWORD *)&this->fields.m_CachedPtr;
          v18 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v17 )
            break;
          v19 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v13,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = v17 + 8 * v19;
            LODWORD(this->fields.m_CancellationTokenSource) = v19 + 1;
            *(_QWORD *)(v20 + 32) = v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v13, v15, v16);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B8880C(this, method);
    }
LABEL_28:
    this = (EventBannerControl_o *)v2->fields.bannerGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(EventBannerControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
}