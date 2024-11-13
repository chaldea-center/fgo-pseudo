void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B19A9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10);
    byte_4B19A9E = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bannerIdList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bannerObjList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
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

  if ( (byte_4B19A9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B19A9C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = this->fields.bannerObjList) == 0LL) )
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
      gameObject = this->fields.bannerObjList;
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


void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x24
  int max_length; // w8
  __int64 v11; // x26
  EventEntity_o *v12; // x21
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v18; // x22
  __int64 v19; // x2
  EventBannerControl_o *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8

  v3 = this;
  if ( (byte_4B19A9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v4, v5);
    this = (EventBannerControl_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7);
    byte_4B19A9D = 1;
  }
  combineData = v3->fields.combineData;
  if ( !combineData )
    goto LABEL_31;
  combineEventList = combineData->fields.combineEventList;
  this = (EventBannerControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_31;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1BCAA44(this, method);
        v12 = combineEventList->m_Items[v11];
        if ( !v12 )
          break;
        method = (const MethodInfo *)(unsigned int)v12->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v3->fields.bannerIdList;
          if ( !this )
            break;
          v13 = *(_QWORD *)&this->fields.m_CachedPtr;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v13 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v13 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (EventBannerControl_o *)v3->fields.bannerGrid;
          if ( !this )
            break;
          bannerPf = v3->fields.bannerPf;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (EventBannerControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v3,
                                           bannerPf,
                                           transform,
                                           0LL,
                                           0LL);
          if ( !this )
            break;
          v18 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v20 = this;
          if ( !byte_4B109C6 )
          {
            this = (EventBannerControl_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v19);
            byte_4B109C6 = 1;
          }
          if ( !v20 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v20,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v18,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v12, 0LL);
          this = (EventBannerControl_o *)v3->fields.bannerObjList;
          if ( !this )
            break;
          v27 = *(_QWORD *)&this->fields.m_CachedPtr;
          v28 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v27 )
            break;
          v29 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v18,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = v27 + 8 * v29;
            LODWORD(this->fields.m_CancellationTokenSource) = v29 + 1;
            *(_QWORD *)(v30 + 32) = v18;
            sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v18, v21, v22, v23, v24, v25, v26);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BCAA3C(this, method);
    }
LABEL_28:
    this = (EventBannerControl_o *)v3->fields.bannerGrid;
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