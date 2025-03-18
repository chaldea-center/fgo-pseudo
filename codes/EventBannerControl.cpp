void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C259C2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4C259C2 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bannerIdList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bannerObjList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4C259C0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C259C0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerObjList) == 0LL) )
  {
LABEL_14:
    sub_1C3B9C0(gameObject, v7);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v8 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v8,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)Item, 0LL);
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
  int max_length; // w8
  __int64 v8; // x26
  EventEntity_o *v9; // x21
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v15; // x22
  EventBannerControl_o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8

  v2 = this;
  if ( (byte_4C259C1 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v3);
    this = (EventBannerControl_o *)sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    byte_4C259C1 = 1;
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
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C3B9C8(this, method);
        v9 = combineEventList->m_Items[v8];
        if ( !v9 )
          break;
        method = (const MethodInfo *)(unsigned int)v9->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          v10 = *(_QWORD *)&this->fields.m_CachedPtr;
          v11 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v10 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v10 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
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
          v15 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v16 = this;
          if ( !byte_4C1C516 )
          {
            this = (EventBannerControl_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, method);
            byte_4C1C516 = 1;
          }
          if ( !v16 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v16,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v15,
                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v9, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v23 = *(_QWORD *)&this->fields.m_CachedPtr;
          v24 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v23 )
            break;
          v25 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v15,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = v23 + 8 * v25;
            LODWORD(this->fields.m_CancellationTokenSource) = v25 + 1;
            *(_QWORD *)(v26 + 32) = v15;
            sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v15, v17, v18, v19, v20, v21, v22);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C3B9C0(this, method);
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