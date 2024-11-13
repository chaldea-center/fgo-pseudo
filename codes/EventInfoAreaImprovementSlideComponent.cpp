void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_BD2CE0;
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (PartyOrganizationUtility_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_1BCA784(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (PartyOrganizationUtility_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_1BCA784(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupBeforeSlidePosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupDisp(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *infoObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B169A4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169A4 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v6 = this->fields.infoObject;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *infoObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B169A5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169A5 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v6 = this->fields.infoObject;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
    GameObjectExtensions__SetLocalPosition(this->fields.infoObject, this->fields.slideInStartedPosition, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.slideDownEndedPosition, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_GameObject_o *v20; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v23; // x10
  float v24; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B169A6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, endCallbackAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12, v13);
    sub_1BCA7E0(&StringLiteral_6110/*"EndSlideDown"*/, v14, v15);
    byte_4B169A6 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endCallbackAction,
    (int64_t)endCallbackAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v20 = gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v18);
    byte_4B109C1 = 1;
  }
  if ( !v20 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v20[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v20[5].fields.m_CachedPtr = z;
  v23 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v24 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v20[2].monitor) = 1045220557;
  LODWORD(v20[1].monitor) = 3;
  *((float *)&v20[6].klass + 1) = v24;
  *(_QWORD *)(&v20[5].fields + 1) = v23;
  klass = (System_Collections_Generic_List_object__o *)v20[3].klass;
  v26 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v17, v18, v19);
  EventDelegate___ctor_47349156(v26, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6110/*"EndSlideDown"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v34 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BCAA3C(gameObject, v17);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v36 = &items->obj.klass + size;
    v36[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *infoObject; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  UnityEngine_GameObject_o *v24; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v27; // d0
  float z; // s1
  EventDelegate_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  void *v40; // [xsp+0h] [xbp-40h]

  if ( (byte_4B169A7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, endCallbackAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6111/*"EndSlideIn"*/, v11, v12);
    byte_4B169A7 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallbackAction);
  if ( UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    ActionExtensions__Call(endCallbackAction, 0LL);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.endCallbackAction,
      (int64_t)endCallbackAction,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v21 = this->fields.infoObject;
    if ( !v21 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v21, 1, 0LL);
    v21 = this->fields.infoObject;
    if ( !v21 )
      goto LABEL_17;
    v21 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v21,
                                        (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v40 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v21 )
      goto LABEL_17;
    v24 = v21;
    v21[5].fields.m_CachedPtr = LODWORD(this->fields.slideInStartedPosition.fields.z);
    v21[5].monitor = v40;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v22);
      byte_4B109C1 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v24[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v27 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v24[2].monitor) = 1045220557;
    LODWORD(v24[1].monitor) = 2;
    *(_QWORD *)(&v24[5].fields + 1) = v27;
    *((float *)&v24[6].klass + 1) = z;
    v29 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v20, v22, v23);
    EventDelegate___ctor_47349156(v29, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6111/*"EndSlideIn"*/, 0LL);
    if ( !klass
      || (items = klass->fields._items,
          v37 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1BCAA3C(v21, v20);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v29,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v39[4] = (Il2CppClass *)v29;
      sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v29, v30, v31, v32, v33, v34, v35);
    }
  }
}


int32_t __fastcall EventInfoAreaImprovementSlideComponent__get_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void __fastcall EventInfoAreaImprovementSlideComponent__set_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}