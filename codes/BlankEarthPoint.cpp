void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Vector3_c *v8; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v11; // x8
  __int64 v12; // d0
  float v13; // s1
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  QAASpotStateController_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49F8FCC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v6);
    sub_1B640C8(&QAASpotStateController_TypeInfo, v7);
    byte_49F8FCC = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_BA2DC0;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  v8 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v11 = v8->static_fields;
  v12 = *(_QWORD *)&v11->zeroVector.fields.x;
  v13 = v11->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v12;
  this->fields.changedUiRootPosition.fields.z = v13;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.areaInfoList, (int32_t)v14, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listBillboardChildWidget, (int32_t)v19, v20, v21);
  v24 = (QAASpotStateController_o *)sub_1B64314(QAASpotStateController_TypeInfo, v22, v23);
  QAASpotStateController___ctor(v24, 0LL);
  this->fields.stateController = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateController, (int32_t)v24, v25, v26);
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
  System_Collections_Generic_IEnumerable_T__o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_object__o *v14; // x20

  if ( (byte_49F8FC6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Component__TypeInfo, targets);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_Component___, v5);
    sub_1B640C8(&Method_BasicHelper_ForEach_Component___, v6);
    sub_1B640C8(&Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__, v7);
    sub_1B640C8(&BlankEarthPoint___c__DisplayClass87_0_TypeInfo, v8);
    byte_49F8FC6 = 1;
  }
  v9 = sub_1B64314(BlankEarthPoint___c__DisplayClass87_0_TypeInfo, targets, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_BYTE *)(v9 + 16) = value;
  v11 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_Component___);
  v14 = (System_Action_object__o *)sub_1B64314(System_Action_Component__TypeInfo, v12, v13);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)v14,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_Component___);
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
  int32_t v15; // w3
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
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x1
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9

  v2 = this;
  if ( (byte_49F8FBE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_AnimationState___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_AnimationState___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    this = (BlankEarthPoint_o *)sub_1B640C8(&UnityEngine_Vector3___TypeInfo, v8);
    byte_49F8FBE = 1;
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
        sub_1B6432C(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v10];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
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
    v13 = sub_1B64170(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.defaultLocalPosOffsetTargetObjects, v13, v14, v15);
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
    sub_1B64324(this);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v30 = System_Linq_Enumerable__ToArray_object_(
            v29,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v31 = Method_System_Array_Empty_AnimationState___;
    v32 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v32 )
    {
      sub_1BB6000(Method_System_Array_Empty_AnimationState___);
      v32 = v31[7];
    }
    v33 = *(_QWORD *)(v32 + 16);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1BB5FA4(v33);
    if ( !*(_DWORD *)(v33 + 224) )
      j_il2cpp_runtime_class_init_0(v33);
    v34 = *(_QWORD *)(v31[7] + 16LL);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1BB5FA4(v34);
    v30 = **(System_Object_array ***)(v34 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.animationStateArray, (int32_t)v30, v27, v28);
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
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (int32_t)finishCallback,
    (int32_t)method);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B64324(0LL);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F8FCA & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo, *(_QWORD *)&index);
    byte_49F8FCA = 1;
  }
  v7 = sub_1B64314(BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo, *(_QWORD *)&index, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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

  if ( (byte_49F8FCB & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_49F8FCB = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_Object_o *v10; // x20
  Il2CppObject *Instance; // x0
  bool IsExistCommand; // w20
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  BlankEarthSpotAddMaster_o *v15; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0
  struct BlankEarth_o *earthCore; // x8
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_49F8FC7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_49F8FC7 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v14 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  v15 = (BlankEarthSpotAddMaster_o *)Instance;
  Instance = (Il2CppObject *)BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                               v15,
                               1,
                               this->fields._spotId_k__BackingField,
                               v14,
                               0,
                               0LL);
    if ( PrioredAvailableEntity )
      return PrioredAvailableEntity->fields.targetId;
    return -1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
LABEL_24:
    sub_1B64324(Instance);
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v14,
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
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Component_o *earthCore; // x0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    sub_1B64324(0LL);
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v13, 0LL);
  v15 = v10 - Position.fields.x;
  v16 = v11 - Position.fields.y;
  v17 = v12 - Position.fields.z;
  vec->fields.x = v15;
  vec->fields.y = v16;
  vec->fields.z = v17;
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v14);
    byte_49F7114 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = sqrtf((float)(v17 * v17) + (float)((float)(v15 * v15) + (float)(v16 * v16)));
  if ( v18 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v15 / v18;
    y = v16 / v18;
    z = v17 / v18;
  }
  vec->fields.x = x;
  vec->fields.y = y;
  vec->fields.z = z;
  if ( !byte_49F9038 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
    byte_49F9038 = 1;
  }
  return (float)(z * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + (float)((float)(x * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x)
               + (float)(y * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.y));
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
  int v16; // s0
  UnityEngine_Object_o *uiRoot; // x21
  const MethodInfo *v20; // x1
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x22
  __int64 v24; // x1
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v26; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v28; // x27
  UnityEngine_Object_o *v29; // x21
  struct UnityEngine_Transform_array *v30; // x8
  UnityEngine_Transform_o *v31; // x21
  int32_t v32; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v35; // x22
  __int64 v36; // x25
  unsigned __int64 v37; // x9
  unsigned __int64 v38; // x26
  __int64 v39; // x8
  UnityEngine_Transform_o *v40; // x20
  float v41; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float v44; // s11
  float v45; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v47; // s10
  float v48; // s1
  struct UnityEngine_Vector3_array *v49; // x8
  float v50; // s12
  UnityEngine_Object_o *v51; // x21
  float v52; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v54; // x9
  float *v55; // x8
  UnityEngine_Object_o *v56; // x20
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v59; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v62; // s4
  float v63; // s2
  float v64; // s3
  float v65; // s2
  UnityEngine_Object_o *v66; // x20
  const MethodInfo *v67; // x2
  UnityEngine_Vector3_o v68; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8FBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F8FBF = 1;
  }
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v68.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v68.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v68, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49F7111 = 1;
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
        goto LABEL_120;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v14 )
        goto LABEL_120;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_68934036(v14, *(UnityEngine_Vector3_o *)&v16, 0LL));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v20);
    transform = (__int64)this->fields.uiRoot;
    if ( !transform )
      goto LABEL_120;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !this->fields.earthCore )
      goto LABEL_120;
    v21 = (UnityEngine_Transform_o *)transform;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7119 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
      byte_49F7119 = 1;
    }
    if ( !v21 )
      goto LABEL_120;
    UnityEngine_Transform__LookAt(v21, v23, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v26 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v28 = v26 - 4;
        if ( v26 - 4 >= (int)max_length )
          break;
        if ( v28 >= max_length )
          goto LABEL_121;
        v29 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v26);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
        if ( (transform & 1) == 0 )
        {
          v30 = this->fields.uiBillboardTransforms;
          if ( !v30 )
            goto LABEL_120;
          if ( v28 >= v30->max_length )
LABEL_121:
            sub_1B6432C(transform, v24);
          v31 = (UnityEngine_Transform_o *)*((_QWORD *)&v30->obj.klass + v26);
          if ( !byte_49F7111 )
          {
            transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
            byte_49F7111 = 1;
          }
          if ( !v31 )
            goto LABEL_120;
          UnityEngine_Transform__set_eulerAngles(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v26;
        if ( !uiBillboardTransforms )
          goto LABEL_120;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_120;
      v32 = 0;
      while ( v32 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v32,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
        if ( !transform )
          goto LABEL_120;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_120;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0LL) )
        {
          transform = (__int64)this->fields.listBillboardChildWidget;
          if ( !transform )
            goto LABEL_120;
          transform = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)transform,
                                 v32,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_120;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v32;
        if ( !transform )
          goto LABEL_120;
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
          v35 = 0LL;
          v36 = 4LL;
          while ( 1 )
          {
            v37 = offsetTargetObjects->max_length;
            v38 = v36 - 4;
            if ( v36 - 4 >= (int)v37 )
              break;
            if ( v38 >= v37 )
              goto LABEL_121;
            v39 = *((_QWORD *)&offsetTargetObjects->obj.klass + v36);
            if ( v39 )
            {
              v40 = *(UnityEngine_Transform_o **)(v39 + 16);
              if ( !v40 )
                goto LABEL_120;
              v41 = *(float *)(v39 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v39 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_120;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v44 = position.fields.x;
              v45 = position.fields.y;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_120;
                if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
                {
                  transform = (__int64)this->fields.pinObject;
                  if ( !transform )
                    goto LABEL_120;
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                  if ( !transform )
                    goto LABEL_120;
                  v71 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
                  v44 = v71.fields.x;
                  v45 = v71.fields.y;
                }
              }
              v72 = UnityEngine_Transform__get_position(v40, 0LL);
              v72.fields.y = (float)(v41 * y) + v45;
              v72.fields.x = v44;
              UnityEngine_Transform__set_position(v40, v72, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_120;
              if ( v38 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_121;
              v47 = defaultLocalPosOffsetTargetObjects->m_Items[v35].fields.y;
              *(UnityEngine_Vector3_o *)(&v48 - 1) = UnityEngine_Transform__get_localPosition(v40, 0LL);
              v49 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v49 )
                goto LABEL_120;
              if ( v38 >= v49->max_length )
                goto LABEL_121;
              v50 = v49->m_Items[v35 + 1].fields.x;
              v51 = (UnityEngine_Object_o *)this->fields.pinObject;
              v52 = v48;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_120;
                transform = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL);
                if ( (transform & 1) == 0 )
                {
                  notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                  if ( notDisplayPinTargetOffset )
                  {
                    v54 = this->fields.offsetTargetObjects;
                    if ( !v54 )
                      goto LABEL_120;
                    if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v54->max_length )
                    {
                      if ( v38 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                        goto LABEL_121;
                      v55 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v36);
                      if ( !v55 )
                        goto LABEL_120;
                      v47 = v47 + v55[6];
                      v52 = v52 + v55[7];
                      v50 = v50 + v55[8];
                    }
                  }
                }
              }
              v73.fields.x = v47;
              v73.fields.y = v52;
              v73.fields.z = v50;
              UnityEngine_Transform__set_localPosition(v40, v73, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v36;
            ++v35;
            if ( !offsetTargetObjects )
              goto LABEL_120;
          }
        }
      }
    }
  }
  if ( (isForward & ~this->fields.isForward) != 0 )
  {
    v56 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v57);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && x >= 0.0 && this->fields.isForward )
  {
    v66 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v67);
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
      v62 = this->fields.noDispSpriteDot;
    else
      v62 = this->fields.dispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v63 = this->fields.dispSpriteDot;
    else
      v63 = this->fields.noDispSpriteDot;
    if ( DotXYZ <= v62 )
      v64 = DotXYZ;
    else
      v64 = v62;
    if ( DotXYZ < v63 )
      v64 = v63;
    if ( transform )
    {
      v65 = (float)(v64 - v63) / (float)(v62 - v63);
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v59 = v65;
      else
        *(float *)&v59 = 1.0 - v65;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v59);
      return;
    }
LABEL_120:
    sub_1B64324(transform);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F8FC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BlankEarthPoint_OnClickSpot__, method);
    byte_49F8FC5 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B64324(0LL);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B64324(this);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B64324(this);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *earthCore; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_49F8FC4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F8FC4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
  }
  earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    earthCore = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = earthCore->fields.mEventRoot->klass;
  if ( !klass
    || (earthCore = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL
    || (TitleInfoControl__setBackBtnSprite(earthCore, 3, 0LL),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusEarthPoint((BlankEarth_o *)earthCore, this->fields._spotId_k__BackingField, v5),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_1B64324(earthCore);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_49F8FC8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_49F8FC8 = 1;
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
      || (UnityEngine_Animation__Play_68872828(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_1B64324(Item);
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
  __int64 bSpotInfo; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct UISprite_o *loopIconSprite; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct UILabel_o *lastTimeLabel; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *v29; // x20
  bool v30; // w20
  _BOOL8 v31; // x0
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *v33; // x20
  struct MapControl_SpotInfo_o *v34; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v36; // x20
  __int64 v37; // x1
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v39; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v41; // w20
  UILabel_o *v42; // x20
  UnityEngine_Object_o *v43; // x20
  struct MapControl_SpotInfo_o *v44; // x8
  int32_t questCount; // w20
  _BOOL8 v46; // x0
  Il2CppClass *v47; // x8
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F8FC1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Component___TypeInfo, isDisp);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_12156/*"SPOT_FREE_QUEST_LAST_TIME"*/, v12);
    byte_49F8FC1 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1B64170(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_74;
  nextSprite = this->fields.nextSprite;
  v18 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1B64204(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( !v18->max_length )
    goto LABEL_75;
  v18->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v18->m_Items, (int32_t)nextSprite, v15, v16);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1B64204(this->fields.loopIconSprite, v18->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_75;
  v18->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[1], (int32_t)loopIconSprite, v19, v20);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1B64204(this->fields.lastTimeLabel, v18->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_75;
  v18->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[2], (int32_t)lastTimeLabel, v22, v23);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1B64204(this->fields.noticeNumberComp, v18->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_76:
      v48 = sub_1B64348();
      sub_1B641F0(v48, 0LL);
    }
  }
  if ( v18->max_length <= 3 )
LABEL_75:
    sub_1B6432C(bSpotInfo, v14);
  v18->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[3], (int32_t)noticeNumberComp, v25, v26);
  BlankEarthPoint__ActivateEachComponent(0, v18, v28);
  if ( !isDisp )
    return;
  v29 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_74;
    v30 = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v50 = v49;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v31 )
        break;
      if ( !v50.fields._current )
        sub_1B64324(v31);
      klass = v50.fields._current[7].klass;
      if ( !klass )
        sub_1B64324(v31);
      v30 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, v30, 0LL);
  }
  v33 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v34 = this->fields.bSpotInfo;
    if ( !v34 )
      goto LABEL_74;
    freeQuestCount = v34->fields.freeQuestCount;
    v36 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9041 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
        byte_49F9041 = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v39 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v39->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v41 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_74;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_74;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v41, 0LL);
      v42 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v42 )
        goto LABEL_74;
      UILabel__set_text(v42, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v43 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v44 = this->fields.bSpotInfo;
    if ( v44 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v44->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v50 = v49;
        while ( 1 )
        {
          v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v50,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v46 )
            break;
          if ( !v50.fields._current )
            sub_1B64324(v46);
          v47 = v50.fields._current[7].klass;
          if ( !v47 )
            sub_1B64324(v46);
          questCount += LODWORD(v47->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v50,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, questCount, 0LL);
          if ( questCount )
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
LABEL_74:
    sub_1B64324(bSpotInfo);
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
    sub_1B64324(0LL);
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


void __fastcall BlankEarthPoint__SetEarthObj(
        BlankEarthPoint_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        BlankEarth_o *obj,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *nextSprite; // x23
  QuestTree_o *Instance; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UISprite_o *v22; // x23
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v34; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 v44; // x11
  Il2CppClass **v45; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v51; // s2
  float v52; // s0
  float v53; // s1
  float v54; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8FC0 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, spotEnt);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_20104/*"icon_spot_next"*/, v17);
    byte_49F8FC0 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v22 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v22, (System_String_o *)StringLiteral_20104/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._spotName_k__BackingField, (int32_t)name, v20, v21);
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.earthCore, (int32_t)obj, v25, v26);
  this->fields.earthCamera = camera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.earthCamera, (int32_t)camera, v27, v28);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bSpotInfo, (int32_t)SpotInfo, v30, v31);
  areaInfoList = this->fields.areaInfoList;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v34 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v34;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_41:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v63 = v62;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v36 )
      break;
    current = v63.fields._current;
    if ( !v63.fields._current )
      sub_1B64324(v36);
    klass = v63.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v41 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v41 )
        sub_1B64324(0LL);
      items = v41->fields._items;
      v43 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v41->fields._version;
      if ( !items )
        sub_1B64324(v41);
      v44 = v41->fields._size;
      if ( (unsigned int)v44 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + v44;
        v41->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)current, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v47);
    byte_49F7114 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v51 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v51 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v47);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v52 = static_fields->zeroVector.fields.x;
    v53 = static_fields->zeroVector.fields.y;
    v54 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v52 = x / v51;
    v53 = y / v51;
    v54 = z / v51;
  }
  v65.fields.x = -v52;
  v65.fields.y = -v53;
  v65.fields.z = -v54;
  v66 = UnityEngine_Quaternion__LookRotation_69066096(v65, 0LL);
  this->fields._FocusQua_k__BackingField = v66;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v66, 0LL);
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v56, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v57);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v59);
  BlankEarthPoint__UpdateDisp(this, 1, v60);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v61);
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
  int32_t v9; // w3
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F8FC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8FC9 = 1;
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
      UnityEngine_Object__Destroy_69127736(v7, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spotDispEffectObj, 0, v8, v9);
    }
    v10 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__49003980(
            v10,
            transform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v13, 0LL);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spotDispEffectObj, (int32_t)v13, v14, v15);
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
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49F8FC3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F8FC3 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v6 = this->fields.uiRoot;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B64324(0LL);
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
  const MethodInfo *v12; // x2
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

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
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
      byte_49F7111 = 1;
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
  v14.fields.z = *p_z;
  v14.fields.y = *p_y;
  v14.fields.x = static_fields->zeroVector.fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, v14, 0LL);
  if ( !v11 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_1B64324(0LL);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v11, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  bool activeSelf; // w0
  __int64 v6; // x1
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8FC2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8FC2 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v4 = this->fields.pinObject;
    if ( !v4 )
      sub_1B64324(0LL);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v4, 0LL);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      p_changedUiRootPosition = (struct UnityEngine_Vector3_StaticFields *)&this->fields.changedUiRootPosition;
      p_y = &this->fields.changedUiRootPosition.fields.y;
      p_z = &this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
        byte_49F7111 = 1;
      }
      p_changedUiRootPosition = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_changedUiRootPosition->zeroVector.fields.y;
      p_z = &p_changedUiRootPosition->zeroVector.fields.z;
    }
    v11.fields.y = *p_y;
    v11.fields.x = p_changedUiRootPosition->zeroVector.fields.x;
    v11.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(uiRoot, v11, 0LL);
  }
}


int32_t __fastcall BlankEarthPoint__get_AnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.animIndex;
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

  this->fields._spotName_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._spotName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *v3; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_49F8FCD & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8FCD = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)UnityEngine_Animation__get_Item(
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
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v3->fields.__2__current = 0LL;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B6406C(p__2__current, 0, v11, v12);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1B64324(this);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._animName_5__2, (int32_t)AnimName, v7, v8);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v3->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0LL);
      v3->fields._totalTime_5__3 = 0.0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__97_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint___c__DisplayClass87_0___ctor(
        BlankEarthPoint___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint___c__DisplayClass87_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass87_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass87_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BlankEarthPoint___c__DisplayClass87_0_o *)UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}