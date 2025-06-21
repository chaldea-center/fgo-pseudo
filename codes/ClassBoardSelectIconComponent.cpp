void __fastcall ClassBoardSelectIconComponent___ctor(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4B1FEC7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4B1FEC7 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_300911C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0LL);
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
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4B1FEC8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4B1FEC8 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_300911C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0LL);
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

  return this->fields.isReleased
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

  if ( (byte_4B1FECB & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    byte_4B1FECB = 1;
  }
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_11;
  condType = Entity_k__BackingField->fields.condType;
  if ( !condType )
    return condType & 1;
  LOBYTE(condType) = this->fields.isReleased;
  if ( !(_BYTE)condType )
    return condType & 1;
  IsOpen = ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL);
  if ( !IsOpen )
  {
LABEL_11:
    LOBYTE(condType) = 0;
    return condType & 1;
  }
  v7 = this->fields._Entity_k__BackingField;
  if ( !v7 )
    sub_1BCB254(IsOpen, v6);
  id = v7->fields.id;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, v6);
  return condType & 1;
}


bool __fastcall ClassBoardSelectIconComponent__IsShowActiveIcon(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  bool isReleased; // w8
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  const MethodInfo *v5; // x1

  isReleased = this->fields.isReleased;
  if ( isReleased )
  {
    Entity_k__BackingField = this->fields._Entity_k__BackingField;
    return Entity_k__BackingField
        && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL)
        && !ClassBoardSelectIconComponent__IsReleaseEffectPlayable(this, v5);
  }
  return isReleased;
}


void __fastcall ClassBoardSelectIconComponent__OnClickItem(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1FECA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, method);
    byte_4B1FECA = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickCallback,
    (Il2CppObject *)this,
    (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
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
    sub_1BCB254(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_69881360(v4, name, 0LL);
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
    sub_1BCB254(classIconUi, method);
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
          sub_1BCB25C(this, isActive, method);
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_1BCB254(0LL, isActive);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *lookup; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v41; // x0
  IClassBoardResourceCatalog_c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  IClassBoardResourceCatalog_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  struct ClassBoardBaseEntity_o *v53; // x8
  AtlasManagerUnit_o *v54; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v56; // x0
  IClassBoardResourceCatalog_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  const MethodInfo *v61; // x1
  int32_t v62; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1FEC9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_AnimationState___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v11);
    sub_1BCAFF8(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_1BCAFF8(&int_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_20163/*"img_class_{0}"*/, v14);
    sub_1BCAFF8(&StringLiteral_17330/*"btn_class"*/, v15);
    byte_4B1FEC9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.baseId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = (struct ClassBoardBaseEntity_o *)Entity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Entity_k__BackingField, (int32_t)Entity, v19, v20);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animationStateArray, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v26 = System_Linq_Enumerable__FirstOrDefault_object_(
          v25,
          (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = (struct UnityEngine_AnimationState_o *)v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.classBoardReleaseAnimState, (int32_t)v26, v27, v28);
  this->fields.clickCallback = clickCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.clickCallback, (int32_t)clickCallback, v29, v30);
  if ( !resourceCatalog )
    goto LABEL_45;
  klass = resourceCatalog->klass;
  v32 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1B560(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(p_method + 8));
  if ( !Master_object )
    goto LABEL_45;
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_45;
  lookup = (AtlasManagerUnit_o *)Master_object[2].fields._lookup;
  classIconUi = this->fields.classIconUi;
  iconId = Entity_k__BackingField->fields.iconId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v35, v36, v37);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20163/*"img_class_{0}"*/,
                                                                  v41,
                                                                  0LL);
  if ( !lookup )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(lookup, classIconUi, (System_String_o *)Master_object, 0LL);
  v42 = resourceCatalog->klass;
  v43 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v44 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_21;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_21:
    v45 = sub_1C1B560(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v45)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v45 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup;
  if ( !Master_object )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17330/*"btn_class"*/,
    0LL);
  v46 = resourceCatalog->klass;
  v47 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v48 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_1C1B560(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v49)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v49 + 8));
  if ( !Master_object )
    goto LABEL_45;
  v53 = this->fields._Entity_k__BackingField;
  if ( !v53 )
    goto LABEL_45;
  v54 = (AtlasManagerUnit_o *)Master_object[2].fields._lookup;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v62 = v53->fields.iconId;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v50, v51, v52);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20163/*"img_class_{0}"*/,
                                                                  v56,
                                                                  0LL);
  if ( !v54 )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(v54, classIconUiDisabled, (System_String_o *)Master_object, 0LL);
  v57 = resourceCatalog->klass;
  v58 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_38;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_38:
    v60 = sub_1C1B560(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v60)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v60 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_object,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17330/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v61),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL) )
  {
LABEL_45:
    sub_1BCB254(Master_object, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
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
    sub_1BCB254(IsShowActiveIcon, v4);
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


int32_t __fastcall ClassBoardSelectIconComponent__get_BaseId(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
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
  return this->fields.isReleased;
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
  const MethodInfo *v3; // x3

  this->fields._Entity_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Entity_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x21
  System_Action_object__o *_9__25_0; // x22
  Il2CppObject *v22; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2

  if ( (byte_4B1FECC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AnimationEvent__TypeInfo, animClip);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_AnimationEvent___, v5);
    sub_1BCAFF8(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v6);
    sub_1BCAFF8(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_9101/*"MoveEnd"*/, v8);
    sub_1BCAFF8(&StringLiteral_9103/*"MoveStart"*/, v9);
    sub_1BCAFF8(&StringLiteral_12934/*"StartBgAnim"*/, v10);
    sub_1BCAFF8(&StringLiteral_14453/*"TransitionAnimStart"*/, v11);
    sub_1BCAFF8(&StringLiteral_6794/*"ForwardIconAnimStart"*/, v12);
    sub_1BCAFF8(&StringLiteral_12949/*"StartWhite"*/, v13);
    byte_4B1FECC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)animClip, v14, v15);
  if ( !animClip )
    sub_1BCB254(v16, v17);
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v19 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v19 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  _9__25_0 = (System_Action_object__o *)v19->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_1BCB244(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(
      _9__25_0,
      v22,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      0LL);
    static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v20, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12949/*"StartWhite"*/,
                                                    0.0,
                                                    v26);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12934/*"StartBgAnim"*/,
                                                    0.0,
                                                    v27);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9103/*"MoveStart"*/,
                                                      0.0,
                                                      v28);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9101/*"MoveEnd"*/,
                                                    0.0,
                                                    v29);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6794/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v30);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14453/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v31);
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
  __int64 v10; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Object_array *events; // x19
  System_Func_object__bool__o *v16; // x20
  Il2CppObject *object; // x0

  if ( (byte_4B1FECD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Find_AnimationEvent___, eventName);
    sub_1BCAFF8(&System_Func_AnimationEvent__bool__TypeInfo, v7);
    sub_1BCAFF8(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v8);
    sub_1BCAFF8(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v9);
    byte_4B1FECD = 1;
  }
  v10 = sub_1BCB244(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = eventName,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)eventName, v13, v14),
        (animClip = this->fields.animClip) == 0LL) )
  {
    sub_1BCB254(animClip, v12);
  }
  events = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v16 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             events,
             (System_Func_T__bool__o *)v16,
             (const MethodInfo_3004AE8 *)Method_BasicHelper_Find_AnimationEvent___);
  if ( object )
    return UnityEngine_AnimationEvent__get_time((UnityEngine_AnimationEvent_o *)object, 0LL);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1FECE & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1);
    byte_4B1FECE = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}