void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B05D75 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4B05D75 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.bannerIdList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.bannerObjList, (int32_t)v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
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

  if ( (byte_4B05D73 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B05D73 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerObjList) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(gameObject, v7);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v8 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v8,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)Item, 0LL);
      gameObject = this->fields.bannerObjList;
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


void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x24
  __int64 v7; // x2
  int max_length; // w8
  __int64 v9; // x26
  EventEntity_o *v10; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v16; // x22
  EventBannerControl_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  v2 = this;
  if ( (byte_4B05D74 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v3);
    this = (EventBannerControl_o *)sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    byte_4B05D74 = 1;
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
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= max_length )
          sub_1BC326C(this, method, v7);
        v10 = combineEventList->m_Items[v9];
        if ( !v10 )
          break;
        method = (const MethodInfo *)(unsigned int)v10->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          v11 = *(_QWORD *)&this->fields.m_CachedPtr;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v11 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v11 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v11 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
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
          v16 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v17 = this;
          if ( !byte_4AFBDB6 )
          {
            this = (EventBannerControl_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
            byte_4AFBDB6 = 1;
          }
          if ( !v17 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v17,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v16,
                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v10, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v20 = *(_QWORD *)&this->fields.m_CachedPtr;
          v21 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v20 )
            break;
          v22 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v16,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = v20 + 8 * v22;
            LODWORD(this->fields.m_CancellationTokenSource) = v22 + 1;
            *(_QWORD *)(v23 + 32) = v16;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v16, v18, v19);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BC3264(this, method);
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