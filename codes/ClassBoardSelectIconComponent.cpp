void __fastcall ClassBoardSelectIconComponent___ctor(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42EA86D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, (_DWORD)method, v2, v3);
    byte_42EA86D = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42EA86E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, (_DWORD)method, v2, v3);
    byte_42EA86E = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  int32_t condType; // w8
  _BOOL8 IsOpen; // x0
  const MethodInfo *v8; // x1
  struct ClassBoardBaseEntity_o *v9; // x8
  int32_t id; // w19

  if ( (byte_42EA871 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA871 = 1;
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
  IsOpen = ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL);
  if ( !IsOpen )
  {
LABEL_13:
    LOBYTE(condType) = 0;
    return condType & 1;
  }
  v9 = this->fields._Entity_k__BackingField;
  if ( !v9 )
    sub_B5D69C(IsOpen, v8);
  id = v9->fields.id;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, v8);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA870 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, (_DWORD)method, v2, v3);
    byte_42EA870 = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickCallback,
    (BlankEarth_QAARotateEarthResponse_o *)this,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
}


void __fastcall ClassBoardSelectIconComponent__PlayTransitionAnim(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *transitionAnim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  transitionAnim = this->fields.transitionAnim;
  if ( !transitionAnim
    || (UnityEngine_Animation__Rewind(transitionAnim, 0LL), (v4 = this->fields.transitionAnim) == 0LL)
    || (transitionAnim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B5D69C(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_51249124(v4, name, 0LL);
}


void __fastcall ClassBoardSelectIconComponent__PrepareStartReleaseEffect(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classIconUi; // x0

  classIconUi = (UnityEngine_Component_o *)this->fields.classIconUi;
  if ( !classIconUi
    || (classIconUi = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classIconUi, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classIconUi, 1, 0LL),
        (classIconUi = (UnityEngine_Component_o *)this->fields.classButtonUi) == 0LL)
    || (classIconUi = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classIconUi, 0LL)) == 0LL )
  {
    sub_B5D69C(classIconUi, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classIconUi, 1, 0LL);
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
  __int64 v8; // x0

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
          v8 = sub_B5D6C8(this);
          sub_B5D668(v8, 0LL);
        }
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_B5D69C(0LL, isActive);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  struct ClassBoardBaseEntity_o *Entity; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  struct UnityEngine_AnimationState_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  struct UnityEngine_AnimationState_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v67; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *seriazlier; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v73; // x0
  __int64 v74; // x3
  IClassBoardResourceCatalog_c *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  __int64 v79; // x3
  IClassBoardResourceCatalog_c *v80; // x8
  unsigned __int64 v81; // x10
  int32_t *v82; // x11
  __int64 v83; // x0
  struct ClassBoardBaseEntity_o *v84; // x8
  AtlasManagerUnit_o *v85; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v87; // x0
  __int64 v88; // x3
  IClassBoardResourceCatalog_c *v89; // x8
  unsigned __int64 v90; // x10
  int32_t *v91; // x11
  __int64 v92; // x0
  const MethodInfo *v93; // x1
  int32_t v94; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA86F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ClassBoardBaseMaster___,
      (_DWORD)resourceCatalog,
      (_DWORD)clickCallback,
      method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v19, v20, v21);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&int_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19698/*"img_class_{0}"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17193/*"btn_class"*/, v31, v32, v33);
    byte_42EA86F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Entity = (struct ClassBoardBaseEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              Master_WarQuestSelectionMaster,
                                              *(_DWORD *)&this->fields.isReleased,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Entity_k__BackingField,
    (System_Int32_array **)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v44 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                     v43,
                                                     (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v52 = (struct UnityEngine_AnimationState_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                 v51,
                                                 (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardReleaseAnimState,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.clickCallback = clickCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !resourceCatalog )
    goto LABEL_46;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v67;
      p_offset += 4;
      if ( v67 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v65);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(p_method + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_46;
  seriazlier = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.seriazlier;
  classIconUi = this->fields.classIconUi;
  iconId = Entity_k__BackingField->fields.iconId;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_19698/*"img_class_{0}"*/,
                                                                                    v73,
                                                                                    0LL);
  if ( !seriazlier )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v75 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v77 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v78 = (__int64)&v75->vtable[*v77].method;
  }
  else
  {
LABEL_22:
    v78 = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v74);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v78)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v78 + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17193/*"btn_class"*/,
    0LL);
  v80 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v81 = 0LL;
    v82 = &v80->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v82 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v81;
      v82 += 4;
      if ( v81 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v83 = (__int64)&v80->vtable[*v82].method;
  }
  else
  {
LABEL_30:
    v83 = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v79);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v83)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v83 + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  v84 = this->fields._Entity_k__BackingField;
  if ( !v84 )
    goto LABEL_46;
  v85 = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.seriazlier;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v94 = v84->fields.iconId;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_19698/*"img_class_{0}"*/,
                                                                                    v87,
                                                                                    0LL);
  if ( !v85 )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(v85, classIconUiDisabled, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v89 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v90 = 0LL;
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v91 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v90;
      v91 += 4;
      if ( v90 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v92 = (__int64)&v89->vtable[*v91].method;
  }
  else
  {
LABEL_39:
    v92 = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v88);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v92)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v92 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17193/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v93),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           0LL)) == 0LL) )
  {
LABEL_46:
    sub_B5D69C(Master_WarQuestSelectionMaster, v35);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
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
  UnityEngine_GameObject_o *IsShowActiveIcon; // x0
  __int64 v4; // x1
  char v5; // w20
  char v6; // w20

  IsShowActiveIcon = (UnityEngine_GameObject_o *)ClassBoardSelectIconComponent__IsShowActiveIcon(this, method);
  if ( !this->fields.classIconUi )
    goto LABEL_10;
  v5 = (char)IsShowActiveIcon;
  IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.classIconUi, 0LL);
  if ( !IsShowActiveIcon )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(IsShowActiveIcon, v5 & 1, 0LL);
  IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classButtonUi;
  if ( !IsShowActiveIcon )
    goto LABEL_10;
  IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0LL);
  if ( !IsShowActiveIcon
    || (UnityEngine_GameObject__SetActive(IsShowActiveIcon, v5 & 1, 0LL),
        (IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classIconUiDisabled) == 0LL)
    || (IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0LL)) == 0LL
    || (v6 = v5 ^ 1,
        UnityEngine_GameObject__SetActive(IsShowActiveIcon, v6 & 1, 0LL),
        (IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classButtonUiDisabled) == 0LL)
    || (IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(IsShowActiveIcon, v4);
  }
  UnityEngine_GameObject__SetActive(IsShowActiveIcon, v6 & 1, 0LL);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v39; // x8
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x22
  Il2CppObject *v42; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *v43; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2

  if ( (byte_42E5E87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AnimationEvent___ctor__, (_DWORD)animClip, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AnimationEvent__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_AnimationEvent___, v9, v10, v11);
    sub_B5D5C4(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v12, v13, v14);
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9298/*"MoveEnd"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_9300/*"MoveStart"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_13194/*"StartBgAnim"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_14698/*"TransitionAnimStart"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_6858/*"ForwardIconAnimStart"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_13208/*"StartWhite"*/, v33, v34, v35);
    byte_42E5E87 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_B5D560(&this->fields);
  if ( !animClip )
    sub_B5D69C(v36, v37);
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v39 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v39 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AnimationEvent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__25_0,
      v42,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      (const MethodInfo_258B320 *)Method_System_Action_AnimationEvent___ctor__);
    v43 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    v43->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_B5D560(&v43->__9__25_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13208/*"StartWhite"*/,
                                                    0.0,
                                                    v44);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13194/*"StartBgAnim"*/,
                                                    0.0,
                                                    v45);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9300/*"MoveStart"*/,
                                                      0.0,
                                                      v46);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9298/*"MoveEnd"*/,
                                                    0.0,
                                                    v47);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6858/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v48);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14698/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v49);
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *v20; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  __int64 v22; // x1
  UnityEngine_AnimationEvent_array *events; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_42E5E88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_AnimationEvent___, (_DWORD)eventName, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Func_AnimationEvent__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_AnimationEvent__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v17, v18, v19);
    byte_42E5E88 = 1;
  }
  v20 = (ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *)sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___ctor(v20, 0LL);
  if ( !v20 || (v20->fields.eventName = eventName, sub_B5D560(&v20->fields), (animClip = this->fields.animClip) == 0LL) )
    sub_B5D69C(animClip, v22);
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v20,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)events,
                                                                                                     (System_Func_T__bool__o *)v24,
                                                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_AnimationEvent___);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E6030 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1, v2, v3);
    byte_42E6030 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}