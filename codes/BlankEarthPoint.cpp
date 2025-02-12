void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Vector3_c *v7; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v10; // x8
  __int64 v11; // d0
  float v12; // s1
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  QAASpotStateController_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BB113B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_1C13D24(&QAASpotStateController_TypeInfo, v6);
    byte_4BB113B = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_BF6540;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BAEDA1 = 1;
  }
  v7 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v10 = v7->static_fields;
  v11 = *(_QWORD *)&v10->zeroVector.fields.x;
  v12 = v10->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v11;
  this->fields.changedUiRootPosition.fields.z = v12;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.areaInfoList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v20;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.listBillboardChildWidget,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (QAASpotStateController_o *)sub_1C13F70(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v27, 0LL);
  this->fields.stateController = v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.stateController, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Action_object__o *v13; // x20

  if ( (byte_4BB1135 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_Component__TypeInfo, targets);
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_Component___, v5);
    sub_1C13D24(&Method_BasicHelper_ForEach_Component___, v6);
    sub_1C13D24(&Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__, v7);
    sub_1C13D24(&BlankEarthPoint___c__DisplayClass101_0_TypeInfo, v8);
    byte_4BB1135 = 1;
  }
  v9 = sub_1C13F70(BlankEarthPoint___c__DisplayClass101_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  *(_BYTE *)(v9 + 16) = value;
  v12 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_Component___);
  v13 = (System_Action_object__o *)sub_1C13F70(System_Action_Component__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v10; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  int64_t v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v20; // x8
  __int64 v21; // x21
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x9
  BlankEarthPoint_OffsetTargetObject_o *v24; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v26; // s0
  int v27; // s1
  int v28; // s2
  _DWORD *v29; // x8
  UnityEngine_Object_o *anim; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Object_array *v39; // x1
  _QWORD *v40; // x20
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9

  v2 = this;
  if ( (byte_4BB112D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_AnimationState___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77489536, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_AnimationState___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    this = (BlankEarthPoint_o *)sub_1C13D24(&UnityEngine_Vector3___TypeInfo, v8);
    byte_4BB112D = 1;
  }
  uiBillboardTransforms = v2->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v10 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v10 >= max_length )
        break;
      if ( (unsigned int)v10 >= max_length )
LABEL_45:
        sub_1C13F88(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v10];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77489536);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v10;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_44;
    }
  }
  offsetTargetObjects = v2->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v13 = sub_1C13DCC(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v13;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v2->fields.defaultLocalPosOffsetTargetObjects,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = v2->fields.offsetTargetObjects;
    if ( !v20 )
      goto LABEL_44;
    v21 = 0LL;
    v22 = 0LL;
    while ( 1 )
    {
      v23 = v20->max_length;
      if ( (__int64)v22 >= (int)v23 )
        break;
      if ( v22 >= v23 )
        goto LABEL_45;
      v24 = v20->m_Items[v22];
      if ( v24 )
      {
        this = (BlankEarthPoint_o *)v24->fields.targetObject;
        if ( !this )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_44;
        if ( v22 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_45;
        v29 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v21);
        v29[8] = v26;
        v29[9] = v27;
        v29[10] = v28;
        v20 = v2->fields.offsetTargetObjects;
      }
      ++v22;
      v21 += 12LL;
      if ( !v20 )
        goto LABEL_44;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_44:
    sub_1C13F80(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v39 = System_Linq_Enumerable__ToArray_object_(
            v38,
            (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v40 = Method_System_Array_Empty_AnimationState___;
    v41 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v41 )
    {
      sub_1C65C5C(Method_System_Array_Empty_AnimationState___);
      v41 = v40[7];
    }
    v42 = *(_QWORD *)(v41 + 16);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v42 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v42);
    v43 = *(_QWORD *)(v40[7] + 16LL);
    if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
      v43 = sub_1C65C00(inited);
    v39 = **(System_Object_array ***)(v43 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v39;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.animationStateArray, (int64_t)v39, v31, v32, v33, v34, v35, v36);
  pinObject = (UnityEngine_Object_o *)v2->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    this = (BlankEarthPoint_o *)v2->fields.pinObject;
    if ( this )
    {
      this = (BlankEarthPoint_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( this )
      {
        v2->fields.defaultPinObjectPosition = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL);
        goto LABEL_43;
      }
    }
    goto LABEL_44;
  }
LABEL_43:
  z = v2->fields.defaultPinObjectPosition.fields.z;
  *(_QWORD *)&v2->fields.changedUiRootPosition.fields.x = *(_QWORD *)&v2->fields.defaultPinObjectPosition.fields.x;
  v2->fields.changedUiRootPosition.fields.z = z;
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
  sub_1C13CC8(
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
    sub_1C13F80(0LL, v10);
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

  if ( (byte_4BB1139 & 1) == 0 )
  {
    sub_1C13D24(&BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo, *(_QWORD *)&index);
    byte_4BB1139 = 1;
  }
  v7 = sub_1C13F70(BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BB113A & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_4BB113A = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  bool IsExistCommand; // w20
  int32_t v15; // w20
  BlankEarthSpotAddMaster_o *v16; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0

  if ( (byte_4BB1136 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_4BB1136 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C65C00(v2);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C65C00(v2);
  v11 = **(UnityEngine_Object_o ***)(v10 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v15 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
LABEL_21:
    sub_1C13F80(Instance, v13);
  v16 = (BlankEarthSpotAddMaster_o *)Instance;
  if ( BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0LL)
    && (PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                                   v16,
                                   1,
                                   this->fields._spotId_k__BackingField,
                                   v15,
                                   0,
                                   0LL)) != 0LL )
  {
    return PrioredAvailableEntity->fields.targetId;
  }
  else
  {
    return -1;
  }
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
  float v24; // s11
  float v25; // s12
  float v26; // s13
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s0
  float v31; // s8
  float v32; // s9
  float v33; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v35; // s12
  float v36; // s13
  float v37; // s14
  float v38; // s2
  float v39; // s0
  float v40; // s1
  float v41; // s2
  struct UnityEngine_Vector3_StaticFields *v42; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

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
  v44 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  vec->fields.x = v15 - v44.fields.x;
  vec->fields.y = v16 - v44.fields.y;
  vec->fields.z = v17 - v44.fields.z;
  result = 1.0;
  if ( this->fields._spotOnType_k__BackingField == 1 )
    return result;
  earthCore = (UnityEngine_Component_o *)this->fields.earthCamera;
  if ( !earthCore )
LABEL_24:
    sub_1C13F80(earthCore, v6);
  v19 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  v45 = GameObjectExtensions__GetPosition(v19, 0LL);
  x = v45.fields.x;
  y = v45.fields.y;
  z = v45.fields.z;
  v46 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  v24 = v46.fields.x;
  v25 = v46.fields.y;
  v26 = v46.fields.z;
  if ( !byte_4BAEDA4 )
  {
    sub_1C13D24(&System_Math_TypeInfo, v23);
    byte_4BAEDA4 = 1;
  }
  v27 = x - v24;
  v28 = y - v25;
  v29 = z - v26;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = sqrtf((float)(v29 * v29) + (float)((float)(v27 * v27) + (float)(v28 * v28)));
  if ( v30 <= 0.00001 )
  {
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v23);
      byte_4BAEDA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v31 = static_fields->zeroVector.fields.x;
    v32 = static_fields->zeroVector.fields.y;
    v33 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v31 = v27 / v30;
    v32 = v28 / v30;
    v33 = v29 / v30;
  }
  v35 = vec->fields.x;
  v36 = vec->fields.y;
  v37 = vec->fields.z;
  if ( !byte_4BAEDA4 )
  {
    sub_1C13D24(&System_Math_TypeInfo, v23);
    byte_4BAEDA4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = sqrtf((float)(v37 * v37) + (float)((float)(v35 * v35) + (float)(v36 * v36)));
  if ( v38 <= 0.00001 )
  {
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v23);
      byte_4BAEDA1 = 1;
    }
    v42 = UnityEngine_Vector3_TypeInfo->static_fields;
    v39 = v42->zeroVector.fields.x;
    v40 = v42->zeroVector.fields.y;
    v41 = v42->zeroVector.fields.z;
  }
  else
  {
    v39 = v35 / v38;
    v40 = v36 / v38;
    v41 = v37 / v38;
  }
  vec->fields.x = v39;
  vec->fields.y = v40;
  result = (float)(v33 * v41) + (float)((float)(v31 * v39) + (float)(v32 * v40));
  vec->fields.z = v41;
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
  __int64 v5; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v8; // x1
  float DotXYZ; // s8
  _BOOL4 isForward; // w24
  UnityEngine_Object_o *earthCamera; // x21
  float x; // s9
  UnityEngine_Object_o *pointCol; // x21
  UnityEngine_Camera_o *v14; // x21
  __int64 transform; // x0
  __int64 v16; // x1
  int v17; // s0
  UnityEngine_Object_o *uiRoot; // x21
  const MethodInfo *v21; // x1
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x22
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v25; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v27; // x27
  UnityEngine_Object_o *v28; // x21
  struct UnityEngine_Transform_array *v29; // x8
  UnityEngine_Transform_o *v30; // x21
  int32_t v31; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v34; // x22
  __int64 v35; // x25
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x26
  __int64 v38; // x8
  UnityEngine_Transform_o *v39; // x20
  float v40; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float v43; // s11
  float v44; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v46; // s10
  float v47; // s1
  struct UnityEngine_Vector3_array *v48; // x8
  float v49; // s12
  UnityEngine_Object_o *v50; // x21
  float v51; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v53; // x9
  float *v54; // x8
  UnityEngine_Object_o *v55; // x20
  const MethodInfo *v56; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v58; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v61; // s4
  float v62; // s2
  float v63; // s3
  float v64; // s2
  UnityEngine_Object_o *v65; // x20
  const MethodInfo *v66; // x2
  UnityEngine_Vector3_o v67; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB112E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB112E = 1;
  }
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BAEDA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v67.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v67.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v67, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4BAEDA1 = 1;
  }
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(earthCamera, 0LL, 0LL) )
  {
    pointCol = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pointCol, 0LL, 0LL) )
    {
      v14 = this->fields.earthCamera;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_123;
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v14 )
        goto LABEL_123;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_70527968(v14, *(UnityEngine_Vector3_o *)&v17, 0LL));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v21);
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
      v22 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
      v23 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BAEDA9 )
      {
        transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v16);
        byte_4BAEDA9 = 1;
      }
      if ( !v22 )
        goto LABEL_123;
      UnityEngine_Transform__LookAt(v22, v23, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    }
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v25 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v27 = v25 - 4;
        if ( v25 - 4 >= (int)max_length )
          break;
        if ( v27 >= max_length )
          goto LABEL_124;
        v28 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v25);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
        if ( (transform & 1) == 0 )
        {
          v29 = this->fields.uiBillboardTransforms;
          if ( !v29 )
            goto LABEL_123;
          if ( v27 >= v29->max_length )
LABEL_124:
            sub_1C13F88(transform, v16);
          v30 = (UnityEngine_Transform_o *)*((_QWORD *)&v29->obj.klass + v25);
          if ( !byte_4BAEDA1 )
          {
            transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v16);
            byte_4BAEDA1 = 1;
          }
          if ( !v30 )
            goto LABEL_123;
          UnityEngine_Transform__set_eulerAngles(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v25;
        if ( !uiBillboardTransforms )
          goto LABEL_123;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_123;
      v31 = 0;
      while ( v31 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v31,
                               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
                                 v31,
                                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_123;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v31;
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
          v34 = 0LL;
          v35 = 4LL;
          while ( 1 )
          {
            v36 = offsetTargetObjects->max_length;
            v37 = v35 - 4;
            if ( v35 - 4 >= (int)v36 )
              break;
            if ( v37 >= v36 )
              goto LABEL_124;
            v38 = *((_QWORD *)&offsetTargetObjects->obj.klass + v35);
            if ( v38 )
            {
              v39 = *(UnityEngine_Transform_o **)(v38 + 16);
              if ( !v39 )
                goto LABEL_123;
              v40 = *(float *)(v38 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v38 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_123;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v43 = position.fields.x;
              v44 = position.fields.y;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  v70 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
                  v43 = v70.fields.x;
                  v44 = v70.fields.y;
                }
              }
              v71 = UnityEngine_Transform__get_position(v39, 0LL);
              v71.fields.y = (float)(v40 * y) + v44;
              v71.fields.x = v43;
              UnityEngine_Transform__set_position(v39, v71, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_123;
              if ( v37 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_124;
              v46 = defaultLocalPosOffsetTargetObjects->m_Items[v34].fields.y;
              *(UnityEngine_Vector3_o *)(&v47 - 1) = UnityEngine_Transform__get_localPosition(v39, 0LL);
              v48 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v48 )
                goto LABEL_123;
              if ( v37 >= v48->max_length )
                goto LABEL_124;
              v49 = v48->m_Items[v34 + 1].fields.x;
              v50 = (UnityEngine_Object_o *)this->fields.pinObject;
              v51 = v47;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
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
                    v53 = this->fields.offsetTargetObjects;
                    if ( !v53 )
                      goto LABEL_123;
                    if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v53->max_length )
                    {
                      if ( v37 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                        goto LABEL_124;
                      v54 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v35);
                      if ( !v54 )
                        goto LABEL_123;
                      v46 = v46 + v54[6];
                      v51 = v51 + v54[7];
                      v49 = v49 + v54[8];
                    }
                  }
                }
              }
              v72.fields.x = v46;
              v72.fields.y = v51;
              v72.fields.z = v49;
              UnityEngine_Transform__set_localPosition(v39, v72, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v35;
            ++v34;
            if ( !offsetTargetObjects )
              goto LABEL_123;
          }
        }
      }
    }
  }
  if ( (isForward & ~this->fields.isForward) != 0 )
  {
    v55 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v56);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && x >= 0.0 && this->fields.isForward )
  {
    v65 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v66);
      this->fields.isDisp = 1;
    }
  }
  uiRootWidget = (UnityEngine_Object_o *)this->fields.uiRootWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRootWidget, 0LL, 0LL) )
  {
    dispSpriteDot = this->fields.dispSpriteDot;
    noDispSpriteDot = this->fields.noDispSpriteDot;
    transform = (__int64)this->fields.uiRootWidget;
    if ( dispSpriteDot <= noDispSpriteDot )
      v61 = this->fields.noDispSpriteDot;
    else
      v61 = this->fields.dispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v62 = this->fields.dispSpriteDot;
    else
      v62 = this->fields.noDispSpriteDot;
    if ( DotXYZ <= v61 )
      v63 = DotXYZ;
    else
      v63 = v61;
    if ( DotXYZ < v62 )
      v63 = v62;
    if ( transform )
    {
      v64 = (float)(v63 - v62) / (float)(v61 - v62);
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v58 = v64;
      else
        *(float *)&v58 = 1.0 - v64;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v58);
      return;
    }
LABEL_123:
    sub_1C13F80(transform, v16);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BB1134 & 1) == 0 )
  {
    sub_1C13D24(&Method_BlankEarthPoint_OnClickSpot__, method);
    byte_4BB1134 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C13F80(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C13F80(this, method);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C13F80(this, method);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *earthCore; // x0
  ExUITexture_c *klass; // x8
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4BB1133 & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BB1133 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = earthCore->fields.mEventBgTexture->klass;
  if ( !klass
    || (earthCore = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL
    || (TitleInfoControl__setBackBtnSprite(earthCore, 3, 1, 0LL),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusPoint(
          (BlankEarth_o *)earthCore,
          this->fields._spotId_k__BackingField,
          this->fields._spotOnType_k__BackingField,
          v5),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_1C13F80(earthCore, method);
  }
  BlankEarth__SetState((BlankEarth_o *)earthCore, 3, v6);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  UnityEngine_Object_o *anim; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4BB1137 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4BB1137 = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v7 = AnimName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) && !System_String__IsNullOrEmpty(v7, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0LL), (Item = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_70466396(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_1C13F80(Item, v8);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 bSpotInfo; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UISprite_o *loopIconSprite; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UILabel_o *lastTimeLabel; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v46; // x2
  Il2CppObject *Master_object; // x0
  UnityEngine_Object_o *v48; // x21
  WarReleaseMaster_o *v49; // x20
  bool IsOpen; // w21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppClass *klass; // x8
  WarReleaseEntity_o *OpenEntity; // x0
  UnityEngine_Object_o *v55; // x21
  struct MapControl_SpotInfo_o *v56; // x8
  int32_t freeQuestCount; // w22
  UnityEngine_Object_o *v58; // x21
  int32_t spotId_k__BackingField; // w21
  TerminalPramsManager_c *v60; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v62; // w21
  UILabel_o *v63; // x21
  UnityEngine_Object_o *v64; // x21
  struct MapControl_SpotInfo_o *v65; // x8
  int32_t questCount; // w23
  int32_t v67; // w21
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject *current; // x24
  Il2CppClass *v71; // x8
  WarReleaseEntity_o *v72; // x0
  __int64 v73; // x1
  Il2CppClass *v74; // x8
  __int64 v75; // x0
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB1130 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Component___TypeInfo, isDisp);
    sub_1C13D24(&Method_DataManager_GetMaster_WarReleaseMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v10);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_12427/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v14);
    byte_4BB1130 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1C13DCC(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_85;
  nextSprite = this->fields.nextSprite;
  v24 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1C13E60(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( !v24->max_length )
    goto LABEL_86;
  v24->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1C13CC8((PartyOrganizationUtility_o *)v24->m_Items, (int64_t)nextSprite, v17, v18, v19, v20, v21, v22);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1C13E60(this->fields.loopIconSprite, v24->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_86;
  v24->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v24->m_Items[1], (int64_t)loopIconSprite, v25, v26, v27, v28, v29, v30);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1C13E60(this->fields.lastTimeLabel, v24->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_86;
  v24->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v24->m_Items[2], (int64_t)lastTimeLabel, v32, v33, v34, v35, v36, v37);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1C13E60(this->fields.noticeNumberComp, v24->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_87:
      v75 = sub_1C13FA4();
      sub_1C13E4C(v75, 0LL);
    }
  }
  if ( v24->max_length <= 3 )
LABEL_86:
    sub_1C13F88(bSpotInfo, v16);
  v24->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v24->m_Items[3], (int64_t)noticeNumberComp, v39, v40, v41, v42, v43, v44);
  BlankEarthPoint__ActivateEachComponent(0, v24, v46);
  if ( !isDisp )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v48 = (UnityEngine_Object_o *)this->fields.nextSprite;
  v49 = (WarReleaseMaster_o *)Master_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_85;
    IsOpen = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v77 = v76;
    while ( 1 )
    {
      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v51 )
        break;
      if ( !v77.fields._current )
        sub_1C13F80(v51, v52);
      klass = v77.fields._current[7].klass;
      if ( !klass )
        sub_1C13F80(v51, v52);
      IsOpen = 0;
      if ( LOBYTE(klass->_1.byval_arg.bits) )
      {
        if ( !v49 )
          sub_1C13F80(v51, v52);
        OpenEntity = WarReleaseMaster__GetOpenEntity(v49, HIDWORD(klass->_1.name), 0LL);
        IsOpen = 1;
        if ( OpenEntity )
          IsOpen = WarReleaseEntity__IsOpen(OpenEntity, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, IsOpen, 0LL);
  }
  v55 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v56 = this->fields.bSpotInfo;
    if ( !v56 )
      goto LABEL_85;
    freeQuestCount = v56->fields.freeQuestCount;
    v58 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB116F )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v16);
        byte_4BB116F = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v60->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v62 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_85;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v62, 0LL);
      v63 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
      if ( !v63 )
        goto LABEL_85;
      UILabel__set_text(v63, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v64 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v65 = this->fields.bSpotInfo;
    if ( v65 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v65->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v76,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v67 = questCount;
        v77 = v76;
        while ( 1 )
        {
          v68 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v77,
                  (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v68 )
            break;
          current = v77.fields._current;
          if ( !v77.fields._current )
            sub_1C13F80(v68, v69);
          v71 = v77.fields._current[7].klass;
          if ( !v71 )
            sub_1C13F80(v68, v69);
          if ( !v49 )
            sub_1C13F80(v68, v69);
          v72 = WarReleaseMaster__GetOpenEntity(v49, HIDWORD(v71->_1.name), 0LL);
          if ( v72 )
          {
            v72 = (WarReleaseEntity_o *)WarReleaseEntity__IsOpen(v72, 0LL);
            if ( ((unsigned __int8)v72 & 1) == 0 )
              continue;
          }
          v74 = current[7].klass;
          if ( !v74 )
            sub_1C13F80(v72, v73);
          v67 += LODWORD(v74->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v77,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, v67, 0LL);
          if ( v67 )
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
    sub_1C13F80(bSpotInfo, v16);
  }
}


void __fastcall BlankEarthPoint__SetBtnColliderEnable(
        BlankEarthPoint_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *pointCol; // x0

  pointCol = (UnityEngine_Collider_o *)this->fields.pointCol;
  if ( !pointCol )
    sub_1C13F80(0LL, isEnabled);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *nextSprite; // x24
  QuestTree_o *Instance; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UISprite_o *v29; // x24
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v59; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v71; // x0
  struct System_Object_array *items; // x9
  _QWORD *v73; // x10
  __int64 v74; // x11
  Il2CppClass **v75; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v77; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v81; // s2
  float v82; // s0
  float v83; // s1
  float v84; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v86; // x0
  const MethodInfo *v87; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB112F & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, spotEnt);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v16);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v18);
    sub_1C13D24(&StringLiteral_20510/*"icon_reward_get"*/, v19);
    byte_4BB112F = 1;
  }
  memset(&v93, 0, sizeof(v93));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v29 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v29, (System_String_o *)StringLiteral_20510/*"icon_reward_get"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._spotName_k__BackingField,
    (int64_t)name,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._spotOnType_k__BackingField = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.earthCore, (int64_t)obj, v32, v33, v34, v35, v36, v37);
  this->fields.earthCamera = camera;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.earthCamera, (int64_t)camera, v38, v39, v40, v41, v42, v43);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bSpotInfo, (int64_t)SpotInfo, v45, v46, v47, v48, v49, v50);
  this->fields.earthCoreRoot = coreRoot;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.earthCoreRoot,
    (int64_t)coreRoot,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  areaInfoList = this->fields.areaInfoList;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v59 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v59;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_41:
    sub_1C13F80(Instance, v22);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v93 = v92;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v93,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v61 )
      break;
    current = v93.fields._current;
    if ( !v93.fields._current )
      sub_1C13F80(v61, v62);
    klass = v93.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v71 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v71 )
        sub_1C13F80(0LL, v62);
      items = v71->fields._items;
      v73 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v71->fields._version;
      if ( !items )
        sub_1C13F80(v71, v62);
      v74 = v71->fields._size;
      if ( (unsigned int)v74 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          current,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + v74;
        v71->fields._size = v74 + 1;
        v75[4] = (Il2CppClass *)current;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)current, v63, v64, v65, v66, v67, v68);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v93,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_4BAEDA4 )
  {
    sub_1C13D24(&System_Math_TypeInfo, v77);
    byte_4BAEDA4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v81 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v81 <= 0.00001 )
  {
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v77);
      byte_4BAEDA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v82 = static_fields->zeroVector.fields.x;
    v83 = static_fields->zeroVector.fields.y;
    v84 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v82 = x / v81;
    v83 = y / v81;
    v84 = z / v81;
  }
  v95.fields.x = -v82;
  v95.fields.y = -v83;
  v95.fields.z = -v84;
  v96 = UnityEngine_Quaternion__LookRotation_70660348(v95, 0LL);
  this->fields._FocusQua_k__BackingField = v96;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v96, 0LL);
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v86, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v87);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v89);
  BlankEarthPoint__UpdateDisp(this, 1, v90);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v91);
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
  __int64 v3; // x1
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BB1138 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555680, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB1138 = 1;
  }
  qaaDispEffObj = (UnityEngine_Object_o *)this->fields.qaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(qaaDispEffObj, 0LL, 0LL) )
  {
    spotDispEffectObj = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_spotDispEffectObj = &this->fields.spotDispEffectObj;
    if ( UnityEngine_Object__op_Inequality(spotDispEffectObj, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988(v7, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.spotDispEffectObj, 0LL, v8, v9, v10, v11, v12, v13);
    }
    v14 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C13F80(0LL, v16);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__50417328(
            v14,
            transform,
            (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555680);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v18, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v18, 0LL);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v18;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.spotDispEffectObj,
      (int64_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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

  if ( (byte_4BB1132 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4BB1132 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_1C13F80(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1C13F80(0LL, method);
  QAASpotStateController__Update(stateController, 0LL);
}


void __fastcall BlankEarthPoint__UpdateDisp(BlankEarthPoint_o *this, bool isForce, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  int32_t dispType; // w21
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  bool v11; // w21
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

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
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4BAEDA1 = 1;
    }
    v11 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
    p_z = &static_fields->zeroVector.fields.z;
    goto LABEL_10;
  }
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&this->fields._selfScale_k__BackingField;
  p_y = &this->fields._selfScale_k__BackingField.fields.y;
  p_z = &this->fields._selfScale_k__BackingField.fields.z;
  v11 = 1;
LABEL_10:
  v15.fields.z = *p_z;
  v15.fields.y = *p_y;
  v15.fields.x = static_fields->zeroVector.fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, v15, 0LL);
  if ( !v11 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_1C13F80(0LL, v12);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v11, v13);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  bool activeSelf; // w0
  __int64 v7; // x1
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB1131 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB1131 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v5 = this->fields.pinObject;
    if ( !v5 )
      sub_1C13F80(0LL, v4);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v5, 0LL);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      p_changedUiRootPosition = (struct UnityEngine_Vector3_StaticFields *)&this->fields.changedUiRootPosition;
      p_y = &this->fields.changedUiRootPosition.fields.y;
      p_z = &this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      if ( !byte_4BAEDA1 )
      {
        sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v7);
        byte_4BAEDA1 = 1;
      }
      p_changedUiRootPosition = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_changedUiRootPosition->zeroVector.fields.y;
      p_z = &p_changedUiRootPosition->zeroVector.fields.z;
    }
    v12.fields.y = *p_y;
    v12.fields.x = p_changedUiRootPosition->zeroVector.fields.x;
    v12.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(uiRoot, v12, 0LL);
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
  sub_1C13CC8(
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
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4BB113C & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB113C = 1;
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
            sub_1C13CC8(p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1C13F80(this, method);
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
    sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields._animName_5__2, (int64_t)AnimName, v7, v8, v9, v10, v11, v12);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__111_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
    sub_1C13F80(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}