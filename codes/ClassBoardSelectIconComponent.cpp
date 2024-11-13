void __fastcall ClassBoardSelectIconComponent___ctor(ClassBoardSelectIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
        ClassBoardSelectIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4B19775 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, method, v2);
    byte_4B19775 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v5 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v5, 0LL);
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
  __int64 v2; // x2
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4B19776 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, method, v2);
    byte_4B19776 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v5 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v5, 0LL);
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
  __int64 v2; // x2
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  int32_t condType; // w8
  _BOOL8 IsOpen; // x0
  __int64 v7; // x1
  struct ClassBoardBaseEntity_o *v8; // x8
  int32_t id; // w19

  if ( (byte_4B19779 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    byte_4B19779 = 1;
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
  v8 = this->fields._Entity_k__BackingField;
  if ( !v8 )
    sub_1BCAA3C(IsOpen, v7);
  id = v8->fields.id;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v7);
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
  __int64 v2; // x2

  if ( (byte_4B19778 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, method, v2);
    byte_4B19778 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickCallback,
    (Il2CppObject *)this,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
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
    sub_1BCAA3C(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_69899248(v4, name, 0LL);
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
    sub_1BCAA3C(classIconUi, method);
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
          sub_1BCAA44(this, isActive);
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_1BCAA3C(0LL, isActive);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v57; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *seriazlier; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v63; // x0
  IClassBoardResourceCatalog_c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  IClassBoardResourceCatalog_c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  struct ClassBoardBaseEntity_o *v72; // x8
  AtlasManagerUnit_o *v73; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v75; // x0
  IClassBoardResourceCatalog_c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  const MethodInfo *v80; // x1
  int32_t v81; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19777 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog, clickCallback);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_AnimationState___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v15, v16);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_20489/*"img_class_{0}"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17675/*"btn_class"*/, v23, v24);
    byte_4B19777 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resourceCatalog);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.baseId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = (struct ClassBoardBaseEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Entity_k__BackingField,
    (int64_t)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          v34,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v35;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationStateArray,
    (int64_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v43 = System_Linq_Enumerable__FirstOrDefault_object_(
          v42,
          (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = (struct UnityEngine_AnimationState_o *)v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classBoardReleaseAnimState,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.clickCallback = clickCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !resourceCatalog )
    goto LABEL_45;
  klass = resourceCatalog->klass;
  v57 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v57;
      p_offset += 4;
      if ( !v57 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20489/*"img_class_{0}"*/,
                                                                  v63,
                                                                  0LL);
  if ( !seriazlier )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_object, 0LL);
  v64 = resourceCatalog->klass;
  v65 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v66 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_21;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_21:
    v67 = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v67)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v67 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier;
  if ( !Master_object )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17675/*"btn_class"*/,
    0LL);
  v68 = resourceCatalog->klass;
  v69 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v70 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_29;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_29:
    v71 = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v71)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v71 + 8));
  if ( !Master_object )
    goto LABEL_45;
  v72 = this->fields._Entity_k__BackingField;
  if ( !v72 )
    goto LABEL_45;
  v73 = (AtlasManagerUnit_o *)Master_object[1].fields.seriazlier;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v81 = v72->fields.iconId;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20489/*"img_class_{0}"*/,
                                                                  v75,
                                                                  0LL);
  if ( !v73 )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(v73, classIconUiDisabled, (System_String_o *)Master_object, 0LL);
  v76 = resourceCatalog->klass;
  v77 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v78 = &v76->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v78 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_38;
    }
    v79 = (__int64)&v76->vtable[*v78].method;
  }
  else
  {
LABEL_38:
    v79 = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v79)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v79 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_object,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17675/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v80),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL) )
  {
LABEL_45:
    sub_1BCAA3C(Master_object, v26);
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
    sub_1BCAA3C(IsShowActiveIcon, v4);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Entity_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Entity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_T__o *v36; // x21
  System_Action_object__o *_9__25_0; // x22
  Il2CppObject *v38; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2

  if ( (byte_4B1977A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AnimationEvent__TypeInfo, animClip, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_AnimationEvent___, v5, v6);
    sub_1BCA7E0(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v7, v8);
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_9272/*"MoveEnd"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9274/*"MoveStart"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13111/*"StartBgAnim"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_14716/*"TransitionAnimStart"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6935/*"ForwardIconAnimStart"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_13127/*"StartWhite"*/, v21, v22);
    byte_4B1977A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)animClip, v23, v24, v25, v26, v27, v28);
  if ( !animClip )
    sub_1BCAA3C(v29, v30);
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v35 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v32);
    v35 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  _9__25_0 = (System_Action_object__o *)v35->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AnimationEvent__TypeInfo, v32, v33, v34);
    System_Action_object____ctor(
      _9__25_0,
      v38,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      0LL);
    static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  BasicHelper__ForEach_object_(
    v36,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v36, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13127/*"StartWhite"*/,
                                                    0.0,
                                                    v46);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13111/*"StartBgAnim"*/,
                                                    0.0,
                                                    v47);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9274/*"MoveStart"*/,
                                                      0.0,
                                                      v48);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9272/*"MoveEnd"*/,
                                                    0.0,
                                                    v49);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6935/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v50);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14716/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v51);
}


float __fastcall ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
        ClassBoardSelectIconComponent_AnimClipInfo_o *this,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  UnityEngine_AnimationClip_o *animClip; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *events; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Func_object__bool__o *v27; // x20
  Il2CppObject *object; // x0

  if ( (byte_4B1977B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_AnimationEvent___, eventName, method);
    sub_1BCA7E0(&System_Func_AnimationEvent__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v10,
      v11);
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v12, v13);
    byte_4B1977B = 1;
  }
  v14 = sub_1BCAA2C(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, eventName, method, v4);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = eventName,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)eventName, v17, v18, v19, v20, v21, v22),
        (animClip = this->fields.animClip) == 0LL) )
  {
    sub_1BCAA3C(animClip, v16);
  }
  events = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v27 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AnimationEvent__bool__TypeInfo, v24, v25, v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             events,
             (System_Func_T__bool__o *)v27,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_AnimationEvent___);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1977C & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1, v2);
    byte_4B1977C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}