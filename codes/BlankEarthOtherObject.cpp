void __fastcall BlankEarthOtherObject___ctor(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  QAAOtherObjStateController_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6C998 & 1) == 0 )
  {
    sub_1B90010(&QAAOtherObjStateController_TypeInfo, method);
    byte_4A6C998 = 1;
  }
  *(_QWORD *)&this->fields.otherObjZoomInPos.fields.y = 0LL;
  this->fields.otherObjZoomInPos.fields.x = 0.0;
  *(_QWORD *)&this->fields.zoomInOffsetEulerAngle.fields.z = 0LL;
  *(_QWORD *)&this->fields.zoomOutOffsetEulerAngle.fields.y = 0LL;
  *(_QWORD *)&this->fields.zoomInOffsetEulerAngle.fields.x = 0LL;
  *(_QWORD *)&this->fields.zoomInSpeed = 0x3F0000003F000000LL;
  v3 = (QAAOtherObjStateController_o *)sub_1B9025C(QAAOtherObjStateController_TypeInfo);
  QAAOtherObjStateController___ctor(v3, 0LL);
  this->fields.stateController = v3;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.stateController, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthOtherObject__Awake(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  QAAOtherObjStateController_o *stateController; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Object_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A6C991 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_AnimationState___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v3);
    byte_4A6C991 = 1;
  }
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B9026C(0LL, method);
  QAAOtherObjStateController__Init(stateController, (QAAOtherObjStateController_IBlankEarthObject_o *)this, 0LL);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v5,
         (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.animationStateArray, (int32_t)v6, v7, v8);
}


void __fastcall BlankEarthOtherObject__ChangeState(
        BlankEarthOtherObject_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  struct System_Action_o **p_stateEndAct; // x20
  __int64 v6; // x1
  QAAOtherObjStateController_o *v7; // x0

  this->fields.stateEndAct = finishCallback;
  p_stateEndAct = &this->fields.stateEndAct;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (int32_t)finishCallback,
    (int32_t)method);
  v7 = (QAAOtherObjStateController_o *)*(p_stateEndAct - 5);
  if ( !v7 )
    sub_1B9026C(0LL, v6);
  QAAOtherObjStateController__SetState(v7, state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish(
        BlankEarthOtherObject_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A6C996 & 1) == 0 )
  {
    sub_1B90010(&BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_TypeInfo, *(_QWORD *)&index);
    byte_4A6C996 = 1;
  }
  v7 = sub_1B9025C(BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthOtherObject__GetAnimName(
        BlankEarthOtherObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4A6C997 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_4A6C997 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2E7D068 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v6, 0LL);
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall BlankEarthOtherObject__GetCurrentAnimIndex(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_Object_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool IsExistCommand; // w20
  int32_t v14; // w20
  BlankEarthGimmickAddMaster_o *v15; // x21
  BlankEarthGimmickAddEntity_o *PrioredAvailableEntity; // x0

  if ( (byte_4A6C995 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_BlankEarthGimmickAddMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v6);
    sub_1B90010(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_4A6C995 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BE1EEC(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BE1EEC(v9);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    IsExistCommand = QuestAfterAction__IsExistCommand(
                       (QuestAfterAction_o *)Instance,
                       4,
                       this->fields._objectId_k__BackingField,
                       0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v14 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_BlankEarthGimmickAddMaster___);
  if ( !Instance )
LABEL_21:
    sub_1B9026C(Instance, v12);
  v15 = (BlankEarthGimmickAddMaster_o *)Instance;
  if ( BlankEarthGimmickAddMaster__HasAnyRecord((BlankEarthGimmickAddMaster_o *)Instance, 0LL)
    && (PrioredAvailableEntity = BlankEarthGimmickAddMaster__GetPrioredAvailableEntity(
                                   v15,
                                   1,
                                   this->fields._objectId_k__BackingField,
                                   v14,
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


int32_t __fastcall BlankEarthOtherObject__GetDispType(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  struct BlankEarthOtherObjectInfo_o *objectInfo; // x8

  objectInfo = this->fields.objectInfo;
  if ( !objectInfo )
    sub_1B9026C(this, method);
  return objectInfo->fields._dispType_k__BackingField;
}


bool __fastcall BlankEarthOtherObject__IsRevealDispType(
        BlankEarthOtherObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  return dispType != 0;
}


void __fastcall BlankEarthOtherObject__PlayAnim(
        BlankEarthOtherObject_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthOtherObject__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject__PlayOtherObjUniqueAnim(
        BlankEarthOtherObject_o *this,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  if ( isQuick )
  {
    BlankEarthOtherObject__SetAnimationToEnd(this, animIndex, (const MethodInfo *)isQuick);
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    this->fields._AnimIndex_k__BackingField = animIndex;
    BlankEarthOtherObject__ChangeState(this, 4, finishCallback, (const MethodInfo *)finishCallback);
  }
}


void __fastcall BlankEarthOtherObject__RevealOrConcealOtherObjAnim(
        BlankEarthOtherObject_o *this,
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
    if ( dispType != 1 )
    {
      ActionExtensions__Call(finishCallback, 0LL);
      return;
    }
    v5 = !isQuick;
    v6 = 3;
    v7 = 6;
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
  BlankEarthOtherObject__ChangeState(this, v8, finishCallback, (const MethodInfo *)finishCallback);
}


void __fastcall BlankEarthOtherObject__SetAnimationToEnd(
        BlankEarthOtherObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *AnimName; // x19
  __int64 v5; // x1
  UnityEngine_Animation_o *anim; // x0

  AnimName = BlankEarthOtherObject__GetAnimName(this, index, method);
  if ( !System_String__IsNullOrEmpty(AnimName, 0LL) )
  {
    anim = this->fields.anim;
    if ( !anim
      || (UnityEngine_Animation__Rewind(anim, 0LL), (anim = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_69284532(anim, AnimName, 0LL), (anim = this->fields.anim) == 0LL)
      || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(anim, AnimName, 0LL)) == 0LL )
    {
      sub_1B9026C(anim, v5);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)anim, 1.0, 0LL);
  }
}


void __fastcall BlankEarthOtherObject__SetDispType(
        BlankEarthOtherObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  struct BlankEarthOtherObjectInfo_o *objectInfo; // x8

  objectInfo = this->fields.objectInfo;
  if ( !objectInfo )
    sub_1B9026C(this, dispType);
  objectInfo->fields._dispType_k__BackingField = dispType;
}


void __fastcall BlankEarthOtherObject__SetOtherObj(
        BlankEarthOtherObject_o *this,
        BlankEarthGimmickEntity_o *ent,
        const MethodInfo *method)
{
  BlankEarthOtherObject_o *v4; // x19
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct BlankEarthOtherObjectInfo_o *objectInfo; // x8
  struct BlankEarthOtherObjectInfo_o *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_4A6C992 & 1) == 0 )
  {
    this = (BlankEarthOtherObject_o *)sub_1B90010(&BlankEarthOtherObjectInfo_TypeInfo, ent);
    byte_4A6C992 = 1;
  }
  if ( !ent )
    goto LABEL_7;
  v4->fields._objectId_k__BackingField = ent->fields.id;
  v5 = (Il2CppObject *)sub_1B9025C(BlankEarthOtherObjectInfo_TypeInfo);
  System_Object___ctor(v5, 0LL);
  v4->fields.objectInfo = (struct BlankEarthOtherObjectInfo_o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.objectInfo, (int32_t)v5, v6, v7);
  objectInfo = v4->fields.objectInfo;
  if ( !objectInfo
    || (objectInfo->fields._ObjectId_k__BackingField = v4->fields._objectId_k__BackingField,
        this = (BlankEarthOtherObject_o *)BlankEarthGimmickEntity__CheckGimmickCond(ent, 0LL),
        (v9 = v4->fields.objectInfo) == 0LL) )
  {
LABEL_7:
    sub_1B9026C(this, ent);
  }
  v9->fields._dispType_k__BackingField = (unsigned __int8)this & 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  v4->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(v11, v4->fields.zoomOutOffsetEulerAngle, 0LL);
  CurrentAnimIndex = BlankEarthOtherObject__GetCurrentAnimIndex(v4, v12);
  v4->fields._AnimIndex_k__BackingField = CurrentAnimIndex;
  BlankEarthOtherObject__SetAnimationToEnd(v4, CurrentAnimIndex, v14);
  BlankEarthOtherObject__UpdateDisp(v4, 1, v15);
}


void __fastcall BlankEarthOtherObject__StateQaaEnd(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *stateEndAct; // x19

  stateEndAct = this->fields.stateEndAct;
  BlankEarthOtherObject__ChangeState(this, 1, 0LL, v2);
  ActionExtensions__Call(stateEndAct, 0LL);
}


void __fastcall BlankEarthOtherObject__Update(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  QAAOtherObjStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B9026C(0LL, method);
  QAAOtherObjStateController__Update(stateController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject__UpdateDisp(
        BlankEarthOtherObject_o *this,
        bool isForce,
        const MethodInfo *method)
{
  BlankEarthOtherObject_o *v3; // x19
  struct BlankEarthOtherObjectInfo_o *objectInfo; // x8
  int32_t dispType_k__BackingField; // w21
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *p_selfScale_k__BackingField; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( this->fields._mtIsUpdate_k__BackingField || isForce )
  {
    objectInfo = this->fields.objectInfo;
    if ( objectInfo )
    {
      dispType_k__BackingField = objectInfo->fields._dispType_k__BackingField;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( dispType_k__BackingField )
      {
        p_selfScale_k__BackingField = (struct UnityEngine_Vector3_StaticFields *)&v3->fields._selfScale_k__BackingField;
        p_y = &v3->fields._selfScale_k__BackingField.fields.y;
        p_z = &v3->fields._selfScale_k__BackingField.fields.z;
      }
      else
      {
        if ( !byte_4A6A9C1 )
        {
          sub_1B90010(&UnityEngine_Vector3_TypeInfo, v6);
          byte_4A6A9C1 = 1;
        }
        p_selfScale_k__BackingField = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &p_selfScale_k__BackingField->zeroVector.fields.y;
        p_z = &p_selfScale_k__BackingField->zeroVector.fields.z;
      }
      v11.fields.z = *p_z;
      v11.fields.y = *p_y;
      v11.fields.x = p_selfScale_k__BackingField->zeroVector.fields.x;
      GameObjectExtensions__SetLocalScale(gameObject, v11, 0LL);
      if ( dispType_k__BackingField )
        goto LABEL_12;
      this = (BlankEarthOtherObject_o *)v3->fields.anim;
      if ( this )
      {
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
LABEL_12:
        v3->fields._mtIsUpdate_k__BackingField = 0;
        return;
      }
    }
    sub_1B9026C(this, isForce);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject__ZoomInAdjustAppearance(
        BlankEarthOtherObject_o *this,
        float speedTime,
        int32_t easingType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  EasingObject_o *v20; // x20
  System_Action_o *v21; // x22
  System_Action_o *v22; // x23
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6C993 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1B90010(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B90010(&Method_BlankEarthOtherObject___c__DisplayClass48_0__ZoomInAdjustAppearance_b__0__, v8);
    sub_1B90010(&Method_BlankEarthOtherObject___c__DisplayClass48_0__ZoomInAdjustAppearance_b__1__, v9);
    sub_1B90010(&BlankEarthOtherObject___c__DisplayClass48_0_TypeInfo, v10);
    byte_4A6C993 = 1;
  }
  v11 = sub_1B9025C(BlankEarthOtherObject___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EDF250 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Component_object, v18, v19);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_8;
  *(UnityEngine_Quaternion_o *)(v11 + 32) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  v23.fields.x = this->fields.zoomInOffsetEulerAngle.fields.x * 0.017453;
  v23.fields.y = this->fields.zoomInOffsetEulerAngle.fields.y * 0.017453;
  v23.fields.z = this->fields.zoomInOffsetEulerAngle.fields.z * 0.017453;
  *(UnityEngine_Quaternion_o *)(v11 + 48) = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
  v20 = *(EasingObject_o **)(v11 + 16);
  v21 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_BlankEarthOtherObject___c__DisplayClass48_0__ZoomInAdjustAppearance_b__0__,
    0LL);
  v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_BlankEarthOtherObject___c__DisplayClass48_0__ZoomInAdjustAppearance_b__1__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1B9026C(transform, v13);
  EasingObject__Play(v20, speedTime, v21, v22, 0.0, easingType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject__ZoomOutAdjustAppearance(
        BlankEarthOtherObject_o *this,
        float speedTime,
        int32_t easingType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  EasingObject_o *v20; // x20
  System_Action_o *v21; // x22
  System_Action_o *v22; // x23
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6C994 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1B90010(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B90010(&Method_BlankEarthOtherObject___c__DisplayClass49_0__ZoomOutAdjustAppearance_b__0__, v8);
    sub_1B90010(&Method_BlankEarthOtherObject___c__DisplayClass49_0__ZoomOutAdjustAppearance_b__1__, v9);
    sub_1B90010(&BlankEarthOtherObject___c__DisplayClass49_0_TypeInfo, v10);
    byte_4A6C994 = 1;
  }
  v11 = sub_1B9025C(BlankEarthOtherObject___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EDF250 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Component_object, v18, v19);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_8;
  *(UnityEngine_Quaternion_o *)(v11 + 32) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  v23.fields.x = this->fields.zoomOutOffsetEulerAngle.fields.x * 0.017453;
  v23.fields.y = this->fields.zoomOutOffsetEulerAngle.fields.y * 0.017453;
  v23.fields.z = this->fields.zoomOutOffsetEulerAngle.fields.z * 0.017453;
  *(UnityEngine_Quaternion_o *)(v11 + 48) = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
  v20 = *(EasingObject_o **)(v11 + 16);
  v21 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_BlankEarthOtherObject___c__DisplayClass49_0__ZoomOutAdjustAppearance_b__0__,
    0LL);
  v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_BlankEarthOtherObject___c__DisplayClass49_0__ZoomOutAdjustAppearance_b__1__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1B9026C(transform, v13);
  EasingObject__Play(v20, speedTime, v21, v22, 0.0, easingType, 0LL);
}


int32_t __fastcall BlankEarthOtherObject__get_AnimIndex(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields._AnimIndex_k__BackingField;
}


UnityEngine_Vector3_o __fastcall BlankEarthOtherObject__get_OtherObjZoomInPos(
        BlankEarthOtherObject_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.otherObjZoomInPos.fields.x;
  y = this->fields.otherObjZoomInPos.fields.y;
  z = this->fields.otherObjZoomInPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall BlankEarthOtherObject__get_OutPutZoomType(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields.zoomType;
}


UnityEngine_GameObject_o *__fastcall BlankEarthOtherObject__get_SpotRoot(
        BlankEarthOtherObject_o *this,
        const MethodInfo *method)
{
  return this->fields.spotRoot;
}


float __fastcall BlankEarthOtherObject__get_ZoomInSpeed(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields.zoomInSpeed;
}


float __fastcall BlankEarthOtherObject__get_ZoomOutSpeed(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields.zoomOutSpeed;
}


bool __fastcall BlankEarthOtherObject__get_mRequestDontUpdateDisp(
        BlankEarthOtherObject_o *this,
        const MethodInfo *method)
{
  return this->fields._mRequestDontUpdateDisp_k__BackingField;
}


bool __fastcall BlankEarthOtherObject__get_mtIsUpdate(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields._mtIsUpdate_k__BackingField;
}


int32_t __fastcall BlankEarthOtherObject__get_objectId(BlankEarthOtherObject_o *this, const MethodInfo *method)
{
  return this->fields._objectId_k__BackingField;
}


UnityEngine_Vector3_o __fastcall BlankEarthOtherObject__get_selfScale(
        BlankEarthOtherObject_o *this,
        const MethodInfo *method)
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


UnityEngine_GameObject_o *__fastcall BlankEarthOtherObject__get_tweenTarget(
        BlankEarthOtherObject_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


void __fastcall BlankEarthOtherObject__set_AnimIndex(
        BlankEarthOtherObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AnimIndex_k__BackingField = value;
}


void __fastcall BlankEarthOtherObject__set_mRequestDontUpdateDisp(
        BlankEarthOtherObject_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._mRequestDontUpdateDisp_k__BackingField = value;
}


void __fastcall BlankEarthOtherObject__set_mtIsUpdate(
        BlankEarthOtherObject_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._mtIsUpdate_k__BackingField = value;
}


void __fastcall BlankEarthOtherObject__set_objectId(
        BlankEarthOtherObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._objectId_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject__set_selfScale(
        BlankEarthOtherObject_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._selfScale_k__BackingField = value;
}


void __fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58___ctor(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58__MoveNext(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct BlankEarthOtherObject_o *_4__this; // x20
  BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *v5; // x19
  System_String_o *AnimName; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  float totalTime_5__3; // s8
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_19;
    this = (BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *)UnityEngine_Animation__get_Item(
                                                                     (UnityEngine_Animation_o *)this,
                                                                     v5->fields._animName_5__2,
                                                                     0LL);
    if ( !this )
      goto LABEL_19;
    if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) < 1.0 )
    {
      totalTime_5__3 = v5->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        v5->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0LL);
LABEL_14:
        this = (BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v5->fields.__2__current = 0LL;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
            sub_1B8FFB4(p__2__current, 0, v10, v11);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
          goto LABEL_17;
        }
LABEL_19:
        sub_1B9026C(this, method);
      }
    }
LABEL_17:
    ActionExtensions__Call(v5->fields.finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    AnimName = BlankEarthOtherObject__GetAnimName(_4__this, this->fields.index, v2);
    v5->fields._animName_5__2 = AnimName;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields._animName_5__2, (int32_t)AnimName, v7, v8);
    if ( !System_String__IsNullOrEmpty(v5->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_19;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_19;
      UnityEngine_Animation__Play_69284532((UnityEngine_Animation_o *)this, v5->fields._animName_5__2, 0LL);
      v5->fields._totalTime_5__3 = 0.0;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58__System_Collections_IEnumerator_Reset(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
}


Il2CppObject *__fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58__System_Collections_IEnumerator_get_Current(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58__System_IDisposable_Dispose(
        BlankEarthOtherObject__CoPlayAnimUntilFinish_d__58_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthOtherObject___c__DisplayClass48_0___ctor(
        BlankEarthOtherObject___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject___c__DisplayClass48_0___ZoomInAdjustAppearance_b__0(
        BlankEarthOtherObject___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  BlankEarthOtherObject___c__DisplayClass48_0_o *v3; // x19
  double v4; // d0
  double v5; // d8
  float v6; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v8; // x19
  int v9; // s0
  UnityEngine_Quaternion_o qua_from; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o qua_to; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_6;
  v3 = this;
  v4 = StepFunc__AccSig(eo->fields.mNow, 0LL);
  this = (BlankEarthOtherObject___c__DisplayClass48_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_6;
  v5 = v4;
  this = (BlankEarthOtherObject___c__DisplayClass48_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this
    || (v6 = v5,
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        qua_from = v3->fields.qua_from,
        qua_to = v3->fields.qua_to,
        v8 = transform,
        *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(qua_from, qua_to, v6, 0LL),
        !v8) )
  {
LABEL_6:
    sub_1B9026C(this, method);
  }
  UnityEngine_Transform__set_rotation(v8, *(UnityEngine_Quaternion_o *)&v9, 0LL);
}


void __fastcall BlankEarthOtherObject___c__DisplayClass48_0___ZoomInAdjustAppearance_b__1(
        BlankEarthOtherObject___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0LL)) == 0LL )
  {
    sub_1B9026C(_4__this, method);
  }
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)_4__this, this->fields.qua_to, 0LL);
}


void __fastcall BlankEarthOtherObject___c__DisplayClass49_0___ctor(
        BlankEarthOtherObject___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthOtherObject___c__DisplayClass49_0___ZoomOutAdjustAppearance_b__0(
        BlankEarthOtherObject___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  BlankEarthOtherObject___c__DisplayClass49_0_o *v3; // x19
  double v4; // d0
  double v5; // d8
  float v6; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v8; // x19
  int v9; // s0
  UnityEngine_Quaternion_o qua_from; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o qua_to; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_6;
  v3 = this;
  v4 = StepFunc__AccSig(eo->fields.mNow, 0LL);
  this = (BlankEarthOtherObject___c__DisplayClass49_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_6;
  v5 = v4;
  this = (BlankEarthOtherObject___c__DisplayClass49_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this
    || (v6 = v5,
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        qua_from = v3->fields.qua_from,
        qua_to = v3->fields.qua_to,
        v8 = transform,
        *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(qua_from, qua_to, v6, 0LL),
        !v8) )
  {
LABEL_6:
    sub_1B9026C(this, method);
  }
  UnityEngine_Transform__set_rotation(v8, *(UnityEngine_Quaternion_o *)&v9, 0LL);
}


void __fastcall BlankEarthOtherObject___c__DisplayClass49_0___ZoomOutAdjustAppearance_b__1(
        BlankEarthOtherObject___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0LL)) == 0LL )
  {
    sub_1B9026C(_4__this, method);
  }
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)_4__this, this->fields.qua_to, 0LL);
}