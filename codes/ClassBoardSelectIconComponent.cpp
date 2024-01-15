void __fastcall ClassBoardSelectIconComponent___ctor(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_40FB9D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_40FB9D2 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v4, 0LL);
  }
  else
  {
    return 0LL;
  }
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardExitAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_40FB9D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_40FB9D3 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v4, 0LL);
  }
  else
  {
    return 0LL;
  }
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardReleaseAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)this->fields.classBoardReleaseAnimState;
  if ( result )
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)result, 0LL);
  return result;
}


bool __fastcall ClassBoardSelectIconComponent__IsActive(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0

  return *(&this->fields.isReleased + 4)
      && (Entity_k__BackingField = this->fields._Entity_k__BackingField) != 0LL
      && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL);
}


bool __fastcall ClassBoardSelectIconComponent__IsOpen(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0

  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( Entity_k__BackingField )
    LOBYTE(Entity_k__BackingField) = ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL);
  return (char)Entity_k__BackingField;
}


bool __fastcall ClassBoardSelectIconComponent__IsReleaseEffectPlayable(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  int32_t condType; // w8
  const MethodInfo *v5; // x1
  struct ClassBoardBaseEntity_o *v6; // x8
  int32_t id; // w19

  if ( (byte_40FB9D6 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, method);
    byte_40FB9D6 = 1;
  }
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_13;
  condType = Entity_k__BackingField->fields.condType;
  if ( !condType )
    return condType & 1;
  LOBYTE(condType) = 0;
  if ( !*(&this->fields.isReleased + 4) )
    return condType & 1;
  if ( !ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL) )
  {
LABEL_13:
    LOBYTE(condType) = 0;
    return condType & 1;
  }
  v6 = this->fields._Entity_k__BackingField;
  if ( !v6 )
    sub_B170D4();
  id = v6->fields.id;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, v5);
  return condType & 1;
}


bool __fastcall ClassBoardSelectIconComponent__IsShowActiveIcon(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  bool v2; // w8
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  const MethodInfo *v5; // x1

  v2 = *(&this->fields.isReleased + 4);
  if ( v2 )
  {
    Entity_k__BackingField = this->fields._Entity_k__BackingField;
    return Entity_k__BackingField
        && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL)
        && !ClassBoardSelectIconComponent__IsReleaseEffectPlayable(this, v5);
  }
  return v2;
}


void __fastcall ClassBoardSelectIconComponent__OnClickItem(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, method);
    byte_40FB9D5 = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickCallback,
    (BlankEarth_QAARotateEarthResponse_o *)this,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
}


void __fastcall ClassBoardSelectIconComponent__PlayTransitionAnim(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *transitionAnim; // x0
  UnityEngine_Animation_o *v4; // x19
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x1

  transitionAnim = this->fields.transitionAnim;
  if ( !transitionAnim
    || (UnityEngine_Animation__Rewind(transitionAnim, 0LL), (v4 = this->fields.transitionAnim) == 0LL)
    || (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  name = UnityEngine_Object__get_name(clip, 0LL);
  UnityEngine_Animation__Play_49744236(v4, name, 0LL);
}


void __fastcall ClassBoardSelectIconComponent__PrepareStartReleaseEffect(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classIconUi; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *classButtonUi; // x0
  UnityEngine_GameObject_o *v6; // x0

  classIconUi = (UnityEngine_Component_o *)this->fields.classIconUi;
  if ( !classIconUi
    || (gameObject = UnityEngine_Component__get_gameObject(classIconUi, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (classButtonUi = (UnityEngine_Component_o *)this->fields.classButtonUi) == 0LL)
    || (v6 = UnityEngine_Component__get_gameObject(classButtonUi, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSelectIconComponent__SetParticlesActivate(
        ClassBoardSelectIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *activeParticles; // x20
  int max_length; // w8
  __int64 v5; // x21
  bool v6; // w19
  UnityEngine_GameObject_o *v7; // x0

  activeParticles = this->fields.activeParticles;
  if ( activeParticles )
  {
    max_length = activeParticles->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0LL;
      v6 = isActive;
      do
      {
        if ( (unsigned int)v5 >= max_length )
        {
          sub_B17100(this, isActive, method);
          sub_B170A0();
        }
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(v7, v6, 0LL);
        max_length = activeParticles->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void __fastcall ClassBoardSelectIconComponent__Setup(
        ClassBoardSelectIconComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_ClassBoardSelectIconComponent__o *clickCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ClassBoardBaseEntity_o *Entity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  struct UnityEngine_AnimationState_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  struct UnityEngine_AnimationState_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v50; // x0
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *v52; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  IClassBoardResourceCatalog_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  AtlasManagerUnit_o *v61; // x0
  IClassBoardResourceCatalog_c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  struct ClassBoardBaseEntity_o *v67; // x8
  AtlasManagerUnit_o *v68; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  IClassBoardResourceCatalog_c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x0
  AtlasManagerUnit_o *v77; // x0
  const MethodInfo *v78; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v80; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB9D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_AnimationState___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v11);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_19379/*"img_class_{0}"*/, v14);
    sub_B16FFC(&StringLiteral_16918/*"btn_class"*/, v15);
    byte_40FB9D4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Entity = (struct ClassBoardBaseEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              Master_WarQuestSelectionMaster,
                                              *(_DWORD *)&this->fields.isReleased,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Entity_k__BackingField,
    (System_Int32_array **)Entity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v25 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                     v24,
                                                     (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v33 = (struct UnityEngine_AnimationState_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                 v32,
                                                 (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardReleaseAnimState,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.clickCallback = clickCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !resourceCatalog )
    goto LABEL_46;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v50 = (*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v50 )
    goto LABEL_46;
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_46;
  v52 = *(AtlasManagerUnit_o **)(v50 + 120);
  classIconUi = this->fields.classIconUi;
  iconId = Entity_k__BackingField->fields.iconId;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v55 = System_String__Format((System_String_o *)StringLiteral_19379/*"img_class_{0}"*/, v54, 0LL);
  if ( !v52 )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(v52, classIconUi, v55, 0LL);
  v56 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v58 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_22:
    v59 = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v60 = (*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v59)(resourceCatalog, *(_QWORD *)(v59 + 8));
  if ( !v60 )
    goto LABEL_46;
  v61 = *(AtlasManagerUnit_o **)(v60 + 120);
  if ( !v61 )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(v61, this->fields.classButtonUi, (System_String_o *)StringLiteral_16918/*"btn_class"*/, 0LL);
  v62 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v64 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_30:
    v65 = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v66 = (*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v65)(resourceCatalog, *(_QWORD *)(v65 + 8));
  if ( !v66 )
    goto LABEL_46;
  v67 = this->fields._Entity_k__BackingField;
  if ( !v67 )
    goto LABEL_46;
  v68 = *(AtlasManagerUnit_o **)(v66 + 120);
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v80 = v67->fields.iconId;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  v71 = System_String__Format((System_String_o *)StringLiteral_19379/*"img_class_{0}"*/, v70, 0LL);
  if ( !v68 )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(v68, classIconUiDisabled, v71, 0LL);
  v72 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v73 = 0LL;
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v74 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v75 = (__int64)&v72->vtable[*v74].method;
  }
  else
  {
LABEL_39:
    v75 = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v76 = (*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v75)(resourceCatalog, *(_QWORD *)(v75 + 8));
  if ( !v76
    || (v77 = *(AtlasManagerUnit_o **)(v76 + 120)) == 0LL
    || (AtlasManagerUnit__SetUI(v77, this->fields.classButtonUiDisabled, (System_String_o *)StringLiteral_16918/*"btn_class"*/, 0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v78),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_46:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall ClassBoardSelectIconComponent__UpdateActiveParticles(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  bool IsShowActiveIcon; // w1
  const MethodInfo *v4; // x2

  IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(this, method);
  ClassBoardSelectIconComponent__SetParticlesActivate(this, IsShowActiveIcon, v4);
}


void __fastcall ClassBoardSelectIconComponent__UpdateIcon(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  bool IsShowActiveIcon; // w0
  bool v4; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *classButtonUi; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Component_o *classIconUiDisabled; // x0
  UnityEngine_GameObject_o *v9; // x0
  bool v10; // w20
  UnityEngine_Component_o *classButtonUiDisabled; // x0
  UnityEngine_GameObject_o *v12; // x0

  IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(this, method);
  if ( !this->fields.classIconUi )
    goto LABEL_10;
  v4 = IsShowActiveIcon;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.classIconUi, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, v4, 0LL);
  classButtonUi = (UnityEngine_Component_o *)this->fields.classButtonUi;
  if ( !classButtonUi )
    goto LABEL_10;
  v7 = UnityEngine_Component__get_gameObject(classButtonUi, 0LL);
  if ( !v7
    || (UnityEngine_GameObject__SetActive(v7, v4, 0LL),
        (classIconUiDisabled = (UnityEngine_Component_o *)this->fields.classIconUiDisabled) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject(classIconUiDisabled, 0LL)) == 0LL
    || (v10 = !v4,
        UnityEngine_GameObject__SetActive(v9, v10, 0LL),
        (classButtonUiDisabled = (UnityEngine_Component_o *)this->fields.classButtonUiDisabled) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(classButtonUiDisabled, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, v10, 0LL);
}


void __fastcall ClassBoardSelectIconComponent__UpdateUI(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  bool IsShowActiveIcon; // w1
  const MethodInfo *v5; // x2

  ClassBoardSelectIconComponent__UpdateIcon(this, method);
  IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(this, v3);
  ClassBoardSelectIconComponent__SetParticlesActivate(this, IsShowActiveIcon, v5);
}


void __fastcall ClassBoardSelectIconComponent__Validation(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_Animation_o *__fastcall ClassBoardSelectIconComponent__get_Anim(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.anim;
}


UnityEngine_Animation_o *__fastcall ClassBoardSelectIconComponent__get_BoardReleaseAnimnimation(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardReleaseAnim;
}


ClassBoardBaseEntity_o *__fastcall ClassBoardSelectIconComponent__get_Entity(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ClassBoardSelectIconComponent__get_IconRootObj(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.iconRootObj;
}


bool __fastcall ClassBoardSelectIconComponent__get_IsReleased(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return *(&this->fields.isReleased + 4);
}


UISprite_o *__fastcall ClassBoardSelectIconComponent__get_UiSprite(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classIconUi;
}


void __fastcall ClassBoardSelectIconComponent__set_Entity(
        ClassBoardSelectIconComponent_o *this,
        ClassBoardBaseEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Entity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Entity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        UnityEngine_AnimationClip_o *animClip,
        const MethodInfo *method)
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v26; // x8
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x22
  Il2CppObject *v29; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2

  if ( (byte_40F70E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AnimationEvent___ctor__, animClip);
    sub_B16FFC(&System_Action_AnimationEvent__TypeInfo, v5);
    sub_B16FFC(&Method_BasicHelper_ForEach_AnimationEvent___, v6);
    sub_B16FFC(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v7);
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_9174/*"MoveEnd"*/, v9);
    sub_B16FFC(&StringLiteral_9176/*"MoveStart"*/, v10);
    sub_B16FFC(&StringLiteral_12982/*"StartBgAnim"*/, v11);
    sub_B16FFC(&StringLiteral_14481/*"TransitionAnimStart"*/, v12);
    sub_B16FFC(&StringLiteral_6748/*"ForwardIconAnimStart"*/, v13);
    sub_B16FFC(&StringLiteral_12996/*"StartWhite"*/, v14);
    byte_40F70E9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)animClip,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !animClip )
    sub_B170D4();
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v26 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v26 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_AnimationEvent__TypeInfo,
                                                                                      v21,
                                                                                      v22,
                                                                                      v23,
                                                                                      v24);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__25_0,
      v29,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_AnimationEvent___ctor__);
    v30 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    v30->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12996/*"StartWhite"*/,
                                                    0.0,
                                                    v37);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12982/*"StartBgAnim"*/,
                                                    0.0,
                                                    v38);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9176/*"MoveStart"*/,
                                                      0.0,
                                                      v39);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9174/*"MoveEnd"*/,
                                                    0.0,
                                                    v40);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6748/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v41);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14481/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v42);
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_AnimationClip_o *animClip; // x0
  UnityEngine_AnimationEvent_array *events; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_40F70EA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_AnimationEvent___, eventName);
    sub_B16FFC(&Method_System_Func_AnimationEvent__bool___ctor__, v9);
    sub_B16FFC(&System_Func_AnimationEvent__bool__TypeInfo, v10);
    sub_B16FFC(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v11);
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v12);
    byte_40F70EA = 1;
  }
  v13 = sub_B170CC(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, eventName, method, v4, v5);
  ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___ctor(
    (ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *)v13,
    0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = eventName,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)eventName,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (animClip = this->fields.animClip) == 0LL) )
  {
    sub_B170D4();
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AnimationEvent__bool__TypeInfo,
                                                                             v22,
                                                                             v23,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)events,
                                                                                                     (System_Func_T__bool__o *)v26,
                                                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_AnimationEvent___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return UnityEngine_AnimationEvent__get_time(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 0LL);
  else
    return defaultValue;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_BgAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._BgAnimStartTime_k__BackingField;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_FadeInStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FadeInStartTime_k__BackingField;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_ForwardIconAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardIconAnimStartTime_k__BackingField;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_IconMoveEndTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IconMoveEndTime_k__BackingField;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_IconMoveStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IconMoveStartTime_k__BackingField;
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__get_TransitionAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionAnimStartTime_k__BackingField;
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F78CB & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1);
    byte_40F78CB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___c___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___c____ctor_b__25_0(
        ClassBoardSelectIconComponent_AnimClipInfo___c_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  if ( !ev )
    sub_B170D4();
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___GetEventTimeByFunctionName_b__0(
        ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_B170D4();
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}