void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Vector3_c *v13; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v16; // x8
  __int64 v17; // d0
  float v18; // s1
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  QAASpotStateController_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B12CB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v9, v10);
    sub_1BCA7E0(&QAASpotStateController_TypeInfo, v11, v12);
    byte_4B12CB0 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_BD2790;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  v13 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v16 = v13->static_fields;
  v17 = *(_QWORD *)&v16->zeroVector.fields.x;
  v18 = v16->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v17;
  this->fields.changedUiRootPosition.fields.z = v18;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.areaInfoList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.listBillboardChildWidget,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v39 = (QAASpotStateController_o *)sub_1BCAA2C(QAASpotStateController_TypeInfo, v36, v37, v38);
  QAASpotStateController___ctor(v39, 0LL);
  this->fields.stateController = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateController, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_object__o *v21; // x20

  if ( (byte_4B12CAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Component__TypeInfo, targets, method);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_Component___, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_Component___, v8, v9);
    sub_1BCA7E0(&Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__, v10, v11);
    sub_1BCA7E0(&BlankEarthPoint___c__DisplayClass101_0_TypeInfo, v12, v13);
    byte_4B12CAA = 1;
  }
  v14 = sub_1BCAA2C(BlankEarthPoint___c__DisplayClass101_0_TypeInfo, targets, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_BYTE *)(v14 + 16) = value;
  v17 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_Component___);
  v21 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Component__TypeInfo, v18, v19, v20);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)v21,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthPoint_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v17; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  int64_t v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v27; // x8
  __int64 v28; // x21
  unsigned __int64 v29; // x22
  unsigned __int64 v30; // x9
  BlankEarthPoint_OffsetTargetObject_o *v31; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v33; // s0
  int v34; // s1
  int v35; // s2
  _DWORD *v36; // x8
  __int64 v37; // x1
  UnityEngine_Object_o *anim; // x20
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Object_array *v48; // x1
  _QWORD *v49; // x20
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9

  v3 = this;
  if ( (byte_4B12CA2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_AnimationState___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_AnimationState___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    this = (BlankEarthPoint_o *)sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v14, v15);
    byte_4B12CA2 = 1;
  }
  uiBillboardTransforms = v3->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v17 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v17 >= max_length )
        break;
      if ( (unsigned int)v17 >= max_length )
LABEL_45:
        sub_1BCAA44(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v17];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
        if ( v3->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v3->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v3->fields.uiBillboardTransforms;
          ++v17;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_44;
    }
  }
  offsetTargetObjects = v3->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v20 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v3->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v20;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields.defaultLocalPosOffsetTargetObjects,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = v3->fields.offsetTargetObjects;
    if ( !v27 )
      goto LABEL_44;
    v28 = 0LL;
    v29 = 0LL;
    while ( 1 )
    {
      v30 = v27->max_length;
      if ( (__int64)v29 >= (int)v30 )
        break;
      if ( v29 >= v30 )
        goto LABEL_45;
      v31 = v27->m_Items[v29];
      if ( v31 )
      {
        this = (BlankEarthPoint_o *)v31->fields.targetObject;
        if ( !this )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects = v3->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_44;
        if ( v29 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_45;
        v36 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v28);
        v36[8] = v33;
        v36[9] = v34;
        v36[10] = v35;
        v27 = v3->fields.offsetTargetObjects;
      }
      ++v29;
      v28 += 12LL;
      if ( !v27 )
        goto LABEL_44;
    }
  }
  this = (BlankEarthPoint_o *)v3->fields.stateController;
  if ( !this )
LABEL_44:
    sub_1BCAA3C(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v3, 0LL);
  anim = (UnityEngine_Object_o *)v3->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v3->fields.anim,
                                                                 (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v48 = System_Linq_Enumerable__ToArray_object_(
            v47,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v49 = Method_System_Array_Empty_AnimationState___;
    v50 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v50 )
    {
      sub_1C1C718(Method_System_Array_Empty_AnimationState___, v39);
      v50 = v49[7];
    }
    v51 = *(_QWORD *)(v50 + 16);
    if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
      v51 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v51 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v51, v39);
    v52 = *(_QWORD *)(v49[7] + 16LL);
    if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
      v52 = sub_1C1C6BC(inited);
    v48 = **(System_Object_array ***)(v52 + 184);
  }
  v3->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.animationStateArray, (int64_t)v48, v40, v41, v42, v43, v44, v45);
  pinObject = (UnityEngine_Object_o *)v3->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    this = (BlankEarthPoint_o *)v3->fields.pinObject;
    if ( this )
    {
      this = (BlankEarthPoint_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( this )
      {
        v3->fields.defaultPinObjectPosition = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL);
        goto LABEL_43;
      }
    }
    goto LABEL_44;
  }
LABEL_43:
  z = v3->fields.defaultPinObjectPosition.fields.z;
  *(_QWORD *)&v3->fields.changedUiRootPosition.fields.x = *(_QWORD *)&v3->fields.defaultPinObjectPosition.fields.x;
  v3->fields.changedUiRootPosition.fields.z = z;
}


void __fastcall BlankEarthPoint__ChangeSpotImage(BlankEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint__ChangeState(
        BlankEarthPoint_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.stateEndAct,
    (int64_t)finishCallback,
    (int64_t)finishCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1BCAA3C(0LL, v10);
  QAASpotStateController__SetState(stateController, state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B12CAE & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo, *(_QWORD *)&index, finishCallback);
    byte_4B12CAE = 1;
  }
  v7 = sub_1BCAA2C(BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo, *(_QWORD *)&index, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthPoint__GetAnimName(
        BlankEarthPoint_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4B12CAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index, method);
    byte_4B12CAF = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v6, 0LL);
  }
  else
  {
    return 0LL;
  }
}


float __fastcall BlankEarthPoint__GetContrast(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return 1.0;
}


int32_t __fastcall BlankEarthPoint__GetCurrentAnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  bool IsExistCommand; // w20
  __int64 v21; // x1
  int32_t v22; // w20
  BlankEarthSpotAddMaster_o *v23; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0
  struct BlankEarth_o *earthCore; // x8
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_4B12CAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13, v14);
    byte_4B12CAB = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v3);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v3);
  v17 = **(UnityEngine_Object_o ***)(v16 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    IsExistCommand = QuestAfterAction__IsExistCommand(
                       (QuestAfterAction_o *)Instance,
                       0,
                       this->fields._spotId_k__BackingField,
                       0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v22 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  v23 = (BlankEarthSpotAddMaster_o *)Instance;
  Instance = (Il2CppObject *)BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                               v23,
                               1,
                               this->fields._spotId_k__BackingField,
                               v22,
                               0,
                               0LL);
    if ( PrioredAvailableEntity )
      return PrioredAvailableEntity->fields.targetId;
    return -1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
LABEL_24:
    sub_1BCAA3C(Instance, v19);
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v22,
             0,
             -1,
             0LL);
  return -1;
}


int32_t __fastcall BlankEarthPoint__GetDispType(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    return bSpotInfo->fields.dispType;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BlankEarthPoint__GetDotXYZ(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o *vec,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Component_o *earthCore; // x0
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float result; // s0
  UnityEngine_GameObject_o *v19; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v23; // x1
  __int64 v24; // x2
  float v25; // s11
  float v26; // s12
  float v27; // s13
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float v31; // s0
  float v32; // s8
  float v33; // s9
  float v34; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s2
  float v40; // s0
  float v41; // s1
  float v42; // s2
  struct UnityEngine_Vector3_StaticFields *v43; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    goto LABEL_24;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  v14 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v14, 0LL);
  v15 = v11 - Position.fields.x;
  v16 = v12 - Position.fields.y;
  v17 = v13 - Position.fields.z;
  v45 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  vec->fields.x = v15 - v45.fields.x;
  vec->fields.y = v16 - v45.fields.y;
  vec->fields.z = v17 - v45.fields.z;
  result = 1.0;
  if ( this->fields._spotOnType_k__BackingField == 1 )
    return result;
  earthCore = (UnityEngine_Component_o *)this->fields.earthCamera;
  if ( !earthCore )
LABEL_24:
    sub_1BCAA3C(earthCore, v6);
  v19 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  v46 = GameObjectExtensions__GetPosition(v19, 0LL);
  x = v46.fields.x;
  y = v46.fields.y;
  z = v46.fields.z;
  v47 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  v25 = v47.fields.x;
  v26 = v47.fields.y;
  v27 = v47.fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v23, v24);
    byte_4B109C4 = 1;
  }
  v28 = x - v25;
  v29 = y - v26;
  v30 = z - v27;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
  v31 = sqrtf((float)(v30 * v30) + (float)((float)(v28 * v28) + (float)(v29 * v29)));
  if ( v31 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v32 = static_fields->zeroVector.fields.x;
    v33 = static_fields->zeroVector.fields.y;
    v34 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v32 = v28 / v31;
    v33 = v29 / v31;
    v34 = v30 / v31;
  }
  v36 = vec->fields.x;
  v37 = vec->fields.y;
  v38 = vec->fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v23, v24);
    byte_4B109C4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
  v39 = sqrtf((float)(v38 * v38) + (float)((float)(v36 * v36) + (float)(v37 * v37)));
  if ( v39 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
      byte_4B109C1 = 1;
    }
    v43 = UnityEngine_Vector3_TypeInfo->static_fields;
    v40 = v43->zeroVector.fields.x;
    v41 = v43->zeroVector.fields.y;
    v42 = v43->zeroVector.fields.z;
  }
  else
  {
    v40 = v36 / v39;
    v41 = v37 / v39;
    v42 = v38 / v39;
  }
  vec->fields.x = v40;
  vec->fields.y = v41;
  result = (float)(v34 * v42) + (float)((float)(v32 * v40) + (float)(v33 * v41));
  vec->fields.z = v42;
  return result;
}


UnityEngine_Vector3_o __fastcall BlankEarthPoint__GetPinObjectDefaultLocalPosition(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.defaultPinObjectPosition.fields.x;
  y = this->fields.defaultPinObjectPosition.fields.y;
  z = this->fields.defaultPinObjectPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall BlankEarthPoint__GetSpotNameplatePos(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.spotNamePos.fields.x;
  y = this->fields.spotNamePos.fields.y;
  z = this->fields.spotNamePos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool __fastcall BlankEarthPoint__IsRevealDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  return dispType != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__LateUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v10; // x1
  __int64 v11; // x2
  float DotXYZ; // s8
  _BOOL4 isForward; // w24
  UnityEngine_Object_o *earthCamera; // x21
  float x; // s9
  __int64 v16; // x1
  UnityEngine_Object_o *pointCol; // x21
  UnityEngine_Camera_o *v18; // x21
  __int64 transform; // x0
  const MethodInfo *v20; // x1
  int v21; // s0
  UnityEngine_Object_o *uiRoot; // x21
  UnityEngine_Transform_o *v25; // x21
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x22
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v29; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v31; // x27
  UnityEngine_Object_o *v32; // x21
  __int64 v33; // x2
  struct UnityEngine_Transform_array *v34; // x8
  UnityEngine_Transform_o *v35; // x21
  int32_t v36; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v39; // x22
  __int64 v40; // x25
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x26
  __int64 v43; // x8
  UnityEngine_Transform_o *v44; // x20
  float v45; // s13
  float y; // s10
  __int64 v47; // x1
  UnityEngine_Object_o *pinObject; // x21
  float v49; // s11
  float v50; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v52; // s10
  float v53; // s1
  struct UnityEngine_Vector3_array *v54; // x8
  float v55; // s12
  UnityEngine_Object_o *v56; // x21
  float v57; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v59; // x9
  float *v60; // x8
  UnityEngine_Object_o *v61; // x20
  const MethodInfo *v62; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v64; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v67; // s4
  float v68; // s2
  float v69; // s3
  float v70; // s2
  UnityEngine_Object_o *v71; // x20
  const MethodInfo *v72; // x2
  UnityEngine_Vector3_o v73; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12CA3 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v73.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v73.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v73, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v11);
    byte_4B109C1 = 1;
  }
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(earthCamera, 0LL, 0LL) )
  {
    pointCol = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(pointCol, 0LL, 0LL) )
    {
      v18 = this->fields.earthCamera;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_123;
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v18 )
        goto LABEL_123;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_69960456(v18, *(UnityEngine_Vector3_o *)&v21, 0LL));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v20);
    transform = (__int64)this->fields.earthCore;
    if ( !transform )
      goto LABEL_123;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !this->fields._spotOnType_k__BackingField )
    {
      transform = (__int64)this->fields.uiRoot;
      if ( !transform )
        goto LABEL_123;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !this->fields.earthCore )
        goto LABEL_123;
      v25 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
      v27 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C9 )
      {
        transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v26);
        byte_4B109C9 = 1;
      }
      if ( !v25 )
        goto LABEL_123;
      UnityEngine_Transform__LookAt(v25, v27, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    }
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v29 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v31 = v29 - 4;
        if ( v29 - 4 >= (int)max_length )
          break;
        if ( v31 >= max_length )
          goto LABEL_124;
        v32 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v29);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        transform = UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
        if ( (transform & 1) == 0 )
        {
          v34 = this->fields.uiBillboardTransforms;
          if ( !v34 )
            goto LABEL_123;
          if ( v31 >= v34->max_length )
LABEL_124:
            sub_1BCAA44(transform, v20);
          v35 = (UnityEngine_Transform_o *)*((_QWORD *)&v34->obj.klass + v29);
          if ( !byte_4B109C1 )
          {
            transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v33);
            byte_4B109C1 = 1;
          }
          if ( !v35 )
            goto LABEL_123;
          UnityEngine_Transform__set_eulerAngles(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v29;
        if ( !uiBillboardTransforms )
          goto LABEL_123;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_123;
      v36 = 0;
      while ( v36 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v36,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
        if ( !transform )
          goto LABEL_123;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_123;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0LL) )
        {
          transform = (__int64)this->fields.listBillboardChildWidget;
          if ( !transform )
            goto LABEL_123;
          transform = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)transform,
                                 v36,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_123;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v36;
        if ( !transform )
          goto LABEL_123;
      }
    }
    offsetTargetObjects = this->fields.offsetTargetObjects;
    if ( offsetTargetObjects )
    {
      bSpotInfo = this->fields.bSpotInfo;
      if ( bSpotInfo )
      {
        if ( bSpotInfo->fields.dispType )
        {
          v39 = 0LL;
          v40 = 4LL;
          while ( 1 )
          {
            v41 = offsetTargetObjects->max_length;
            v42 = v40 - 4;
            if ( v40 - 4 >= (int)v41 )
              break;
            if ( v42 >= v41 )
              goto LABEL_124;
            v43 = *((_QWORD *)&offsetTargetObjects->obj.klass + v40);
            if ( v43 )
            {
              v44 = *(UnityEngine_Transform_o **)(v43 + 16);
              if ( !v44 )
                goto LABEL_123;
              v45 = *(float *)(v43 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v43 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_123;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v49 = position.fields.x;
              v50 = position.fields.y;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
              if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_123;
                if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
                {
                  transform = (__int64)this->fields.pinObject;
                  if ( !transform )
                    goto LABEL_123;
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                  if ( !transform )
                    goto LABEL_123;
                  v76 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
                  v49 = v76.fields.x;
                  v50 = v76.fields.y;
                }
              }
              v77 = UnityEngine_Transform__get_position(v44, 0LL);
              v77.fields.y = (float)(v45 * y) + v50;
              v77.fields.x = v49;
              UnityEngine_Transform__set_position(v44, v77, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_123;
              if ( v42 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_124;
              v52 = defaultLocalPosOffsetTargetObjects->m_Items[v39].fields.y;
              *(UnityEngine_Vector3_o *)(&v53 - 1) = UnityEngine_Transform__get_localPosition(v44, 0LL);
              v54 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v54 )
                goto LABEL_123;
              if ( v42 >= v54->max_length )
                goto LABEL_124;
              v55 = v54->m_Items[v39 + 1].fields.x;
              v56 = (UnityEngine_Object_o *)this->fields.pinObject;
              v57 = v53;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
              if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_123;
                transform = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL);
                if ( (transform & 1) == 0 )
                {
                  notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                  if ( notDisplayPinTargetOffset )
                  {
                    v59 = this->fields.offsetTargetObjects;
                    if ( !v59 )
                      goto LABEL_123;
                    if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v59->max_length )
                    {
                      if ( v42 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                        goto LABEL_124;
                      v60 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v40);
                      if ( !v60 )
                        goto LABEL_123;
                      v52 = v52 + v60[6];
                      v57 = v57 + v60[7];
                      v55 = v55 + v60[8];
                    }
                  }
                }
              }
              v78.fields.x = v52;
              v78.fields.y = v57;
              v78.fields.z = v55;
              UnityEngine_Transform__set_localPosition(v44, v78, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v40;
            ++v39;
            if ( !offsetTargetObjects )
              goto LABEL_123;
          }
        }
      }
    }
  }
  if ( (isForward & ~this->fields.isForward) != 0 )
  {
    v61 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v62);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && x >= 0.0 && this->fields.isForward )
  {
    v71 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v72);
      this->fields.isDisp = 1;
    }
  }
  uiRootWidget = (UnityEngine_Object_o *)this->fields.uiRootWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(uiRootWidget, 0LL, 0LL) )
  {
    dispSpriteDot = this->fields.dispSpriteDot;
    noDispSpriteDot = this->fields.noDispSpriteDot;
    transform = (__int64)this->fields.uiRootWidget;
    if ( dispSpriteDot <= noDispSpriteDot )
      v67 = this->fields.noDispSpriteDot;
    else
      v67 = this->fields.dispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v68 = this->fields.dispSpriteDot;
    else
      v68 = this->fields.noDispSpriteDot;
    if ( DotXYZ <= v67 )
      v69 = DotXYZ;
    else
      v69 = v67;
    if ( DotXYZ < v68 )
      v69 = v68;
    if ( transform )
    {
      v70 = (float)(v69 - v68) / (float)(v67 - v68);
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v64 = v70;
      else
        *(float *)&v64 = 1.0 - v70;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v64);
      return;
    }
LABEL_123:
    sub_1BCAA3C(transform, v20);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarth_o *earthCore; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B12CA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlankEarthPoint_OnClickSpot__, method, v2);
    byte_4B12CA9 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1BCAA3C(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v5 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_BlankEarthPoint_OnClickSpot__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v7);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1BCAA3C(this, method);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1BCAA3C(this, method);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *earthCore; // x0
  ExUITexture_c *klass; // x8
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4B12CA8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B12CA8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = earthCore->fields.mEventBgTexture->klass;
  if ( !klass
    || (earthCore = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL
    || (TitleInfoControl__setBackBtnSprite(earthCore, 3, 0LL),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusPoint(
          (BlankEarth_o *)earthCore,
          this->fields._spotId_k__BackingField,
          this->fields._spotOnType_k__BackingField,
          v6),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_1BCAA3C(earthCore, method);
  }
  BlankEarth__SetState((BlankEarth_o *)earthCore, 3, v7);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__PlaySpotUniqueAnim(
        BlankEarthPoint_o *this,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  if ( isQuick )
  {
    BlankEarthPoint__SetAnimationToEnd(this, animIndex, (const MethodInfo *)isQuick);
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    this->fields.animIndex = animIndex;
    BlankEarthPoint__ChangeState(this, 9, finishCallback, (const MethodInfo *)finishCallback);
  }
}


void __fastcall BlankEarthPoint__RevealOrConcealSpotAnim(
        BlankEarthPoint_o *this,
        int32_t dispType,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  bool v5; // zf
  int v6; // w8
  int v7; // w9
  int32_t v8; // w1

  if ( dispType )
  {
    if ( dispType == 2 )
    {
      v5 = !isQuick;
      v6 = 3;
      v7 = 6;
    }
    else
    {
      if ( dispType != 1 )
      {
        ActionExtensions__Call(finishCallback, 0LL);
        return;
      }
      v5 = !isQuick;
      v6 = 4;
      v7 = 7;
    }
  }
  else
  {
    v5 = !isQuick;
    v6 = 2;
    v7 = 5;
  }
  if ( v5 )
    v8 = v6;
  else
    v8 = v7;
  BlankEarthPoint__ChangeState(this, v8, finishCallback, (const MethodInfo *)finishCallback);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetAnimationToEnd(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *AnimName; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *anim; // x21
  System_String_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4B12CAC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    byte_4B12CAC = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v8 = AnimName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) && !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0LL), (Item = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_69899248(Item, v8, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v8, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Item, v9);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 bSpotInfo; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct UISprite_o *loopIconSprite; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UILabel_o *lastTimeLabel; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  Il2CppObject *Master_object; // x0
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x21
  WarReleaseMaster_o *v61; // x20
  bool IsOpen; // w21
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppClass *klass; // x8
  WarReleaseEntity_o *OpenEntity; // x0
  UnityEngine_Object_o *v67; // x21
  struct MapControl_SpotInfo_o *v68; // x8
  int32_t freeQuestCount; // w22
  UnityEngine_Object_o *v70; // x21
  __int64 v71; // x2
  int32_t spotId_k__BackingField; // w21
  TerminalPramsManager_c *v73; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v75; // w21
  __int64 v76; // x1
  UILabel_o *v77; // x21
  UnityEngine_Object_o *v78; // x21
  struct MapControl_SpotInfo_o *v79; // x8
  int32_t questCount; // w23
  int32_t v81; // w21
  _BOOL8 v82; // x0
  __int64 v83; // x1
  Il2CppObject *current; // x24
  Il2CppClass *v85; // x8
  WarReleaseEntity_o *v86; // x0
  __int64 v87; // x1
  Il2CppClass *v88; // x8
  __int64 v89; // x0
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Component___TypeInfo, isDisp, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarReleaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_12367/*"SPOT_FREE_QUEST_LAST_TIME"*/, v23, v24);
    byte_4B12CA5 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1BCA888(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_85;
  nextSprite = this->fields.nextSprite;
  v34 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1BCA91C(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( !v34->max_length )
    goto LABEL_86;
  v34->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1BCA784((PartyOrganizationUtility_o *)v34->m_Items, (int64_t)nextSprite, v27, v28, v29, v30, v31, v32);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1BCA91C(this->fields.loopIconSprite, v34->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_86;
  v34->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->m_Items[1], (int64_t)loopIconSprite, v35, v36, v37, v38, v39, v40);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1BCA91C(this->fields.lastTimeLabel, v34->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_86;
  v34->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->m_Items[2], (int64_t)lastTimeLabel, v42, v43, v44, v45, v46, v47);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1BCA91C(this->fields.noticeNumberComp, v34->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_87:
      v89 = sub_1BCAA60();
      sub_1BCA908(v89, 0LL);
    }
  }
  if ( v34->max_length <= 3 )
LABEL_86:
    sub_1BCAA44(bSpotInfo, v26);
  v34->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->m_Items[3], (int64_t)noticeNumberComp, v49, v50, v51, v52, v53, v54);
  BlankEarthPoint__ActivateEachComponent(0, v34, v56);
  if ( !isDisp )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v60 = (UnityEngine_Object_o *)this->fields.nextSprite;
  v61 = (WarReleaseMaster_o *)Master_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_85;
    IsOpen = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v90,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v91 = v90;
    while ( 1 )
    {
      v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v91,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v63 )
        break;
      if ( !v91.fields._current )
        sub_1BCAA3C(v63, v64);
      klass = v91.fields._current[7].klass;
      if ( !klass )
        sub_1BCAA3C(v63, v64);
      IsOpen = 0;
      if ( LOBYTE(klass->_1.byval_arg.bits) )
      {
        if ( !v61 )
          sub_1BCAA3C(v63, v64);
        OpenEntity = WarReleaseMaster__GetOpenEntity(v61, HIDWORD(klass->_1.name), 0LL);
        IsOpen = 1;
        if ( OpenEntity )
          IsOpen = WarReleaseEntity__IsOpen(OpenEntity, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v91,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, IsOpen, 0LL);
  }
  v67 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  bSpotInfo = UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v68 = this->fields.bSpotInfo;
    if ( !v68 )
      goto LABEL_85;
    freeQuestCount = v68->fields.freeQuestCount;
    v70 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
      if ( !byte_4B12CE4 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v71);
        byte_4B12CE4 = 1;
      }
      v73 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
        v73 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v73->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v75 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_85;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v75, 0LL);
      v77 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12367/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v77 )
        goto LABEL_85;
      UILabel__set_text(v77, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v78 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  bSpotInfo = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v79 = this->fields.bSpotInfo;
    if ( v79 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v79->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v90,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v81 = questCount;
        v91 = v90;
        while ( 1 )
        {
          v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v91,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v82 )
            break;
          current = v91.fields._current;
          if ( !v91.fields._current )
            sub_1BCAA3C(v82, v83);
          v85 = v91.fields._current[7].klass;
          if ( !v85 )
            sub_1BCAA3C(v82, v83);
          if ( !v61 )
            sub_1BCAA3C(v82, v83);
          v86 = WarReleaseMaster__GetOpenEntity(v61, HIDWORD(v85->_1.name), 0LL);
          if ( v86 )
          {
            v86 = (WarReleaseEntity_o *)WarReleaseEntity__IsOpen(v86, 0LL);
            if ( ((unsigned __int8)v86 & 1) == 0 )
              continue;
          }
          v88 = current[7].klass;
          if ( !v88 )
            sub_1BCAA3C(v86, v87);
          v81 += LODWORD(v88->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v91,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, v81, 0LL);
          if ( v81 )
            return;
          bSpotInfo = (__int64)this->fields.noticeNumberComp;
          if ( bSpotInfo )
          {
            bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
            if ( bSpotInfo )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_85:
    sub_1BCAA3C(bSpotInfo, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetBtnColliderEnable(
        BlankEarthPoint_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *pointCol; // x0

  pointCol = (UnityEngine_Collider_o *)this->fields.pointCol;
  if ( !pointCol )
    sub_1BCAA3C(0LL, isEnabled);
  UnityEngine_Collider__set_enabled(pointCol, !this->fields.isForceTouchDisabled && isEnabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetChangedUiRootLocalPosition(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  this->fields.changedUiRootPosition = position;
}


void __fastcall BlankEarthPoint__SetContrast(BlankEarthPoint_o *this, float val, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint__SetDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.dispType = dispType;
}


void __fastcall BlankEarthPoint__SetDispUIDotRange(
        BlankEarthPoint_o *this,
        float inputDispUiDot,
        float inputNoDispUiDot,
        const MethodInfo *method)
{
  this->fields.dispSpriteDot = inputDispUiDot;
  this->fields.noDispSpriteDot = inputNoDispUiDot;
}


void __fastcall BlankEarthPoint__SetEarthObj(
        BlankEarthPoint_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        BlankEarth_o *obj,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *coreRoot,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *nextSprite; // x24
  QuestTree_o *Instance; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UISprite_o *v38; // x24
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v68; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v70; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v80; // x0
  struct System_Object_array *items; // x9
  _QWORD *v82; // x10
  __int64 v83; // x11
  Il2CppClass **v84; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v91; // s2
  float v92; // s0
  float v93; // s1
  float v94; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v96; // x0
  const MethodInfo *v97; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x2
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spotEnt, obj);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_20398/*"icon_spot_next"*/, v27, v28);
    byte_4B12CA4 = 1;
  }
  memset(&v103, 0, sizeof(v103));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotEnt);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v38 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v38, (System_String_o *)StringLiteral_20398/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._spotName_k__BackingField,
    (int64_t)name,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields._spotOnType_k__BackingField = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.earthCore, (int64_t)obj, v41, v42, v43, v44, v45, v46);
  this->fields.earthCamera = camera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.earthCamera, (int64_t)camera, v47, v48, v49, v50, v51, v52);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bSpotInfo, (int64_t)SpotInfo, v54, v55, v56, v57, v58, v59);
  this->fields.earthCoreRoot = coreRoot;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.earthCoreRoot,
    (int64_t)coreRoot,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  areaInfoList = this->fields.areaInfoList;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v68 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v68;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_41:
    sub_1BCAA3C(Instance, v31);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v102,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v103 = v102;
  while ( 1 )
  {
    v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v103,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v70 )
      break;
    current = v103.fields._current;
    if ( !v103.fields._current )
      sub_1BCAA3C(v70, v71);
    klass = v103.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v80 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v80 )
        sub_1BCAA3C(0LL, v71);
      items = v80->fields._items;
      v82 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v80->fields._version;
      if ( !items )
        sub_1BCAA3C(v80, v71);
      v83 = v80->fields._size;
      if ( (unsigned int)v83 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v80,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &items->obj.klass + v83;
        v80->fields._size = v83 + 1;
        v84[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)current, v72, v73, v74, v75, v76, v77);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v103,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v86, v87);
    byte_4B109C4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v86);
  v91 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v91 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v86, v87);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v92 = static_fields->zeroVector.fields.x;
    v93 = static_fields->zeroVector.fields.y;
    v94 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v92 = x / v91;
    v93 = y / v91;
    v94 = z / v91;
  }
  v105.fields.x = -v92;
  v105.fields.y = -v93;
  v105.fields.z = -v94;
  v106 = UnityEngine_Quaternion__LookRotation_70092604(v105, 0LL);
  this->fields._FocusQua_k__BackingField = v106;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v106, 0LL);
  v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v96, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v97);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v99);
  BlankEarthPoint__UpdateDisp(this, 1, v100);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v101);
}


void __fastcall BlankEarthPoint__SetTouchType(BlankEarthPoint_o *this, int32_t touchType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.touchType = touchType;
}


void __fastcall BlankEarthPoint__ShowQAADispEffect(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *qaaDispEffObj; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B12CAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12CAD = 1;
  }
  qaaDispEffObj = (UnityEngine_Object_o *)this->fields.qaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(qaaDispEffObj, 0LL, 0LL) )
  {
    spotDispEffectObj = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    p_spotDispEffectObj = &this->fields.spotDispEffectObj;
    if ( UnityEngine_Object__op_Inequality(spotDispEffectObj, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_70154244(v11, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotDispEffectObj, 0LL, v12, v13, v14, v15, v16, v17);
    }
    v18 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v20);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    v23 = UnityEngine_Object__Instantiate_object__49903816(
            v18,
            transform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v23, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v23, 0LL);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v23;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.spotDispEffectObj,
      (int64_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
}


void __fastcall BlankEarthPoint__StateQaaEnd(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *stateEndAct; // x19

  stateEndAct = this->fields.stateEndAct;
  BlankEarthPoint__ChangeState(this, 1, 0LL, v2);
  ActionExtensions__Call(stateEndAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B12CA7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B12CA7 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1BCAA3C(0LL, method);
  QAASpotStateController__Update(stateController, 0LL);
}


void __fastcall BlankEarthPoint__UpdateDisp(BlankEarthPoint_o *this, bool isForce, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  int32_t dispType; // w21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  bool v12; // w21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields._mtIsUpdate_k__BackingField && !isForce )
    return;
  bSpotInfo = this->fields.bSpotInfo;
  if ( !bSpotInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    goto LABEL_7;
  }
  dispType = bSpotInfo->fields.dispType;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dispType )
  {
LABEL_7:
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
    v12 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
    p_z = &static_fields->zeroVector.fields.z;
    goto LABEL_10;
  }
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&this->fields._selfScale_k__BackingField;
  p_y = &this->fields._selfScale_k__BackingField.fields.y;
  p_z = &this->fields._selfScale_k__BackingField.fields.z;
  v12 = 1;
LABEL_10:
  v16.fields.z = *p_z;
  v16.fields.y = *p_y;
  v16.fields.x = static_fields->zeroVector.fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, v16, 0LL);
  if ( !v12 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_1BCAA3C(0LL, v13);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v12, v14);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pinObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  bool activeSelf; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12CA6 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v6 = this->fields.pinObject;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v6, 0LL);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      p_changedUiRootPosition = (struct UnityEngine_Vector3_StaticFields *)&this->fields.changedUiRootPosition;
      p_y = &this->fields.changedUiRootPosition.fields.y;
      p_z = &this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v9);
        byte_4B109C1 = 1;
      }
      p_changedUiRootPosition = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_changedUiRootPosition->zeroVector.fields.y;
      p_z = &p_changedUiRootPosition->zeroVector.fields.z;
    }
    v14.fields.y = *p_y;
    v14.fields.x = p_changedUiRootPosition->zeroVector.fields.x;
    v14.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(uiRoot, v14, 0LL);
  }
}


int32_t __fastcall BlankEarthPoint__get_AnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.animIndex;
}


float __fastcall BlankEarthPoint__get_DefaultDispSpriteDot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._DefaultDispSpriteDot_k__BackingField;
}


float __fastcall BlankEarthPoint__get_DefaultNoDispSpriteDot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._DefaultNoDispSpriteDot_k__BackingField;
}


UnityEngine_Quaternion_o __fastcall BlankEarthPoint__get_FocusQua(BlankEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields._FocusQua_k__BackingField.fields.x;
  y = this->fields._FocusQua_k__BackingField.fields.y;
  z = this->fields._FocusQua_k__BackingField.fields.z;
  w = this->fields._FocusQua_k__BackingField.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool __fastcall BlankEarthPoint__get_mRequestDontUpdateDisp(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mRequestDontUpdateDisp_k__BackingField;
}


bool __fastcall BlankEarthPoint__get_mtIsUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mtIsUpdate_k__BackingField;
}


UnityEngine_Vector3_o __fastcall BlankEarthPoint__get_selfScale(BlankEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._selfScale_k__BackingField.fields.x;
  y = this->fields._selfScale_k__BackingField.fields.y;
  z = this->fields._selfScale_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall BlankEarthPoint__get_spotId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotId_k__BackingField;
}


System_String_o *__fastcall BlankEarthPoint__get_spotName(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotName_k__BackingField;
}


int32_t __fastcall BlankEarthPoint__get_spotOnType(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotOnType_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BlankEarthPoint__get_tweenTarget(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


int32_t __fastcall BlankEarthPoint__get_warId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._warId_k__BackingField;
}


void __fastcall BlankEarthPoint__set_DefaultDispSpriteDot(
        BlankEarthPoint_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._DefaultDispSpriteDot_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_DefaultNoDispSpriteDot(
        BlankEarthPoint_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._DefaultNoDispSpriteDot_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__set_FocusQua(
        BlankEarthPoint_o *this,
        UnityEngine_Quaternion_o value,
        const MethodInfo *method)
{
  this->fields._FocusQua_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_mRequestDontUpdateDisp(
        BlankEarthPoint_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._mRequestDontUpdateDisp_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_mtIsUpdate(BlankEarthPoint_o *this, bool value, const MethodInfo *method)
{
  this->fields._mtIsUpdate_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__set_selfScale(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._selfScale_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_spotId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spotId_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_spotName(
        BlankEarthPoint_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._spotName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._spotName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthPoint__set_spotOnType(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spotOnType_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_warId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._warId_k__BackingField = value;
}


void __fastcall BlankEarthPoint_NotDisplayPinTargetOffset___ctor(
        BlankEarthPoint_NotDisplayPinTargetOffset_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint_OffsetTargetObject___ctor(
        BlankEarthPoint_OffsetTargetObject_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__111___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__111__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *v3; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4B12CB1 & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12CB1 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)UnityEngine_Animation__get_Item(
                                                                (UnityEngine_Animation_o *)this,
                                                                v3->fields._animName_5__2,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) < 1.0 )
    {
      totalTime_5__3 = v3->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        v3->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0LL);
LABEL_19:
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v3->fields.__2__current = 0LL;
            p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
            sub_1BCA784(p__2__current, 0LL, v16, v17, v18, v19, v20, v21);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1BCAA3C(this, method);
      }
    }
LABEL_22:
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    AnimName = BlankEarthPoint__GetAnimName(_4__this, v3->fields.index, v2);
    v3->fields._animName_5__2 = AnimName;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._animName_5__2, (int64_t)AnimName, v7, v8, v9, v10, v11, v12);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v3->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0LL);
      v3->fields._totalTime_5__3 = 0.0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__111__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__111__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__111_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__111__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__111__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint___c__DisplayClass101_0___ctor(
        BlankEarthPoint___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint___c__DisplayClass101_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass101_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass101_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BlankEarthPoint___c__DisplayClass101_0_o *)UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}