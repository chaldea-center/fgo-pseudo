void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FFB64 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_49FFB64 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerIdList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerObjList, (int32_t)v12, v13, v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *gameObject; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  int32_t v9; // w2
  int v10; // w8

  if ( (byte_49FFB62 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FFB62 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerObjList) == 0LL) )
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
      gameObject = this->fields.bannerObjList;
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


void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x24
  __int64 bannerId; // x1
  int max_length; // w8
  __int64 v9; // x26
  EventEntity_o *v10; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v16; // x22
  __int64 v17; // x1
  EventBannerControl_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8

  v2 = this;
  if ( (byte_49FFB63 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v3);
    this = (EventBannerControl_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    byte_49FFB63 = 1;
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
          sub_1B6432C(this, bannerId);
        v10 = combineEventList->m_Items[v9];
        if ( !v10 )
          break;
        bannerId = (unsigned int)v10->fields.bannerId;
        if ( (int)bannerId >= 1 )
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
              bannerId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v11 + 4 * m_CancellationTokenSource_low + 32) = bannerId;
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
          v18 = this;
          if ( !byte_49F7116 )
          {
            this = (EventBannerControl_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
            byte_49F7116 = 1;
          }
          if ( !v18 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v18,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v16,
                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v10, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v21 = *(_QWORD *)&this->fields.m_CachedPtr;
          v22 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v21 )
            break;
          v23 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v16,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = v21 + 8 * v23;
            LODWORD(this->fields.m_CancellationTokenSource) = v23 + 1;
            *(_QWORD *)(v24 + 32) = v16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v16, v19, v20);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B64324(this);
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