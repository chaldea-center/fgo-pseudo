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

  if ( (byte_4189558 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4189558 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4189559 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4189559 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  _BOOL8 IsOpen; // x0
  const MethodInfo *v6; // x1
  struct ClassBoardBaseEntity_o *v7; // x8
  int32_t id; // w19

  if ( (byte_418955C & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, method);
    byte_418955C = 1;
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
  v7 = this->fields._Entity_k__BackingField;
  if ( !v7 )
    sub_B2C434(IsOpen, v6);
  id = v7->fields.id;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, v6);
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
  if ( (byte_418955B & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, method);
    byte_418955B = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickCallback,
    (BlankEarth_QAARotateEarthResponse_o *)this,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
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
    sub_B2C434(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_50201580(v4, name, 0LL);
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
    sub_B2C434(classIconUi, method);
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
          v8 = sub_B2C460(this);
          sub_B2C400(v8, 0LL);
        }
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_B2C434(0LL, isActive);
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
  __int64 v17; // x1
  struct ClassBoardBaseEntity_o *Entity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct UnityEngine_AnimationState_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct UnityEngine_AnimationState_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *seriazlier; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v55; // x0
  __int64 v56; // x3
  IClassBoardResourceCatalog_c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x3
  IClassBoardResourceCatalog_c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  struct ClassBoardBaseEntity_o *v66; // x8
  AtlasManagerUnit_o *v67; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v69; // x0
  __int64 v70; // x3
  IClassBoardResourceCatalog_c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  const MethodInfo *v75; // x1
  int32_t v76; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418955A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_AnimationState___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v11);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_19453/*"img_class_{0}"*/, v14);
    sub_B2C35C(&StringLiteral_16984/*"btn_class"*/, v15);
    byte_418955A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Entity = (struct ClassBoardBaseEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              Master_WarQuestSelectionMaster,
                                              *(_DWORD *)&this->fields.isReleased,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Entity_k__BackingField,
    (System_Int32_array **)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v26 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                     v25,
                                                     (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v34 = (struct UnityEngine_AnimationState_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                 v33,
                                                 (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardReleaseAnimState,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.clickCallback = clickCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !resourceCatalog )
    goto LABEL_46;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v49;
      p_offset += 4;
      if ( v49 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v47);
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
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_19453/*"img_class_{0}"*/,
                                                                                    v55,
                                                                                    0LL);
  if ( !seriazlier )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v57 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v58 = 0LL;
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v58;
      v59 += 4;
      if ( v58 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_22:
    v60 = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v56);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v60)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v60 + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_16984/*"btn_class"*/,
    0LL);
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
    v65 = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v61);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v65)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v65 + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  v66 = this->fields._Entity_k__BackingField;
  if ( !v66 )
    goto LABEL_46;
  v67 = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.seriazlier;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v76 = v66->fields.iconId;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_19453/*"img_class_{0}"*/,
                                                                                    v69,
                                                                                    0LL);
  if ( !v67 )
    goto LABEL_46;
  AtlasManagerUnit__SetUI(v67, classIconUiDisabled, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v71 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v72 = 0LL;
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v73 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_39:
    v74 = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v70);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v74)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v74 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_16984/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v75),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           0LL)) == 0LL) )
  {
LABEL_46:
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
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
    sub_B2C434(IsShowActiveIcon, v4);
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
  sub_B2C2F8(
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
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v18; // x8
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x22
  Il2CppObject *v21; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2

  if ( (byte_4184EF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AnimationEvent___ctor__, animClip);
    sub_B2C35C(&System_Action_AnimationEvent__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_AnimationEvent___, v6);
    sub_B2C35C(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v7);
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_9204/*"MoveEnd"*/, v9);
    sub_B2C35C(&StringLiteral_9206/*"MoveStart"*/, v10);
    sub_B2C35C(&StringLiteral_13038/*"StartBgAnim"*/, v11);
    sub_B2C35C(&StringLiteral_14541/*"TransitionAnimStart"*/, v12);
    sub_B2C35C(&StringLiteral_6776/*"ForwardIconAnimStart"*/, v13);
    sub_B2C35C(&StringLiteral_13052/*"StartWhite"*/, v14);
    byte_4184EF1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_B2C2F8(&this->fields, animClip);
  if ( !animClip )
    sub_B2C434(v15, v16);
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v18 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v18 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AnimationEvent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__25_0,
      v21,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_AnimationEvent___ctor__);
    v22 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    v22->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_B2C2F8(&v22->__9__25_0, _9__25_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13052/*"StartWhite"*/,
                                                    0.0,
                                                    v23);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13038/*"StartBgAnim"*/,
                                                    0.0,
                                                    v24);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9206/*"MoveStart"*/,
                                                      0.0,
                                                      v25);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9204/*"MoveEnd"*/,
                                                    0.0,
                                                    v26);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6776/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v27);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14541/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v28);
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *v11; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  __int64 v13; // x1
  UnityEngine_AnimationEvent_array *events; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_4184EF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_AnimationEvent___, eventName);
    sub_B2C35C(&Method_System_Func_AnimationEvent__bool___ctor__, v7);
    sub_B2C35C(&System_Func_AnimationEvent__bool__TypeInfo, v8);
    sub_B2C35C(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v9);
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v10);
    byte_4184EF2 = 1;
  }
  v11 = (ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *)sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.eventName = eventName, sub_B2C2F8(&v11->fields, eventName),
                                           (animClip = this->fields.animClip) == 0LL) )
  {
    sub_B2C434(animClip, v13);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)events,
                                                                                                     (System_Func_T__bool__o *)v15,
                                                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_AnimationEvent___);
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
  Il2CppObject *v2; // x19
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4185591 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1);
    byte_4185591 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}