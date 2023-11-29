void __fastcall EventBannerControl___ctor(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FC51D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    byte_40FC51D = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.bannerIdList = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bannerIdList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.bannerObjList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bannerObjList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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

  if ( (byte_40FC51B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC51B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (bannerObjList = this->fields.bannerObjList) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  LODWORD(size) = bannerObjList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = (UnityEngine_Object_o *)bannerObjList->fields._items->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v10, 0LL);
      bannerObjList = this->fields.bannerObjList;
      if ( !bannerObjList )
        goto LABEL_16;
      size = bannerObjList->fields._size;
      ++v9;
    }
    while ( (__int64)v9 < size );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bannerObjList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBannerControl__setBannerList(EventBannerControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x0
  __int64 bannerId; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  __int64 v12; // x25
  UnityEngine_Component_o **p_bannerGrid; // x24
  EventEntity_o *v14; // x20
  System_Collections_Generic_List_int__o *bannerIdList; // x0
  UnityEngine_GameObject_o *bannerPf; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  BannerComponent_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *bannerObjList; // x0

  if ( (byte_40FC51C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BannerComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    byte_40FC51C = 1;
  }
  combineData = this->fields.combineData;
  if ( !combineData )
    goto LABEL_24;
  combineEventList = combineData->fields.combineEventList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( combineEventList )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v11 = *(_QWORD *)&combineEventList->max_length;
    if ( (int)v11 > 0 )
    {
      v12 = 0LL;
      p_bannerGrid = (UnityEngine_Component_o **)&this->fields.bannerGrid;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= (unsigned int)v11 )
        {
          sub_B17100(v8, bannerId, v10);
          sub_B170A0();
        }
        v14 = combineEventList->m_Items[v12];
        if ( !v14 )
          break;
        bannerId = (unsigned int)v14->fields.bannerId;
        if ( (int)bannerId >= 1 )
        {
          bannerIdList = this->fields.bannerIdList;
          if ( !bannerIdList )
            break;
          System_Collections_Generic_List_int___Add(
            bannerIdList,
            bannerId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*p_bannerGrid )
            break;
          bannerPf = this->fields.bannerPf;
          transform = UnityEngine_Component__get_transform(*p_bannerGrid, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPf, transform, 0LL, 0LL);
          if ( !Object )
            break;
          v19 = Object;
          v20 = UnityEngine_GameObject__get_transform(Object, 0LL);
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
          if ( !v20 )
            break;
          UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
          Component_srcLineSprite = (BannerComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v19,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BannerComponent___);
          if ( !Component_srcLineSprite )
            break;
          BannerComponent__SetBanner(Component_srcLineSprite, v14, 0LL);
          bannerObjList = this->fields.bannerObjList;
          if ( !bannerObjList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bannerObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v11 = *(_QWORD *)&combineEventList->max_length;
        }
        if ( (int)++v12 >= (int)v11 )
          goto LABEL_22;
      }
LABEL_24:
      sub_B170D4();
    }
    p_bannerGrid = (UnityEngine_Component_o **)&this->fields.bannerGrid;
LABEL_22:
    if ( !*p_bannerGrid )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))(*p_bannerGrid)->klass[1]._1.castClass)(
      *p_bannerGrid,
      (*p_bannerGrid)->klass[1]._1.declaringType);
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}