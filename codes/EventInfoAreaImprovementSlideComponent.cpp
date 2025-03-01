void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_C066A0;
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
  sub_1C2E0D0(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C2E0D0(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BFDEFC & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFDEFC = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BFDEFD & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFDEFD = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v18; // x10
  float v19; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4BFDEFE & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1C2E12C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1C2E12C(&StringLiteral_6146/*"EndSlideDown"*/, v12);
    byte_4BFDEFE = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1C2E0D0(
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
                                             (const MethodInfo_3022A24 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v15 = gameObject;
  if ( !byte_4BF7D91 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4BF7D91 = 1;
  }
  if ( !v15 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v15[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v15[5].fields.m_CachedPtr = z;
  v18 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v19 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v15[2].monitor) = 1045220557;
  LODWORD(v15[1].monitor) = 3;
  *((float *)&v15[6].klass + 1) = v19;
  *(_QWORD *)(&v15[5].fields + 1) = v18;
  klass = (System_Collections_Generic_List_object__o *)v15[3].klass;
  v21 = (EventDelegate_o *)sub_1C2E378(EventDelegate_TypeInfo);
  EventDelegate___ctor_48099320(v21, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6146/*"EndSlideDown"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v29 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C2E388(gameObject, v14);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v21,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v31 = &items->obj.klass + size;
    v31[4] = (Il2CppClass *)v21;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *infoObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v21; // d0
  float z; // s1
  EventDelegate_o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  void *v34; // [xsp+0h] [xbp-40h]

  if ( (byte_4BFDEFF & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1C2E12C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_6147/*"EndSlideIn"*/, v8);
    byte_4BFDEFF = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    ActionExtensions__Call(endCallbackAction, 0LL);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.endCallbackAction,
      (int64_t)endCallbackAction,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v17 = this->fields.infoObject;
    if ( !v17 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v17, 1, 0LL);
    v17 = this->fields.infoObject;
    if ( !v17 )
      goto LABEL_17;
    v17 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v17,
                                        (const MethodInfo_3022A24 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v34 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v17 )
      goto LABEL_17;
    v18 = v17;
    v17[5].fields.m_CachedPtr = LODWORD(this->fields.slideInStartedPosition.fields.z);
    v17[5].monitor = v34;
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v16);
      byte_4BF7D91 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v18[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v21 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v18[2].monitor) = 1045220557;
    LODWORD(v18[1].monitor) = 2;
    *(_QWORD *)(&v18[5].fields + 1) = v21;
    *((float *)&v18[6].klass + 1) = z;
    v23 = (EventDelegate_o *)sub_1C2E378(EventDelegate_TypeInfo);
    EventDelegate___ctor_48099320(v23, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6147/*"EndSlideIn"*/, 0LL);
    if ( !klass
      || (items = klass->fields._items,
          v31 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1C2E388(v17, v16);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v23,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v23;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
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