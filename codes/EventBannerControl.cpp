void EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46EFA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C46EFA = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerIdList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerObjList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  int32_t v4; // w20
  Il2CppObject *Item; // x21
  int32_t v6; // w2
  int v7; // w8

  if ( (byte_4C46EF8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46EF8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = this->fields.bannerObjList) == 0) )
  {
LABEL_14:
    sub_1C372B4(gameObject);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v4,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)Item, 0);
      gameObject = this->fields.bannerObjList;
      if ( !gameObject )
        goto LABEL_14;
      v6 = *((_DWORD *)gameObject + 6);
      ++v4;
    }
    while ( v4 < v6 );
    v7 = *((_DWORD *)gameObject + 7) + 1;
    *((_DWORD *)gameObject + 6) = 0;
    *((_DWORD *)gameObject + 7) = v7;
    if ( v6 >= 1 )
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v6, 0);
  }
}


void EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x24
  int max_length; // w8
  __int64 v6; // x26
  EventEntity_o *v7; // x21
  int32_t bannerId; // w1
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v14; // x22
  EventBannerControl_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  intptr_t v21; // x8

  v2 = this;
  if ( (byte_4C46EF9 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventBannerControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4C46EF9 = 1;
  }
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_31;
  combineEventList = combineData->fields.combineEventList;
  this = (EventBannerControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_31;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C372BC(this);
        v7 = combineEventList->m_Items[v6];
        if ( !v7 )
          break;
        bannerId = v7->fields.bannerId;
        if ( bannerId >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          m_CachedPtr = this->fields.m_CachedPtr;
          v10 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              bannerId,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = bannerId;
          }
          this = (EventBannerControl_o *)v2->fields.bannerGrid;
          if ( !this )
            break;
          bannerPf = v2->fields.bannerPf;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this = (EventBannerControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v2,
                                           bannerPf,
                                           transform,
                                           0,
                                           0);
          if ( !this )
            break;
          v14 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          v15 = this;
          if ( !byte_4C3C926 )
          {
            this = (EventBannerControl_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C926 = 1;
          }
          if ( !v15 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v15,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v7, 0);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v18 = this->fields.m_CachedPtr;
          v19 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v18 )
            break;
          v20 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v14,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = v18 + 8 * v20;
            LODWORD(this->fields.m_CancellationTokenSource) = v20 + 1;
            *(_QWORD *)(v21 + 32) = v14;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v14, v16, v17);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C372B4(this);
    }
LABEL_28:
    this = (EventBannerControl_o *)v2->fields.bannerGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(EventBannerControl_o *, Il2CppClass *))this->klass[1]._1.element_class)(
      this,
      this->klass[1]._1.castClass);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
}