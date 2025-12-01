void EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCB41C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CCB41C = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bannerIdList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bannerObjList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  int32_t v7; // w2
  int v8; // w8

  if ( (byte_4CCB41A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB41A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = this->fields.bannerObjList) == 0) )
  {
LABEL_14:
    sub_1C71608(gameObject, v4);
  }
  if ( *((int *)gameObject + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               v5,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)Item, 0);
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
      System_Array__Clear(*((System_Array_o **)gameObject + 2), 0, v7, 0);
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v9; // x9
  __int64 m_CancellationTokenSource_low; // x10
  UnityEngine_GameObject_o *bannerPf; // x22
  UnityEngine_Transform_o *transform; // x0
  EventBannerControl_o *v13; // x22
  EventBannerControl_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  intptr_t v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  intptr_t v24; // x8

  v2 = this;
  if ( (byte_4CCB41B & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventBannerControl_o *)sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4CCB41B = 1;
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
          sub_1C71610(this);
        v7 = combineEventList->m_Items[v6];
        if ( !v7 )
          break;
        method = (const MethodInfo *)(unsigned int)v7->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          m_CachedPtr = this->fields.m_CachedPtr;
          v9 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
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
          v13 = this;
          this = (EventBannerControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          v14 = this;
          if ( !byte_4CC0D0E )
          {
            this = (EventBannerControl_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
            byte_4CC0D0E = 1;
          }
          if ( !v14 )
            break;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v14,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v13,
                                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v7, 0);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          v21 = this->fields.m_CachedPtr;
          v22 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v21 )
            break;
          v23 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v13,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = v21 + 8 * v23;
            LODWORD(this->fields.m_CancellationTokenSource) = v23 + 1;
            *(_QWORD *)(v24 + 32) = v13;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C71608(this, method);
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