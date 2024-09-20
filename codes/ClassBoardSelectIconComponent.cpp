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

  if ( (byte_4A5E647 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A5E647 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4A5E648 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A5E648 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v6; // x1
  struct ClassBoardBaseEntity_o *v7; // x8
  int32_t id; // w19

  if ( (byte_4A5E64B & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    byte_4A5E64B = 1;
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
    sub_1B8880C(IsOpen, v6);
  id = v7->fields.id;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, 0LL);
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
  if ( (byte_4A5E64A & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
    byte_4A5E64A = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickCallback,
    (Il2CppObject *)this,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
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
    sub_1B8880C(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_69204472(v4, name, 0LL);
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
    sub_1B8880C(classIconUi, method);
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
          sub_1B88814(this, isActive);
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_1B8880C(0LL, isActive);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *seriazlier; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v32; // x0
  IClassBoardResourceCatalog_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  IClassBoardResourceCatalog_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct ClassBoardBaseEntity_o *v44; // x8
  AtlasManagerUnit_o *v45; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v47; // x0
  IClassBoardResourceCatalog_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x1
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E649 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_20274/*"img_class_{0}"*/);
    sub_1B885B0(&StringLiteral_17502/*"btn_class"*/);
    byte_4A5E649 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.baseId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = (struct ClassBoardBaseEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Entity_k__BackingField, (int32_t)Entity, v10, v11);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationStateArray, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v17 = System_Linq_Enumerable__FirstOrDefault_object_(
          v16,
          (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = (struct UnityEngine_AnimationState_o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.classBoardReleaseAnimState, (int32_t)v17, v18, v19);
  this->fields.clickCallback = clickCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallback, (int32_t)clickCallback, v20, v21);
  if ( !resourceCatalog )
    goto LABEL_45;
  klass = resourceCatalog->klass;
  v23 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(p_method + 8));
  if ( !Master_object )
    goto LABEL_45;
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_45;
  seriazlier = (AtlasManagerUnit_o *)Master_object[1].fields.seriazlier;
  classIconUi = this->fields.classIconUi;
  iconId = Entity_k__BackingField->fields.iconId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v26, v27, v28);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20274/*"img_class_{0}"*/,
                                                                  v32,
                                                                  0LL);
  if ( !seriazlier )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_object, 0LL);
  v33 = resourceCatalog->klass;
  v34 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v35 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_21;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_21:
    v36 = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v36)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v36 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier;
  if ( !Master_object )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17502/*"btn_class"*/,
    0LL);
  v37 = resourceCatalog->klass;
  v38 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v39 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v40)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v40 + 8));
  if ( !Master_object )
    goto LABEL_45;
  v44 = this->fields._Entity_k__BackingField;
  if ( !v44 )
    goto LABEL_45;
  v45 = (AtlasManagerUnit_o *)Master_object[1].fields.seriazlier;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v53 = v44->fields.iconId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v41, v42, v43);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20274/*"img_class_{0}"*/,
                                                                  v47,
                                                                  0LL);
  if ( !v45 )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(v45, classIconUiDisabled, (System_String_o *)Master_object, 0LL);
  v48 = resourceCatalog->klass;
  v49 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_38;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_38:
    v51 = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v51)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v51 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_object,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17502/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v52),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL) )
  {
LABEL_45:
    sub_1B8880C(Master_object, v8);
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
    sub_1B8880C(IsShowActiveIcon, v4);
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
  int32_t v3; // w3

  this->fields._Entity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Entity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardSelectIconComponent_AnimClipInfo___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        UnityEngine_AnimationClip_o *animClip,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x0
  __int64 v8; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_T__o *v11; // x21
  System_Action_object__o *_9__25_0; // x22
  Il2CppObject *v13; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4A5E64C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AnimationEvent__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1B885B0(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__);
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    sub_1B885B0(&StringLiteral_9142/*"MoveEnd"*/);
    sub_1B885B0(&StringLiteral_9144/*"MoveStart"*/);
    sub_1B885B0(&StringLiteral_12951/*"StartBgAnim"*/);
    sub_1B885B0(&StringLiteral_14551/*"TransitionAnimStart"*/);
    sub_1B885B0(&StringLiteral_6812/*"ForwardIconAnimStart"*/);
    sub_1B885B0(&StringLiteral_12967/*"StartWhite"*/);
    byte_4A5E64C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)animClip, v5, v6);
  if ( !animClip )
    sub_1B8880C(v7, v8);
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v10 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v10 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  _9__25_0 = (System_Action_object__o *)v10->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_1B887FC(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(
      _9__25_0,
      v13,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      0LL);
    static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v15, v16);
  }
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v11, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12967/*"StartWhite"*/,
                                                    0.0,
                                                    v17);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_12951/*"StartBgAnim"*/,
                                                    0.0,
                                                    v18);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9144/*"MoveStart"*/,
                                                      0.0,
                                                      v19);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9142/*"MoveEnd"*/,
                                                    0.0,
                                                    v20);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6812/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v21);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14551/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v22);
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Object_array *events; // x19
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *object; // x0

  if ( (byte_4A5E64D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1B885B0(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__);
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
    byte_4A5E64D = 1;
  }
  v7 = sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = eventName,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)eventName, v10, v11),
        (animClip = this->fields.animClip) == 0LL) )
  {
    sub_1B8880C(animClip, v9);
  }
  events = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             events,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_AnimationEvent___);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E64E & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    byte_4A5E64E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}