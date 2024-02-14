void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4216E32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4216E32 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bannerIdList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bannerObjList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBannerControl__ClearBanner(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *bannerObjList; // x20
  signed __int64 size; // x8
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4216E30 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216E30 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerObjList = this->fields.bannerObjList) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  LODWORD(size) = bannerObjList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v10 = (UnityEngine_Object_o *)bannerObjList->fields._items->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v10, 0LL);
      bannerObjList = this->fields.bannerObjList;
      if ( !bannerObjList )
        goto LABEL_16;
      size = bannerObjList->fields._size;
      ++v9;
    }
    while ( (__int64)v9 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerObjList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  EventBannerControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x23
  __int64 v7; // x8
  __int64 v8; // x25
  EventBannerControl_o **p_bannerGrid; // x24
  EventEntity_o *v10; // x20
  int32_t bannerId; // w1
  UnityEngine_GameObject_o *bannerPf; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  int v16; // s0
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4216E31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v3);
    this = (EventBannerControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    byte_4216E31 = 1;
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
    v7 = *(_QWORD *)&combineEventList->max_length;
    if ( (int)v7 > 0 )
    {
      v8 = 0LL;
      p_bannerGrid = (EventBannerControl_o **)&v2->fields.bannerGrid;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= (unsigned int)v7 )
        {
          v19 = sub_B0D9A8(this);
          sub_B0D948(v19, 0LL);
        }
        v10 = combineEventList->m_Items[v8];
        if ( !v10 )
          break;
        bannerId = v10->fields.bannerId;
        if ( bannerId >= 1 )
        {
          this = (EventBannerControl_o *)v2->fields.bannerIdList;
          if ( !this )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            bannerId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
          v14 = (UnityEngine_GameObject_o *)this;
          v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
          if ( !v15 )
            break;
          UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
          this = (EventBannerControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v14,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !this )
            break;
          BannerComponent__SetBanner((BannerComponent_o *)this, v10, 0LL);
          this = (EventBannerControl_o *)v2->fields.bannerObjList;
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v7 = *(_QWORD *)&combineEventList->max_length;
        }
        if ( (int)++v8 >= (int)v7 )
          goto LABEL_22;
      }
LABEL_24:
      sub_B0D97C(this);
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