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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  QAASpotStateController_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_49B786A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_1B4CF90(&QAASpotStateController_TypeInfo, v6);
    byte_49B786A = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_BA9F80;
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    byte_49B5361 = 1;
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.areaInfoList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listBillboardChildWidget, (int32_t)v16, v17, v18);
  v19 = (QAASpotStateController_o *)sub_1B4D1DC(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v19, 0LL);
  this->fields.stateController = v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.stateController, (int32_t)v19, v20, v21);
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

  if ( (byte_49B7864 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_Component__TypeInfo, targets);
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_Component___, v5);
    sub_1B4CF90(&Method_BasicHelper_ForEach_Component___, v6);
    sub_1B4CF90(&Method_BlankEarthPoint___c__DisplayClass102_0__ActivateEachComponent_b__0__, v7);
    sub_1B4CF90(&BlankEarthPoint___c__DisplayClass102_0_TypeInfo, v8);
    byte_49B7864 = 1;
  }
  v9 = sub_1B4D1DC(BlankEarthPoint___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_BYTE *)(v9 + 16) = value;
  v12 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_Component___);
  v13 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Component__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BlankEarthPoint___c__DisplayClass102_0__ActivateEachComponent_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_Component___);
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
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BlankEarthPoint_OffsetTargetObject_array *v16; // x8
  __int64 v17; // x21
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x9
  BlankEarthPoint_OffsetTargetObject_o *v20; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v22; // s0
  int v23; // s1
  int v24; // s2
  _DWORD *v25; // x8
  UnityEngine_Object_o *anim; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x1
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9

  v2 = this;
  if ( (byte_49B785B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_AnimationState___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_AnimationState___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    this = (BlankEarthPoint_o *)sub_1B4CF90(&UnityEngine_Vector3___TypeInfo, v8);
    byte_49B785B = 1;
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
        sub_1B4D1F4(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v10];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
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
    v13 = sub_1B4D038(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v13;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.defaultLocalPosOffsetTargetObjects, v13, v14, v15);
    v16 = v2->fields.offsetTargetObjects;
    if ( !v16 )
      goto LABEL_44;
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = v16->max_length;
      if ( (__int64)v18 >= (int)v19 )
        break;
      if ( v18 >= v19 )
        goto LABEL_45;
      v20 = v16->m_Items[v18];
      if ( v20 )
      {
        this = (BlankEarthPoint_o *)v20->fields.targetObject;
        if ( !this )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_44;
        if ( v18 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_45;
        v25 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v17);
        v25[8] = v22;
        v25[9] = v23;
        v25[10] = v24;
        v16 = v2->fields.offsetTargetObjects;
      }
      ++v18;
      v17 += 12LL;
      if ( !v16 )
        goto LABEL_44;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_44:
    sub_1B4D1EC(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v31 = System_Linq_Enumerable__ToArray_object_(
            v30,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v32 = Method_System_Array_Empty_AnimationState___;
    v33 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v33 )
    {
      sub_1B9D67C(Method_System_Array_Empty_AnimationState___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v34 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v34);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1B9D620(inited);
    v31 = **(System_Object_array ***)(v35 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v31;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.animationStateArray, (int32_t)v31, v27, v28);
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
  __int64 v6; // x1
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (int32_t)finishCallback,
    method);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B4D1EC(0LL, v6);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B7868 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarthPoint__CoPlayAnimUntilFinish_d__112_TypeInfo, *(_QWORD *)&index);
    byte_49B7868 = 1;
  }
  v7 = sub_1B4D1DC(BlankEarthPoint__CoPlayAnimUntilFinish_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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

  if ( (byte_49B7869 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_49B7869 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2EF03FC *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_49B7865 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_49B7865 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620(v2);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B9D620(v2);
  v11 = **(UnityEngine_Object_o ***)(v10 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v15 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
LABEL_21:
    sub_1B4D1EC(Instance, v13);
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
    sub_1B4D1EC(earthCore, v6);
  v19 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  v45 = GameObjectExtensions__GetPosition(v19, 0LL);
  x = v45.fields.x;
  y = v45.fields.y;
  z = v45.fields.z;
  v46 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  v24 = v46.fields.x;
  v25 = v46.fields.y;
  v26 = v46.fields.z;
  if ( !byte_49B5364 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, v23);
    byte_49B5364 = 1;
  }
  v27 = x - v24;
  v28 = y - v25;
  v29 = z - v26;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = sqrtf((float)(v29 * v29) + (float)((float)(v27 * v27) + (float)(v28 * v28)));
  if ( v30 <= 0.00001 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v23);
      byte_49B5361 = 1;
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
  if ( !byte_49B5364 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, v23);
    byte_49B5364 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = sqrtf((float)(v37 * v37) + (float)((float)(v35 * v35) + (float)(v36 * v36)));
  if ( v38 <= 0.00001 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v23);
      byte_49B5361 = 1;
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

  if ( (byte_49B785C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B785C = 1;
  }
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v67.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v67.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v67, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49B5361 = 1;
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
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_68610440(v14, *(UnityEngine_Vector3_o *)&v17, 0LL));
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
      if ( !byte_49B5369 )
      {
        transform = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
        byte_49B5369 = 1;
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
            sub_1B4D1F4(transform, v16);
          v30 = (UnityEngine_Transform_o *)*((_QWORD *)&v29->obj.klass + v25);
          if ( !byte_49B5361 )
          {
            transform = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
            byte_49B5361 = 1;
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
                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
    sub_1B4D1EC(transform, v16);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49B7863 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BlankEarthPoint_OnClickSpot__, method);
    byte_49B7863 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B4D1EC(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B4D1EC(this, method);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B4D1EC(this, method);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *earthCore; // x0
  ExUITexture_c *klass; // x8
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_49B7862 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B7862 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
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
    sub_1B4D1EC(earthCore, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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

  if ( (byte_49B7866 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_49B7866 = 1;
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
      || (UnityEngine_Animation__Play_68548868(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_1B4D1EC(Item, v8);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UISprite_o *loopIconSprite; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UILabel_o *lastTimeLabel; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v30; // x2
  Il2CppObject *Master_object; // x0
  UnityEngine_Object_o *v32; // x21
  WarReleaseMaster_o *v33; // x20
  bool IsOpen; // w21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppClass *klass; // x8
  WarReleaseEntity_o *OpenEntity; // x0
  UnityEngine_Object_o *v39; // x21
  struct MapControl_SpotInfo_o *v40; // x8
  int32_t freeQuestCount; // w22
  UnityEngine_Object_o *v42; // x21
  int32_t spotId_k__BackingField; // w21
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v46; // w21
  UILabel_o *v47; // x21
  UnityEngine_Object_o *v48; // x21
  struct MapControl_SpotInfo_o *v49; // x8
  int32_t questCount; // w23
  int32_t v51; // w21
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x24
  Il2CppClass *v55; // x8
  WarReleaseEntity_o *v56; // x0
  __int64 v57; // x1
  Il2CppClass *v58; // x8
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49B785E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Component___TypeInfo, isDisp);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarReleaseMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_12014/*"SPOT_FREE_QUEST_LAST_TIME"*/, v14);
    byte_49B785E = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1B4D038(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_85;
  nextSprite = this->fields.nextSprite;
  v20 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1B4D0CC(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( !v20->max_length )
    goto LABEL_86;
  v20->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1B4CF34((CGThumbnailListItem_o *)v20->m_Items, (int32_t)nextSprite, v17, v18);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1B4D0CC(this->fields.loopIconSprite, v20->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_86;
  v20->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)loopIconSprite, v21, v22);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1B4D0CC(this->fields.lastTimeLabel, v20->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_86;
  v20->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)lastTimeLabel, v24, v25);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1B4D0CC(this->fields.noticeNumberComp, v20->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_87:
      v59 = sub_1B4D210();
      sub_1B4D0B8(v59, 0LL);
    }
  }
  if ( v20->max_length <= 3 )
LABEL_86:
    sub_1B4D1F4(bSpotInfo, v16);
  v20->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)noticeNumberComp, v27, v28);
  BlankEarthPoint__ActivateEachComponent(0, v20, v30);
  if ( !isDisp )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v32 = (UnityEngine_Object_o *)this->fields.nextSprite;
  v33 = (WarReleaseMaster_o *)Master_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_85;
    IsOpen = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v61 = v60;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v35 )
        break;
      if ( !v61.fields._current )
        sub_1B4D1EC(v35, v36);
      klass = v61.fields._current[7].klass;
      if ( !klass )
        sub_1B4D1EC(v35, v36);
      IsOpen = 0;
      if ( LOBYTE(klass->_1.byval_arg.bits) )
      {
        if ( !v33 )
          sub_1B4D1EC(v35, v36);
        OpenEntity = WarReleaseMaster__GetOpenEntity(v33, HIDWORD(klass->_1.name), 0LL);
        IsOpen = 1;
        if ( OpenEntity )
          IsOpen = WarReleaseEntity__IsOpen(OpenEntity, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, IsOpen, 0LL);
  }
  v39 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v40 = this->fields.bSpotInfo;
    if ( !v40 )
      goto LABEL_85;
    freeQuestCount = v40->fields.freeQuestCount;
    v42 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49B789E )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
        byte_49B789E = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v44->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v46 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_85;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v46, 0LL);
      v47 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v47 )
        goto LABEL_85;
      UILabel__set_text(v47, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v48 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v49 = this->fields.bSpotInfo;
    if ( v49 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v49->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v60,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v51 = questCount;
        v61 = v60;
        while ( 1 )
        {
          v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v61,
                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v52 )
            break;
          current = v61.fields._current;
          if ( !v61.fields._current )
            sub_1B4D1EC(v52, v53);
          v55 = v61.fields._current[7].klass;
          if ( !v55 )
            sub_1B4D1EC(v52, v53);
          if ( !v33 )
            sub_1B4D1EC(v52, v53);
          v56 = WarReleaseMaster__GetOpenEntity(v33, HIDWORD(v55->_1.name), 0LL);
          if ( v56 )
          {
            v56 = (WarReleaseEntity_o *)WarReleaseEntity__IsOpen(v56, 0LL);
            if ( ((unsigned __int8)v56 & 1) == 0 )
              continue;
          }
          v58 = current[7].klass;
          if ( !v58 )
            sub_1B4D1EC(v56, v57);
          v51 += LODWORD(v58->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v61,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, v51, 0LL);
          if ( v51 )
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
    sub_1B4D1EC(bSpotInfo, v16);
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
    sub_1B4D1EC(0LL, isEnabled);
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
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UISprite_o *v25; // x24
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v39; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v47; // x0
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 v50; // x11
  Il2CppClass **v51; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v53; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v57; // s2
  float v58; // s0
  float v59; // s1
  float v60; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v62; // x0
  const MethodInfo *v63; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B785D & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, spotEnt);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v16);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v18);
    sub_1B4CF90(&StringLiteral_19883/*"icon_spot_next"*/, v19);
    byte_49B785D = 1;
  }
  memset(&v69, 0, sizeof(v69));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v25 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v25, (System_String_o *)StringLiteral_19883/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._spotName_k__BackingField, (int32_t)name, v23, v24);
  this->fields._spotOnType_k__BackingField = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.earthCore, (int32_t)obj, v28, v29);
  this->fields.earthCamera = camera;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.earthCamera, (int32_t)camera, v30, v31);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bSpotInfo, (int32_t)SpotInfo, v33, v34);
  this->fields.earthCoreRoot = coreRoot;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.earthCoreRoot, (int32_t)coreRoot, v35, v36);
  areaInfoList = this->fields.areaInfoList;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v39 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v39;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_41:
    sub_1B4D1EC(Instance, v22);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v41 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1B4D1EC(v41, v42);
    klass = v69.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v47 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v47 )
        sub_1B4D1EC(0LL, v42);
      items = v47->fields._items;
      v49 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v47->fields._version;
      if ( !items )
        sub_1B4D1EC(v47, v42);
      v50 = v47->fields._size;
      if ( (unsigned int)v50 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v47,
          current,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + v50;
        v47->fields._size = v50 + 1;
        v51[4] = (Il2CppClass *)current;
        sub_1B4CF34((CGThumbnailListItem_o *)(v51 + 4), (int32_t)current, v43, v44);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_49B5364 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, v53);
    byte_49B5364 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v57 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v57 <= 0.00001 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v53);
      byte_49B5361 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v58 = static_fields->zeroVector.fields.x;
    v59 = static_fields->zeroVector.fields.y;
    v60 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v58 = x / v57;
    v59 = y / v57;
    v60 = z / v57;
  }
  v71.fields.x = -v58;
  v71.fields.y = -v59;
  v71.fields.z = -v60;
  v72 = UnityEngine_Quaternion__LookRotation_68742820(v71, 0LL);
  this->fields._FocusQua_k__BackingField = v72;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v72, 0LL);
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v62, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v63);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v65);
  BlankEarthPoint__UpdateDisp(this, 1, v66);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v67);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_49B7867 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B7867 = 1;
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
      UnityEngine_Object__Destroy_68804456(v7, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.spotDispEffectObj, 0, v8, v9);
    }
    v10 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B4D1EC(0LL, v12);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object__49839864(
            v10,
            transform,
            (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v14, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v14, 0LL);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v14;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.spotDispEffectObj, (int32_t)v14, v15, v16);
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

  if ( (byte_49B7861 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49B7861 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B4D1EC(0LL, method);
  QAASpotStateController__Update(stateController, 0LL);
}


void __fastcall BlankEarthPoint__UpdateAreaInfoList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v10; // w9
  struct BlankEarth_o *earthCore; // x8
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 v22; // x11
  Il2CppClass **v23; // x9
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_49B785F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v6);
    this = (BlankEarthPoint_o *)sub_1B4CF90(
                                  &Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__,
                                  v7);
    byte_49B785F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  areaInfoList = v2->fields.areaInfoList;
  if ( areaInfoList )
  {
    size = areaInfoList->fields._size;
    v10 = areaInfoList->fields._version + 1;
    areaInfoList->fields._size = 0;
    areaInfoList->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
    earthCore = v2->fields.earthCore;
    if ( !earthCore
      || (ordealCallFolderInfo = earthCore->fields.ordealCallFolderInfo) == 0LL
      || (this = (BlankEarthPoint_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
    {
      sub_1B4D1EC(this, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v13 )
        break;
      current = v25.fields._current;
      if ( !v25.fields._current )
        sub_1B4D1EC(v13, v14);
      klass = v25.fields._current[7].klass;
      if ( klass && v2->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
      {
        v19 = (System_Collections_Generic_List_object__o *)v2->fields.areaInfoList;
        if ( !v19 )
          sub_1B4D1EC(0LL, v14);
        items = v19->fields._items;
        v21 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1B4D1EC(v19, v14);
        v22 = v19->fields._size;
        if ( (unsigned int)v22 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            current,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + v22;
          v19->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)current;
          sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)current, v15, v16);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  }
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
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v6);
      byte_49B5361 = 1;
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
      sub_1B4D1EC(0LL, v12);
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

  if ( (byte_49B7860 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7860 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v5 = this->fields.pinObject;
    if ( !v5 )
      sub_1B4D1EC(0LL, v4);
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
      if ( !byte_49B5361 )
      {
        sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v7);
        byte_49B5361 = 1;
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
  const MethodInfo *v3; // x3

  this->fields._spotName_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._spotName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__112___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__112__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *v3; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_49B786B & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B786B = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)UnityEngine_Animation__get_Item(
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
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v3->fields.__2__current = 0LL;
            p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
            sub_1B4CF34(p__2__current, 0, v11, v12);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1B4D1EC(this, method);
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
    sub_1B4CF34((CGThumbnailListItem_o *)&v3->fields._animName_5__2, (int32_t)AnimName, v7, v8);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v3->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Play_68548868((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0LL);
      v3->fields._totalTime_5__3 = 0.0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__112__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__112_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__112__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__112__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint___c__DisplayClass102_0___ctor(
        BlankEarthPoint___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint___c__DisplayClass102_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass102_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass102_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BlankEarthPoint___c__DisplayClass102_0_o *)UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}