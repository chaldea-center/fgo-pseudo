void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438E801 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_438E801 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.bannerIdList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bannerIdList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bannerObjList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *bannerObjList; // x20
  signed __int64 size; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  if ( (byte_438E7FF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E7FF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerObjList = this->fields.bannerObjList) == 0LL) )
  {
LABEL_16:
    sub_B7769C(gameObject, v4);
  }
  LODWORD(size) = bannerObjList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = (UnityEngine_Object_o *)bannerObjList->fields._items->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v8, 0LL);
      bannerObjList = this->fields.bannerObjList;
      if ( !bannerObjList )
        goto LABEL_16;
      size = bannerObjList->fields._size;
      ++v7;
    }
    while ( (__int64)v7 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerObjList,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x23
  __int64 v5; // x8
  __int64 v6; // x25
  EventBannerControl_o **p_bannerGrid; // x24
  EventEntity_o *v8; // x20
  UnityEngine_GameObject_o *bannerPf; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *v12; // x22
  int v13; // s0
  __int64 v16; // x0

  v2 = this;
  if ( (byte_438E800 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (EventBannerControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    byte_438E800 = 1;
  }
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_24;
  combineEventList = combineData->fields.combineEventList;
  this = (EventBannerControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_24;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v5 = *(_QWORD *)&combineEventList->max_length;
    if ( (int)v5 > 0 )
    {
      v6 = 0LL;
      p_bannerGrid = (EventBannerControl_o **)&v2->fields.bannerGrid;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= (unsigned int)v5 )
        {
          v16 = sub_B776C8(this);
          sub_B77668(v16, 0LL);
        }
        v8 = combineEventList->m_Items[v6];
        if ( !v8 )
          break;
        method = (const MethodInfo *)(unsigned int)v8->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)method,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          this = *p_bannerGrid;
          if ( !*p_bannerGrid )
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
          v11 = (UnityEngine_GameObject_o *)this;
          v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
          if ( !v12 )
            break;
          UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v11,
                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v8, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v5 = *(_QWORD *)&combineEventList->max_length;
        }
        if ( (int)++v6 >= (int)v5 )
          goto LABEL_22;
      }
LABEL_24:
      sub_B7769C(this, method);
    }
    p_bannerGrid = (EventBannerControl_o **)&v2->fields.bannerGrid;
LABEL_22:
    this = *p_bannerGrid;
    if ( !*p_bannerGrid )
      goto LABEL_24;
    ((void (__fastcall *)(EventBannerControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
}