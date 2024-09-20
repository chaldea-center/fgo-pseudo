void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  __int64 v7; // d0
  float v8; // s1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  QAASpotStateController_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A57CAD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&QAASpotStateController_TypeInfo);
    byte_4A57CAD = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_BB45C0;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->zeroVector.fields.x;
  v8 = v6->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v7;
  this->fields.changedUiRootPosition.fields.z = v8;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.areaInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listBillboardChildWidget, (int32_t)v12, v13, v14);
  v15 = (QAASpotStateController_o *)sub_1B887FC(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v15, 0LL);
  this->fields.stateController = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.stateController, (int32_t)v15, v16, v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4A57CA7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Component__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_Component___);
    sub_1B885B0(&Method_BasicHelper_ForEach_Component___);
    sub_1B885B0(&Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__);
    sub_1B885B0(&BlankEarthPoint___c__DisplayClass101_0_TypeInfo);
    byte_4A57CA7 = 1;
  }
  v5 = sub_1B887FC(BlankEarthPoint___c__DisplayClass101_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_BYTE *)(v5 + 16) = value;
  v8 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)targets,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_Component___);
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_Component__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthPoint___c__DisplayClass101_0__ActivateEachComponent_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct BlankEarthPoint_OffsetTargetObject_array *v10; // x8
  __int64 v11; // x21
  unsigned __int64 v12; // x22
  unsigned __int64 v13; // x9
  BlankEarthPoint_OffsetTargetObject_o *v14; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v16; // s0
  int v17; // s1
  int v18; // s2
  _DWORD *v19; // x8
  UnityEngine_Object_o *anim; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Object_array *v24; // x1
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9

  v2 = this;
  if ( (byte_4A57C9F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_AnimationState___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__AddRange__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BlankEarthPoint_o *)sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    byte_4A57C9F = 1;
  }
  uiBillboardTransforms = v2->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v4 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
LABEL_45:
        sub_1B88814(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v4];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v4;
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
    v7 = sub_1B88658(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.defaultLocalPosOffsetTargetObjects, v7, v8, v9);
    v10 = v2->fields.offsetTargetObjects;
    if ( !v10 )
      goto LABEL_44;
    v11 = 0LL;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v10->max_length;
      if ( (__int64)v12 >= (int)v13 )
        break;
      if ( v12 >= v13 )
        goto LABEL_45;
      v14 = v10->m_Items[v12];
      if ( v14 )
      {
        this = (BlankEarthPoint_o *)v14->fields.targetObject;
        if ( !this )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_44;
        if ( v12 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_45;
        v19 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v11);
        v19[8] = v16;
        v19[9] = v17;
        v19[10] = v18;
        v10 = v2->fields.offsetTargetObjects;
      }
      ++v12;
      v11 += 12LL;
      if ( !v10 )
        goto LABEL_44;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_44:
    sub_1B8880C(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v24 = System_Linq_Enumerable__ToArray_object_(
            v23,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v25 = Method_System_Array_Empty_AnimationState___;
    v26 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v26 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_AnimationState___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BDA48C(v27);
    if ( !*(_DWORD *)(v27 + 224) )
      j_il2cpp_runtime_class_init_0(v27);
    v28 = *(_QWORD *)(v25[7] + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1BDA48C(v28);
    v24 = **(System_Object_array ***)(v28 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.animationStateArray, (int32_t)v24, v21, v22);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (int32_t)finishCallback,
    (int32_t)method);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B8880C(0LL, v6);
  QAASpotStateController__SetState(stateController, state, 0LL);
}


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

  if ( (byte_4A57CAB & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo);
    byte_4A57CAB = 1;
  }
  v7 = sub_1B887FC(BlankEarthPoint__CoPlayAnimUntilFinish_d__111_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall BlankEarthPoint__GetAnimName(
        BlankEarthPoint_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4A57CAC & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A57CAC = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v3; // x0
  __int64 v4; // x0
  UnityEngine_Object_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool IsExistCommand; // w20
  int32_t v9; // w20
  BlankEarthSpotAddMaster_o *v10; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0
  struct BlankEarth_o *earthCore; // x8
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_4A57CA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A57CA8 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v9 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  v10 = (BlankEarthSpotAddMaster_o *)Instance;
  Instance = (Il2CppObject *)BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                               v10,
                               1,
                               this->fields._spotId_k__BackingField,
                               v9,
                               0,
                               0LL);
    if ( PrioredAvailableEntity )
      return PrioredAvailableEntity->fields.targetId;
    return -1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
LABEL_24:
    sub_1B8880C(Instance, v7);
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v9,
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
  float v23; // s11
  float v24; // s12
  float v25; // s13
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float v29; // s0
  float v30; // s8
  float v31; // s9
  float v32; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v34; // s12
  float v35; // s13
  float v36; // s14
  float v37; // s2
  float v38; // s0
  float v39; // s1
  float v40; // s2
  struct UnityEngine_Vector3_StaticFields *v41; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

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
  v43 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  vec->fields.x = v15 - v43.fields.x;
  vec->fields.y = v16 - v43.fields.y;
  vec->fields.z = v17 - v43.fields.z;
  result = 1.0;
  if ( this->fields._spotOnType_k__BackingField == 1 )
    return result;
  earthCore = (UnityEngine_Component_o *)this->fields.earthCamera;
  if ( !earthCore )
LABEL_24:
    sub_1B8880C(earthCore, v6);
  v19 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  v44 = GameObjectExtensions__GetPosition(v19, 0LL);
  x = v44.fields.x;
  y = v44.fields.y;
  z = v44.fields.z;
  v45 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0LL);
  v23 = v45.fields.x;
  v24 = v45.fields.y;
  v25 = v45.fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  v26 = x - v23;
  v27 = y - v24;
  v28 = z - v25;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = sqrtf((float)(v28 * v28) + (float)((float)(v26 * v26) + (float)(v27 * v27)));
  if ( v29 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v30 = static_fields->zeroVector.fields.x;
    v31 = static_fields->zeroVector.fields.y;
    v32 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v30 = v26 / v29;
    v31 = v27 / v29;
    v32 = v28 / v29;
  }
  v34 = vec->fields.x;
  v35 = vec->fields.y;
  v36 = vec->fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v37 = sqrtf((float)(v36 * v36) + (float)((float)(v34 * v34) + (float)(v35 * v35)));
  if ( v37 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    v41 = UnityEngine_Vector3_TypeInfo->static_fields;
    v38 = v41->zeroVector.fields.x;
    v39 = v41->zeroVector.fields.y;
    v40 = v41->zeroVector.fields.z;
  }
  else
  {
    v38 = v34 / v37;
    v39 = v35 / v37;
    v40 = v36 / v37;
  }
  vec->fields.x = v38;
  vec->fields.y = v39;
  result = (float)(v32 * v40) + (float)((float)(v30 * v38) + (float)(v31 * v39));
  vec->fields.z = v40;
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXYZ; // s8
  _BOOL4 isForward; // w24
  UnityEngine_Object_o *earthCamera; // x21
  float x; // s9
  UnityEngine_Object_o *pointCol; // x21
  UnityEngine_Camera_o *v11; // x21
  __int64 transform; // x0
  __int64 v13; // x1
  int v14; // s0
  UnityEngine_Object_o *uiRoot; // x21
  const MethodInfo *v18; // x1
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x22
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v22; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x27
  UnityEngine_Object_o *v25; // x21
  struct UnityEngine_Transform_array *v26; // x8
  UnityEngine_Transform_o *v27; // x21
  int32_t v28; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v31; // x22
  __int64 v32; // x25
  unsigned __int64 v33; // x9
  unsigned __int64 v34; // x26
  __int64 v35; // x8
  UnityEngine_Transform_o *v36; // x20
  float v37; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float v40; // s11
  float v41; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v43; // s10
  float v44; // s1
  struct UnityEngine_Vector3_array *v45; // x8
  float v46; // s12
  UnityEngine_Object_o *v47; // x21
  float v48; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v50; // x9
  float *v51; // x8
  UnityEngine_Object_o *v52; // x20
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v55; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v58; // s4
  float v59; // s2
  float v60; // s3
  float v61; // s2
  UnityEngine_Object_o *v62; // x20
  const MethodInfo *v63; // x2
  UnityEngine_Vector3_o v64; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57CA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CA0 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v64.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v64.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v64, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
      v11 = this->fields.earthCamera;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_123;
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v11 )
        goto LABEL_123;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_69265680(v11, *(UnityEngine_Vector3_o *)&v14, 0LL));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v18);
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
      v19 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
      v20 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE9 )
      {
        transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE9 = 1;
      }
      if ( !v19 )
        goto LABEL_123;
      UnityEngine_Transform__LookAt(v19, v20, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    }
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v22 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v24 = v22 - 4;
        if ( v22 - 4 >= (int)max_length )
          break;
        if ( v24 >= max_length )
          goto LABEL_124;
        v25 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v22);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
        if ( (transform & 1) == 0 )
        {
          v26 = this->fields.uiBillboardTransforms;
          if ( !v26 )
            goto LABEL_123;
          if ( v24 >= v26->max_length )
LABEL_124:
            sub_1B88814(transform, v13);
          v27 = (UnityEngine_Transform_o *)*((_QWORD *)&v26->obj.klass + v22);
          if ( !byte_4A55CE1 )
          {
            transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v27 )
            goto LABEL_123;
          UnityEngine_Transform__set_eulerAngles(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v22;
        if ( !uiBillboardTransforms )
          goto LABEL_123;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_123;
      v28 = 0;
      while ( v28 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v28,
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
                                 v28,
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_123;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v28;
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
          v31 = 0LL;
          v32 = 4LL;
          while ( 1 )
          {
            v33 = offsetTargetObjects->max_length;
            v34 = v32 - 4;
            if ( v32 - 4 >= (int)v33 )
              break;
            if ( v34 >= v33 )
              goto LABEL_124;
            v35 = *((_QWORD *)&offsetTargetObjects->obj.klass + v32);
            if ( v35 )
            {
              v36 = *(UnityEngine_Transform_o **)(v35 + 16);
              if ( !v36 )
                goto LABEL_123;
              v37 = *(float *)(v35 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v35 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_123;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v40 = position.fields.x;
              v41 = position.fields.y;
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
                  v67 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
                  v40 = v67.fields.x;
                  v41 = v67.fields.y;
                }
              }
              v68 = UnityEngine_Transform__get_position(v36, 0LL);
              v68.fields.y = (float)(v37 * y) + v41;
              v68.fields.x = v40;
              UnityEngine_Transform__set_position(v36, v68, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_123;
              if ( v34 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_124;
              v43 = defaultLocalPosOffsetTargetObjects->m_Items[v31].fields.y;
              *(UnityEngine_Vector3_o *)(&v44 - 1) = UnityEngine_Transform__get_localPosition(v36, 0LL);
              v45 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v45 )
                goto LABEL_123;
              if ( v34 >= v45->max_length )
                goto LABEL_124;
              v46 = v45->m_Items[v31 + 1].fields.x;
              v47 = (UnityEngine_Object_o *)this->fields.pinObject;
              v48 = v44;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
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
                    v50 = this->fields.offsetTargetObjects;
                    if ( !v50 )
                      goto LABEL_123;
                    if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v50->max_length )
                    {
                      if ( v34 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                        goto LABEL_124;
                      v51 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v32);
                      if ( !v51 )
                        goto LABEL_123;
                      v43 = v43 + v51[6];
                      v48 = v48 + v51[7];
                      v46 = v46 + v51[8];
                    }
                  }
                }
              }
              v69.fields.x = v43;
              v69.fields.y = v48;
              v69.fields.z = v46;
              UnityEngine_Transform__set_localPosition(v36, v69, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v32;
            ++v31;
            if ( !offsetTargetObjects )
              goto LABEL_123;
          }
        }
      }
    }
  }
  if ( (isForward & ~this->fields.isForward) != 0 )
  {
    v52 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v53);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && x >= 0.0 && this->fields.isForward )
  {
    v62 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v63);
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
      v58 = this->fields.noDispSpriteDot;
    else
      v58 = this->fields.dispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v59 = this->fields.dispSpriteDot;
    else
      v59 = this->fields.noDispSpriteDot;
    if ( DotXYZ <= v58 )
      v60 = DotXYZ;
    else
      v60 = v58;
    if ( DotXYZ < v59 )
      v60 = v59;
    if ( transform )
    {
      v61 = (float)(v60 - v59) / (float)(v58 - v59);
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v55 = v61;
      else
        *(float *)&v55 = 1.0 - v61;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v55);
      return;
    }
LABEL_123:
    sub_1B8880C(transform, v13);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A57CA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BlankEarthPoint_OnClickSpot__);
    byte_4A57CA6 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B8880C(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B8880C(this, method);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1B8880C(this, method);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *earthCore; // x0
  ExUITexture_c *klass; // x8
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4A57CA5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57CA5 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    || (TitleInfoControl__setBackBtnSprite(earthCore, 3, 0LL),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusPoint(
          (BlankEarth_o *)earthCore,
          this->fields._spotId_k__BackingField,
          this->fields._spotOnType_k__BackingField,
          v5),
        (earthCore = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_1B8880C(earthCore, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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


void __fastcall BlankEarthPoint__SetAnimationToEnd(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4A57CA9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CA9 = 1;
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
      || (UnityEngine_Animation__Play_69204472(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_1B8880C(Item, v8);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
  }
}


void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 bSpotInfo; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct UISprite_o *loopIconSprite; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct UILabel_o *lastTimeLabel; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x20
  bool v22; // w20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *v26; // x20
  struct MapControl_SpotInfo_o *v27; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v29; // x20
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v31; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v33; // w20
  UILabel_o *v34; // x20
  UnityEngine_Object_o *v35; // x20
  struct MapControl_SpotInfo_o *v36; // x8
  int32_t questCount; // w20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppClass *v40; // x8
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57CA2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Component___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12211/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_4A57CA2 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1B88658(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_74;
  nextSprite = this->fields.nextSprite;
  v10 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1B886EC(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( !v10->max_length )
    goto LABEL_75;
  v10->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)nextSprite, v7, v8);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1B886EC(this->fields.loopIconSprite, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_75;
  v10->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[1], (int32_t)loopIconSprite, v11, v12);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1B886EC(this->fields.lastTimeLabel, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_76;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_75;
  v10->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[2], (int32_t)lastTimeLabel, v14, v15);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1B886EC(this->fields.noticeNumberComp, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_76:
      v41 = sub_1B88830();
      sub_1B886D8(v41, 0LL);
    }
  }
  if ( v10->max_length <= 3 )
LABEL_75:
    sub_1B88814(bSpotInfo, v6);
  v10->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[3], (int32_t)noticeNumberComp, v17, v18);
  BlankEarthPoint__ActivateEachComponent(0, v10, v20);
  if ( !isDisp )
    return;
  v21 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_74;
    v22 = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v23 )
        break;
      if ( !v43.fields._current )
        sub_1B8880C(v23, v24);
      klass = v43.fields._current[7].klass;
      if ( !klass )
        sub_1B8880C(v23, v24);
      v22 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, v22, 0LL);
  }
  v26 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v27 = this->fields.bSpotInfo;
    if ( !v27 )
      goto LABEL_74;
    freeQuestCount = v27->fields.freeQuestCount;
    v29 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57CE1 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57CE1 = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v33 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_74;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_74;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v33, 0LL);
      v34 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v34 )
        goto LABEL_74;
      UILabel__set_text(v34, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_74;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v35 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v36 = this->fields.bSpotInfo;
    if ( v36 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v36->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v43 = v42;
        while ( 1 )
        {
          v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v43,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v38 )
            break;
          if ( !v43.fields._current )
            sub_1B8880C(v38, v39);
          v40 = v43.fields._current[7].klass;
          if ( !v40 )
            sub_1B8880C(v38, v39);
          questCount += LODWORD(v40->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v43,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
    sub_1B8880C(bSpotInfo, v6);
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
    sub_1B8880C(0LL, isEnabled);
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
  UnityEngine_Object_o *nextSprite; // x24
  QuestTree_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UISprite_o *v16; // x24
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v30; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 v41; // x11
  Il2CppClass **v42; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v47; // s2
  float v48; // s0
  float v49; // s1
  float v50; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v52; // x0
  const MethodInfo *v53; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57CA1 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_20184/*"icon_spot_next"*/);
    byte_4A57CA1 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v16 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v16, (System_String_o *)StringLiteral_20184/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._spotName_k__BackingField, (int32_t)name, v14, v15);
  this->fields._spotOnType_k__BackingField = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.earthCore, (int32_t)obj, v19, v20);
  this->fields.earthCamera = camera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.earthCamera, (int32_t)camera, v21, v22);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bSpotInfo, (int32_t)SpotInfo, v24, v25);
  this->fields.earthCoreRoot = coreRoot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.earthCoreRoot, (int32_t)coreRoot, v26, v27);
  areaInfoList = this->fields.areaInfoList;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v30 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0LL);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_41:
    sub_1B8880C(Instance, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v32 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1B8880C(v32, v33);
    klass = v59.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v38 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v38 )
        sub_1B8880C(0LL, v33);
      items = v38->fields._items;
      v40 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v38->fields._version;
      if ( !items )
        sub_1B8880C(v38, v33);
      v41 = v38->fields._size;
      if ( (unsigned int)v41 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + v41;
        v38->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)current, v34, v35);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v47 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v47 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v48 = static_fields->zeroVector.fields.x;
    v49 = static_fields->zeroVector.fields.y;
    v50 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v48 = x / v47;
    v49 = y / v47;
    v50 = z / v47;
  }
  v61.fields.x = -v48;
  v61.fields.y = -v49;
  v61.fields.z = -v50;
  v62 = UnityEngine_Quaternion__LookRotation_69397740(v61, 0LL);
  this->fields._FocusQua_k__BackingField = v62;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v62, 0LL);
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v52, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v53);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v55);
  BlankEarthPoint__UpdateDisp(this, 1, v56);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v57);
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
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A57CAA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CAA = 1;
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
      v6 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v6, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotDispEffectObj, 0, v7, v8);
    }
    v9 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B8880C(0LL, v11);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__49297800(
            v9,
            transform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v13, 0LL);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotDispEffectObj, (int32_t)v13, v14, v15);
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


void __fastcall BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A57CA4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CA4 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1B8880C(0LL, method);
  QAASpotStateController__Update(stateController, 0LL);
}


void __fastcall BlankEarthPoint__UpdateDisp(BlankEarthPoint_o *this, bool isForce, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  int32_t dispType; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  bool v10; // w21
  __int64 v11; // x1
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
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    v10 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
    p_z = &static_fields->zeroVector.fields.z;
    goto LABEL_10;
  }
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&this->fields._selfScale_k__BackingField;
  p_y = &this->fields._selfScale_k__BackingField.fields.y;
  p_z = &this->fields._selfScale_k__BackingField.fields.z;
  v10 = 1;
LABEL_10:
  v14.fields.z = *p_z;
  v14.fields.y = *p_y;
  v14.fields.x = static_fields->zeroVector.fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, v14, 0LL);
  if ( !v10 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_1B8880C(0LL, v11);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57CA3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CA3 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v5 = this->fields.pinObject;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
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

  this->fields._spotName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._spotName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4A57CAE & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__111_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CAE = 1;
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
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B88554(p__2__current, 0, v11, v12);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1B8880C(this, method);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields._animName_5__2, (int32_t)AnimName, v7, v8);
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
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0LL);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__111_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}