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

  if ( (byte_4B6A1F2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4B6A1F2 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4B6A1F3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4B6A1F3 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4B6A1F6 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    byte_4B6A1F6 = 1;
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
    sub_1BE4D28(IsOpen, v6);
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
  if ( (byte_4B6A1F5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ActionExtensions_Call_ClassBoardSelectIconComponent___, method);
    byte_4B6A1F5 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickCallback,
    (Il2CppObject *)this,
    (const MethodInfo_2EAB91C *)Method_ActionExtensions_Call_ClassBoardSelectIconComponent___);
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
    sub_1BE4D28(transitionAnim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transitionAnim, 0LL);
  UnityEngine_Animation__Play_70197004(v4, name, 0LL);
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
    sub_1BE4D28(classIconUi, method);
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
          sub_1BE4D30(this, isActive);
        v7 = activeParticles->m_Items[v5];
        if ( !v7 )
          sub_1BE4D28(0LL, isActive);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8
  AtlasManagerUnit_o *seriazlier; // x21
  UISprite_o *classIconUi; // x22
  Il2CppObject *v57; // x0
  IClassBoardResourceCatalog_c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  IClassBoardResourceCatalog_c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct ClassBoardBaseEntity_o *v69; // x8
  AtlasManagerUnit_o *v70; // x21
  UISprite_o *classIconUiDisabled; // x22
  Il2CppObject *v72; // x0
  IClassBoardResourceCatalog_c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  int32_t v78; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B6A1F4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_AnimationState___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v11);
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_1BE4ACC(&int_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_20559/*"img_class_{0}"*/, v14);
    sub_1BE4ACC(&StringLiteral_17722/*"btn_class"*/, v15);
    byte_4B6A1F4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.baseId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  this->fields._Entity_k__BackingField = (struct ClassBoardBaseEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._Entity_k__BackingField,
    (int64_t)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields._Entity_k__BackingField )
    return;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v26 = System_Linq_Enumerable__ToArray_object_(
          v25,
          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v26;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.animationStateArray,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.boardReleaseAnim,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v34 = System_Linq_Enumerable__FirstOrDefault_object_(
          v33,
          (const MethodInfo_2F7B9A0 *)Method_System_Linq_Enumerable_FirstOrDefault_AnimationState___);
  this->fields.classBoardReleaseAnimState = (struct UnityEngine_AnimationState_o *)v34;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.classBoardReleaseAnimState,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.clickCallback = clickCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !resourceCatalog )
    goto LABEL_45;
  klass = resourceCatalog->klass;
  v48 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C36AAC(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v51, v52, v53);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20559/*"img_class_{0}"*/,
                                                                  v57,
                                                                  0LL);
  if ( !seriazlier )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_object, 0LL);
  v58 = resourceCatalog->klass;
  v59 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v60 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_21;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_21:
    v61 = sub_1C36AAC(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v61)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v61 + 8));
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier;
  if ( !Master_object )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    (System_String_o *)StringLiteral_17722/*"btn_class"*/,
    0LL);
  v62 = resourceCatalog->klass;
  v63 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v64 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_29;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_29:
    v65 = sub_1C36AAC(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v65)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v65 + 8));
  if ( !Master_object )
    goto LABEL_45;
  v69 = this->fields._Entity_k__BackingField;
  if ( !v69 )
    goto LABEL_45;
  v70 = (AtlasManagerUnit_o *)Master_object[1].fields.seriazlier;
  classIconUiDisabled = this->fields.classIconUiDisabled;
  v78 = v69->fields.iconId;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v66, v67, v68);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_20559/*"img_class_{0}"*/,
                                                                  v72,
                                                                  0LL);
  if ( !v70 )
    goto LABEL_45;
  AtlasManagerUnit__SetUI(v70, classIconUiDisabled, (System_String_o *)Master_object, 0LL);
  v73 = resourceCatalog->klass;
  v74 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v75 = &v73->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v75 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_38;
    }
    v76 = (__int64)&v73->vtable[*v75].method;
  }
  else
  {
LABEL_38:
    v76 = sub_1C36AAC(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v76)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v76 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier) == 0LL
    || (AtlasManagerUnit__SetUI(
          (AtlasManagerUnit_o *)Master_object,
          this->fields.classButtonUiDisabled,
          (System_String_o *)StringLiteral_17722/*"btn_class"*/,
          0LL),
        ClassBoardSelectIconComponent__UpdateUI(this, v77),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL) )
  {
LABEL_45:
    sub_1BE4D28(Master_object, v17);
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
    sub_1BE4D28(IsShowActiveIcon, v4);
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
  sub_1BE4A70(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectIconComponent_AnimClipInfo___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  System_Action_object__o *_9__25_0; // x22
  Il2CppObject *v26; // x23
  struct ClassBoardSelectIconComponent_AnimClipInfo___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2

  if ( (byte_4B6A1F7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AnimationEvent__TypeInfo, animClip);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_AnimationEvent___, v5);
    sub_1BE4ACC(&Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__, v6);
    sub_1BE4ACC(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_9293/*"MoveEnd"*/, v8);
    sub_1BE4ACC(&StringLiteral_9295/*"MoveStart"*/, v9);
    sub_1BE4ACC(&StringLiteral_13148/*"StartBgAnim"*/, v10);
    sub_1BE4ACC(&StringLiteral_14754/*"TransitionAnimStart"*/, v11);
    sub_1BE4ACC(&StringLiteral_6953/*"ForwardIconAnimStart"*/, v12);
    sub_1BE4ACC(&StringLiteral_13164/*"StartWhite"*/, v13);
    byte_4B6A1F7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animClip = animClip;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)animClip, v14, v15, v16, v17, v18, v19);
  if ( !animClip )
    sub_1BE4D28(v20, v21);
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v23 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
    v23 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
  }
  _9__25_0 = (System_Action_object__o *)v23->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__25_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(
      _9__25_0,
      v26,
      Method_ClassBoardSelectIconComponent_AnimClipInfo___c___ctor_b__25_0__,
      0LL);
    static_fields = ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Action_AnimationEvent__o *)_9__25_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  BasicHelper__ForEach_object_(
    v24,
    (System_Action_T__o *)_9__25_0,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v24, 0LL);
  this->fields._FadeInStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13164/*"StartWhite"*/,
                                                    0.0,
                                                    v34);
  this->fields._BgAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_13148/*"StartBgAnim"*/,
                                                    0.0,
                                                    v35);
  this->fields._IconMoveStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                      this,
                                                      (System_String_o *)StringLiteral_9295/*"MoveStart"*/,
                                                      0.0,
                                                      v36);
  this->fields._IconMoveEndTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                    this,
                                                    (System_String_o *)StringLiteral_9293/*"MoveEnd"*/,
                                                    0.0,
                                                    v37);
  this->fields._ForwardIconAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                             this,
                                                             (System_String_o *)StringLiteral_6953/*"ForwardIconAnimStart"*/,
                                                             0.0,
                                                             v38);
  this->fields._TransitionAnimStartTime_k__BackingField = ClassBoardSelectIconComponent_AnimClipInfo__GetEventTimeByFunctionName(
                                                            this,
                                                            (System_String_o *)StringLiteral_14754/*"TransitionAnimStart"*/,
                                                            0.0,
                                                            v39);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Object_array *events; // x19
  System_Func_object__bool__o *v20; // x20
  Il2CppObject *object; // x0

  if ( (byte_4B6A1F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Find_AnimationEvent___, eventName);
    sub_1BE4ACC(&System_Func_AnimationEvent__bool__TypeInfo, v7);
    sub_1BE4ACC(
      &Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
      v8);
    sub_1BE4ACC(&ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo, v9);
    byte_4B6A1F8 = 1;
  }
  v10 = sub_1BE4D18(ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = eventName,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)eventName, v13, v14, v15, v16, v17, v18),
        (animClip = this->fields.animClip) == 0LL) )
  {
    sub_1BE4D28(animClip, v12);
  }
  events = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v20 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_ClassBoardSelectIconComponent_AnimClipInfo___c__DisplayClass26_0__GetEventTimeByFunctionName_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             events,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2F44C48 *)Method_BasicHelper_Find_AnimationEvent___);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A1F9 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo, v1);
    byte_4B6A1F9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectIconComponent_AnimClipInfo___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardSelectIconComponent_AnimClipInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}