void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EB879 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    byte_42EB879 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.bannerIdList = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerIdList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerObjList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_GameObject__o *bannerObjList; // x20
  signed __int64 size; // x8
  unsigned __int64 v18; // x21
  UnityEngine_Object_o *v19; // x20

  if ( (byte_42EB877 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EB877 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerObjList = this->fields.bannerObjList) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v15);
  }
  LODWORD(size) = bannerObjList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = (UnityEngine_Object_o *)bannerObjList->fields._items->m_Items[v18];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v19, 0LL);
      bannerObjList = this->fields.bannerObjList;
      if ( !bannerObjList )
        goto LABEL_16;
      size = bannerObjList->fields._size;
      ++v18;
    }
    while ( (__int64)v18 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerObjList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventBannerControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x23
  __int64 v13; // x8
  __int64 v14; // x25
  EventBannerControl_o **p_bannerGrid; // x24
  EventEntity_o *v16; // x20
  UnityEngine_GameObject_o *bannerPf; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  __int64 v24; // x0

  v4 = this;
  if ( (byte_42EB878 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6, v7);
    this = (EventBannerControl_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    byte_42EB878 = 1;
  }
  combineData = v4->fields.combineData;
  if ( !combineData )
    goto LABEL_24;
  combineEventList = combineData->fields.combineEventList;
  this = (EventBannerControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_24;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v13 = *(_QWORD *)&combineEventList->max_length;
    if ( (int)v13 > 0 )
    {
      v14 = 0LL;
      p_bannerGrid = (EventBannerControl_o **)&v4->fields.bannerGrid;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= (unsigned int)v13 )
        {
          v24 = sub_B5D6C8(this);
          sub_B5D668(v24, 0LL);
        }
        v16 = combineEventList->m_Items[v14];
        if ( !v16 )
          break;
        method = (const MethodInfo *)(unsigned int)v16->fields.bannerId;
        if ( (int)method >= 1 )
        {
          this = (EventBannerControl_o *)v4->fields.bannerIdList;
          if ( !this )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)method,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          this = *p_bannerGrid;
          if ( !*p_bannerGrid )
            break;
          bannerPf = v4->fields.bannerPf;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (EventBannerControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           bannerPf,
                                           transform,
                                           0LL,
                                           0LL);
          if ( !this )
            break;
          v19 = (UnityEngine_GameObject_o *)this;
          v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
          if ( !v20 )
            break;
          UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v19,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v16, 0LL);
          this = (EventBannerControl_o *)v4->fields.bannerObjList;
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v13 = *(_QWORD *)&combineEventList->max_length;
        }
        if ( (int)++v14 >= (int)v13 )
          goto LABEL_22;
      }
LABEL_24:
      sub_B5D69C(this, method);
    }
    p_bannerGrid = (EventBannerControl_o **)&v4->fields.bannerGrid;
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