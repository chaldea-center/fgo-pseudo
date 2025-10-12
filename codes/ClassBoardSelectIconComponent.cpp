void ClassBoardSelectIconComponent___ctor(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4C3B5AE & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C3B5AE = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0,
               (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0);
  }
  else
  {
    return 0;
  }
}


System_String_o *ClassBoardSelectIconComponent__GetClassBoardExitAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4C3B5AF & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C3B5AF = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0,
               (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0);
  }
  else
  {
    return 0;
  }
}


System_String_o *ClassBoardSelectIconComponent__GetClassBoardReleaseAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)this->fields.classBoardReleaseAnimState;
  if ( result )
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)result, 0);
  return result;
}


bool ClassBoardSelectIconComponent__IsActive(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0

  return this->fields.isReleased
      && (Entity_k__BackingField = this->fields._Entity_k__BackingField) != 0
      && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0);
}


bool ClassBoardSelectIconComponent__IsOpen(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0

  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( Entity_k__BackingField )
    LOBYTE(Entity_k__BackingField) = ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0);
  return (char)Entity_k__BackingField;
}


bool ClassBoardSelectIconComponent__IsReleaseEffectPlayable(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  int32_t condType; // w8
  _BOOL8 IsOpen; // x0
  const MethodInfo *v6; // x1
  struct ClassBoardBaseEntity_o *v7; // x8
  int32_t id; // w19

  if ( (byte_4C3B5B2 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    byte_4C3B5B2 = 1;
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
  IsOpen = ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0);
  if ( !IsOpen )
  {
LABEL_11:
    LOBYTE(condType) = 0;
    return condType & 1;
  }
  v7 = this->fields._Entity_k__BackingField;
  if ( !v7 )
    sub_1C32E7C(IsOpen);
  id = v7->fields.id;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  LOBYTE(condType) = !ClassBoardUtility__IsPlayedReleaseEffect(id, v6);
  return condType & 1;
}


bool ClassBoardSelectIconComponent__IsShowActiveIcon(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  bool isReleased; // w8
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  const MethodInfo *v5; // x1

  isReleased = this->fields.isReleased;
  if ( isReleased )
  {
    Entity_k__BackingField = this->fields._Entity_k__BackingField;
    return Entity_k__BackingField
        && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0)
        && !ClassBoardSelectIconComponent__IsReleaseEffectPlayable(this, v5);
  }
  return isReleased;
}


void ClassBoardSelectIconComponent__OnClickItem(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B5B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
    byte_4C3B5B1 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickCallback,
    (Il2CppObject *)this,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
}


void ClassBoardSelectIconComponent__PlayTransitionAnim(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *transitionAnim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  transitionAnim = this->fields.transitionAnim;
  if ( !transitionAnim
    || (UnityEngine_Animation__Rewind(transitionAnim, 0), (v4 = this->fields.transitionAnim) == 0)
    || (transitionAnim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0)) == 0 )
  {
    sub_1C32E7C(transitionAnim);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0);
  UnityEngine_Animation__Play_70968924(v4, name, 0);
}


void ClassBoardSelectIconComponent__PrepareStartReleaseEffect(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classIconUi; // x0

  classIconUi = (UnityEngine_Component_o *)this->fields.classIconUi;
  if ( !classIconUi
    || (classIconUi = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classIconUi, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classIconUi, 1, 0),
        (classIconUi = (UnityEngine_Component_o *)this->fields.classButtonUi) == 0)
    || (classIconUi = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classIconUi, 0)) == 0 )
  {
    sub_1C32E7C(classIconUi);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classIconUi, 1, 0);
}


void ClassBoardSelectIconComponent__SetParticlesActivate(
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
      v5 = 0;
      v6 = isActive;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C32E84(this);
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_1C32E7C(0);
        UnityEngine_GameObject__SetActive(v7, v6, 0);
        max_length = activeParticles->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void ClassBoardSelectIconComponent__Setup(
        ClassBoardSelectIconComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_ClassBoardSelectIconComponent__o *clickCallback,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *lookup; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v34; // x0
  IClassBoardResourceCatalog_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  IClassBoardResourceCatalog_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  struct ClassBoardBaseEntity_o *v49; // x8
  AtlasManagerUnit_o *v50; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v52; // x0
  IClassBoardResourceCatalog_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3B5B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1C32C20(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_20342/*"img_class_{0}"*/);
    sub_1C32C20(&StringLiteral_17469/*"btn_class"*/);
    byte_4C3B5B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.baseId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = (struct ClassBoardBaseEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Entity_k__BackingField, (int32_t)Entity, v9, v10);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationStateArray, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v16 = System_Linq_Enumerable__FirstOrDefault_object_(
          v15,
          (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = (struct UnityEngine_AnimationState_o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classBoardReleaseAnimState, (int32_t)v16, v17, v18);
  this->fields.clickCallback = clickCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickCallback, (int32_t)clickCallback, v19, v20);
  if ( !resourceCatalog )
    goto LABEL_45;
  klass = resourceCatalog->klass;
  v22 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_12;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v24 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v24)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v24 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Entity_k__BackingField = this->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_45;
  lookup = (AtlasManagerUnit_o *)Master_object[2].fields._lookup;
  classIconUi = this->fields.classIconUi;
  iconId = Entity_k__BackingField->fields.iconId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v25, v26, v27, v28, v29, v30);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20342/*"img_class_{0}"*/,
                                                                  v34,
                                                                  0);
  if ( !lookup )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(lookup, classIconUi, (System_String_o *)Master_object, 0);
  v35 = resourceCatalog->klass;
  v36 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v37 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_21;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_21:
    v38 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v38)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v38 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup;
  if ( !Master_object )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17469/*"btn_class"*/,
    0);
  v39 = resourceCatalog->klass;
  v40 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v41 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_29;
    }
    v42 = (__int64)&v39->vtable[*v41];
  }
  else
  {
LABEL_29:
    v42 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v42)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v42 + 8));
  if ( !Master_object )
    goto LABEL_45;
  v49 = this->fields._Entity_k__BackingField;
  if ( !v49 )
    goto LABEL_45;
  v50 = (AtlasManagerUnit_o *)Master_object[2].fields._lookup;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v58 = v49->fields.iconId;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v43, v44, v45, v46, v47, v48);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20342/*"img_class_{0}"*/,
                                                                  v52,
                                                                  0);
  if ( !v50 )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(v50, classIconUiDisabled, (System_String_o *)Master_object, 0);
  v53 = resourceCatalog->klass;
  v54 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v55 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_38;
    }
    v56 = (__int64)&v53->vtable[*v55];
  }
  else
  {
LABEL_38:
    v56 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v56)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v56 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup) == 0
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_object,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17469/*"btn_class"*/,
          0),
        ClassBoardSelectIconComponent__UpdateUI(this, v57),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0) )
  {
LABEL_45:
    sub_1C32E7C(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
}


void ClassBoardSelectIconComponent__UpdateActiveParticles(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  bool IsShowActiveIcon; // w1
  const MethodInfo *v4; // x2

  IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(this, method);
  ClassBoardSelectIconComponent__SetParticlesActivate(this, IsShowActiveIcon, v4);
}


void ClassBoardSelectIconComponent__UpdateIcon(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsShowActiveIcon; // x0
  char v4; // w20
  char v5; // w20

  IsShowActiveIcon = (UnityEngine_GameObject_o *)ClassBoardSelectIconComponent__IsShowActiveIcon(this, method);
  if ( !this->fields.classIconUi )
    goto LABEL_10;
  v4 = (char)IsShowActiveIcon;
  IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.classIconUi, 0);
  if ( !IsShowActiveIcon )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(IsShowActiveIcon, v4 & 1, 0);
  IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classButtonUi;
  if ( !IsShowActiveIcon )
    goto LABEL_10;
  IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0);
  if ( !IsShowActiveIcon
    || (UnityEngine_GameObject__SetActive(IsShowActiveIcon, v4 & 1, 0),
        (IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classIconUiDisabled) == 0)
    || (IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0)) == 0
    || (v5 = v4 ^ 1,
        UnityEngine_GameObject__SetActive(IsShowActiveIcon, v5 & 1, 0),
        (IsShowActiveIcon = (UnityEngine_GameObject_o *)this->fields.classButtonUiDisabled) == 0)
    || (IsShowActiveIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsShowActiveIcon, 0)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(IsShowActiveIcon);
  }
  UnityEngine_GameObject__SetActive(IsShowActiveIcon, v5 & 1, 0);
}


void ClassBoardSelectIconComponent__UpdateUI(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  bool IsShowActiveIcon; // w1
  const MethodInfo *v5; // x2

  ClassBoardSelectIconComponent__UpdateIcon(this, method);
  IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(this, v3);
  ClassBoardSelectIconComponent__SetParticlesActivate(this, IsShowActiveIcon, v5);
}


void ClassBoardSelectIconComponent__Validation(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Animation_o *ClassBoardSelectIconComponent__get_Anim(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.anim;
}


int32_t ClassBoardSelectIconComponent__get_BaseId(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.baseId;
}


UnityEngine_Animation_o *ClassBoardSelectIconComponent__get_BoardReleaseAnimnimation(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardReleaseAnim;
}


ClassBoardBaseEntity_o *ClassBoardSelectIconComponent__get_Entity(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


UnityEngine_GameObject_o *ClassBoardSelectIconComponent__get_IconRootObj(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.iconRootObj;
}


bool ClassBoardSelectIconComponent__get_IsReleased(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.isReleased;
}


UISprite_o *ClassBoardSelectIconComponent__get_UiSprite(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classIconUi;
}


void ClassBoardSelectIconComponent__set_Entity(
        ClassBoardSelectIconComponent_o *this,
        ClassBoardBaseEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Entity_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Entity_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ClassBoardSelectIconComponent_AnimClipInfo___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        UnityEngine_AnimationClip_o *animClip,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x21
  System_Action_object__o *_9__25_0; // x22
  Il2CppObject *v12; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4C3B5B3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_AnimationEvent__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1C32C20(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__);
    sub_1C32C20(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    sub_1C32C20(&StringLiteral_9171/*"MoveEnd"*/);
    sub_1C32C20(&StringLiteral_9173/*"MoveStart"*/);
    sub_1C32C20(&StringLiteral_13049/*"StartBgAnim"*/);
    sub_1C32C20(&StringLiteral_14573/*"TransitionAnimStart"*/);
    sub_1C32C20(&StringLiteral_6846/*"ForwardIconAnimStart"*/);
    sub_1C32C20(&StringLiteral_13064/*"StartWhite"*/);
    byte_4C3B5B3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animClip = animClip;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)animClip, v5, v6);
  if ( !animClip )
    sub_1C32E7C(v7);
  events = UnityEngine_AnimationClip__get_events(animClip, 0);
  v9 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v9 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  _9__25_0 = (System_Action_object__o *)v9->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(
      _9__25_0,
      v12,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      0);
    static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v14, v15);
  }
  BasicHelper__ForEach_object_(
    v10,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v10, 0);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13064/*"StartWhite"*/,
                                                    0.0,
                                                    v16);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13049/*"StartBgAnim"*/,
                                                    0.0,
                                                    v17);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9173/*"MoveStart"*/,
                                                      0.0,
                                                      v18);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9171/*"MoveEnd"*/,
                                                    0.0,
                                                    v19);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6846/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v20);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14573/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v21);
}


float ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *events; // x19
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *object; // x0

  if ( (byte_4C3B5B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C32C20(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C32C20(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__);
    sub_1C32C20(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
    byte_4C3B5B4 = 1;
  }
  v7 = sub_1C32E6C(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = eventName,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)eventName, v9, v10),
        (animClip = this->fields.animClip) == 0) )
  {
    sub_1C32E7C(animClip);
  }
  events = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0);
  v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    0);
  object = BasicHelper__Find_object_(
             events,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_AnimationEvent___);
  if ( object )
    return UnityEngine_AnimationEvent__get_time((UnityEngine_AnimationEvent_o *)object, 0);
  else
    return defaultValue;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_BgAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._BgAnimStartTime_k__BackingField;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_FadeInStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FadeInStartTime_k__BackingField;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_ForwardIconAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardIconAnimStartTime_k__BackingField;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_IconMoveEndTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IconMoveEndTime_k__BackingField;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_IconMoveStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IconMoveStartTime_k__BackingField;
}


float ClassBoardSelectIconComponent_AnimClipInfo__get_TransitionAnimStartTime(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionAnimStartTime_k__BackingField;
}


void ClassBoardSelectIconComponent_AnimClipInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B5B5 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    byte_4C3B5B5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ClassBoardSelectIconComponent_AnimClipInfo___c___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectIconComponent_AnimClipInfo___c____ctor_b__25_0(
        ClassBoardSelectIconComponent_AnimClipInfo___c_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  if ( !ev )
    sub_1C32E7C(this);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0);
}


void ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___ctor(
        ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0___GetEventTimeByFunctionName_b__0(
        ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_1C32E7C(this);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0);
  return System_String__op_Equality(functionName, this->fields.eventName, 0);
}