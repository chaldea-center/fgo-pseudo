void ScriptCharaData___ctor(
        ScriptCharaData_o *this,
        int32_t kind,
        System_String_o *name,
        System_String_o *imageName,
        ItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  Il2CppObject *prefab; // x22
  Il2CppObject *v27; // x0
  struct UnityEngine_GameObject_o **p_gameObject; // x24
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 *v42; // x8
  UnityEngine_Object_o *v43; // x25
  UnityEngine_Transform_o *v44; // x23
  UnityEngine_GameObject_o *parent; // x8
  UnityEngine_GameObject_o *v46; // x21
  __int64 v47; // x1
  UIScriptChara_o *chara; // x21
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *v50; // x25
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972819 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIScriptChara___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptPosition_TypeInfo);
    sub_2213A60(&StringLiteral_7664/*"HorizontalImage"*/);
    sub_2213A60(&StringLiteral_6992/*"Figure"*/);
    sub_2213A60(&StringLiteral_15932/*"VerticalImage"*/);
    sub_2213A60(&StringLiteral_6366/*"Equip"*/);
    sub_2213A60(&StringLiteral_7894/*"Image"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972819 = 1;
  }
  this->fields.isWaitTalkMoveAlpha = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v11, v12, v13, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.imageName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageName, v17, v18, v19, v20, v21, v22, v23);
  if ( !seed )
    goto LABEL_34;
  prefab = (Il2CppObject *)seed->fields.prefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  v27 = UnityEngine_Object__Instantiate_object_(
          prefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.gameObject = (struct UnityEngine_GameObject_o *)v27;
  p_gameObject = &this->fields.gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gameObject, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  gameObject = this->fields.gameObject;
  if ( !gameObject )
LABEL_34:
    sub_2213CDC(gameObject, v25);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIScriptChara___);
  this->fields.chara = (struct UIScriptChara_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.chara,
    (int32_t)Component_object,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( kind > 1 )
  {
    switch ( kind )
    {
      case 2:
        v42 = &StringLiteral_7894/*"Image"*/;
        break;
      case 3:
        v42 = &StringLiteral_15932/*"VerticalImage"*/;
        break;
      case 4:
        v42 = &StringLiteral_7664/*"HorizontalImage"*/;
        break;
      default:
        goto LABEL_19;
    }
LABEL_17:
    v43 = (UnityEngine_Object_o *)*p_gameObject;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716((System_String_o *)*v42, name, 0);
    if ( !v43 )
      goto LABEL_34;
    UnityEngine_Object__set_name(v43, (System_String_o *)gameObject, 0);
    goto LABEL_19;
  }
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_19;
    v42 = &StringLiteral_6366/*"Equip"*/;
    goto LABEL_17;
  }
  v50 = (UnityEngine_Object_o *)*p_gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                             (System_String_o *)StringLiteral_6992/*"Figure"*/,
                                             name,
                                             0);
  if ( !v50 )
    goto LABEL_34;
  UnityEngine_Object__set_name(v50, (System_String_o *)gameObject, 0);
  this->fields.faceType = 0;
LABEL_19:
  gameObject = *p_gameObject;
  if ( !*p_gameObject )
    goto LABEL_34;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !seed->fields.parent )
    goto LABEL_34;
  v44 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seed->fields.parent, 0);
  if ( !v44 )
    goto LABEL_34;
  UnityEngine_Transform__set_parent(v44, (UnityEngine_Transform_o *)gameObject, 0);
  Position = ItemSeed__GetPosition(seed, 0);
  UnityEngine_Transform__set_position(v44, Position, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !gameObject )
    goto LABEL_34;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)gameObject, 0);
  UnityEngine_Transform__set_localRotation(v44, localRotation, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !gameObject )
    goto LABEL_34;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  UnityEngine_Transform__set_localScale(v44, localScale, 0);
  gameObject = seed->fields.parent;
  if ( !gameObject )
    goto LABEL_34;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0);
  parent = seed->fields.parent;
  this->fields.defaultLayer = (int)gameObject;
  if ( !parent )
    goto LABEL_34;
  v46 = this->fields.gameObject;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !v46 )
    goto LABEL_34;
  UnityEngine_GameObject__set_layer(v46, (int32_t)gameObject, 0);
  chara = this->fields.chara;
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, v47);
  Position_51899636 = ScriptPosition__GetPosition_51899636(0.0, 0.0, 0);
  if ( !chara )
    goto LABEL_34;
  UIScriptChara__SetBasePosition(chara, Position_51899636, 0);
  ScriptCharaData__SetCharacter(this, imageName, v49);
  gameObject = (UnityEngine_GameObject_o *)this->fields.chara;
  this->fields.defaultDepth = 0;
  if ( !gameObject )
    goto LABEL_34;
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, size_t))&gameObject->klass[1]._2.cctor_finished)(
    gameObject,
    0,
    gameObject->klass[1]._2.cctor_thread);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__ChangeCharacter(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float speed,
        System_String_o *imageName,
        int32_t type,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  bool v7; // w6
  bool v8; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  char v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_c *v21; // x0
  UIScriptChara_o *chara; // x23
  System_String_o *changeKind; // x24
  System_String_o *v24; // x21
  int32_t faceType; // w22
  System_Action_o *v26; // x25
  __int64 v27; // x0
  __int64 v28; // x1

  if ( (byte_597281B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScriptCharaData_EndChange__);
    byte_597281B = 1;
  }
  this->fields.imageName = imageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    imageName,
    *(System_String_o **)&type,
    isContinueSilhouette,
    (int32_t)method,
    v7,
    v8);
  this->fields.faceType = type;
  this->fields.changeKind = kind;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.changeKind, (int32_t)kind, v15, v16, v17, v18, v19, v20);
  v21 = System_Action_TypeInfo;
  chara = this->fields.chara;
  changeKind = this->fields.changeKind;
  v24 = this->fields.imageName;
  faceType = this->fields.faceType;
  this->fields.changeSpeed = speed;
  this->fields.state = 2;
  v26 = (System_Action_o *)sub_2213CCC(v21);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ScriptCharaData_EndChange__, 0);
  if ( !chara )
    sub_2213CDC(v27, v28);
  UIScriptChara__ChangeCharacter(chara, changeKind, speed, v24, faceType, v26, isContinueSilhouette, 0);
}


void ScriptCharaData__Destroy(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  MissionNaviTransitionBoardItem_o *p_gameObject; // x20
  UnityEngine_Object_o *gameObject; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x21
  struct UIScriptChara_o **p_chara; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_597281C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597281C = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  p_gameObject = (MissionNaviTransitionBoardItem_o *)&this->fields.gameObject;
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  this->fields.state = 3;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_gameObject->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    this->fields.chara = 0;
    p_chara = &this->fields.chara;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_chara, 0, v9, v10, v11, v12, v13, v14);
    *(p_chara - 1) = 0;
    sub_2213A04(p_gameObject, 0, v15, v16, v17, v18, v19, v20);
  }
}


void ScriptCharaData__DestroyEffectByMark(ScriptCharaData_o *this, System_String_o *markKey, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, markKey);
  UIScriptChara__DestroyEffectByMark(chara, markKey, 0);
}


void ScriptCharaData__EndChange(ScriptCharaData_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void ScriptCharaData__EndLoadAsset(ScriptCharaData_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


float ScriptCharaData__GetCharaDepth(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__GetDepth(chara, 0);
}


float ScriptCharaData__GetDepthPos(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *parent; // x20
  float z; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972826 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972826 = 1;
  }
  gameObject = this->fields.gameObject;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_18;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) )
  {
    gameObject = this->fields.gameObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            z = localPosition.fields.z;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(gameObject, method);
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  z = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.z;
LABEL_16:
  gameObject = (UnityEngine_GameObject_o *)this->fields.chara;
  if ( !gameObject )
    goto LABEL_18;
  return z + UIScriptChara__GetDepth((UIScriptChara_o *)gameObject, 0);
}


float ScriptCharaData__GetParentDepth(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972827 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972827 = 1;
  }
  gameObject = this->fields.gameObject;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) )
  {
    gameObject = this->fields.gameObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            return localPosition.fields.z;
          }
        }
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, method);
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  return UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.z;
}


void ScriptCharaData__InitRoll(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__InitRoll(chara, 0);
}


bool ScriptCharaData__IsBackEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsBackEffect(chara, 0);
}


bool ScriptCharaData__IsBackEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsBackEffectStart(chara, 0);
}


bool ScriptCharaData__IsBackEffectStart_51810116(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsBackEffectStart_51945548(chara, n, 0);
}


bool ScriptCharaData__IsBackEffect_51810068(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsBackEffect_51945348(chara, n, 0);
}


bool ScriptCharaData__IsChange(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  if ( !this->fields.state )
    return 1;
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsChange(chara, 0);
}


bool ScriptCharaData__IsCut(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsCut(chara, 0);
}


bool ScriptCharaData__IsCutStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsCutStart(chara, 0);
}


bool ScriptCharaData__IsDefaultLayer(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = this->fields.gameObject;
  if ( !gameObject )
    sub_2213CDC(0, method);
  return UnityEngine_GameObject__get_layer(gameObject, 0) == this->fields.defaultLayer;
}


bool ScriptCharaData__IsDispCharacter(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(this, method);
  return chara->fields.isDisp;
}


bool ScriptCharaData__IsEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsEffect(chara, 0);
}


bool ScriptCharaData__IsEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsEffectStart(chara, 0);
}


bool ScriptCharaData__IsEffectStart_51809568(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsEffectStart_51944080(chara, n, 0);
}


bool ScriptCharaData__IsEffect_51809520(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsEffect_51943880(chara, n, 0);
}


bool ScriptCharaData__IsLoad(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool ScriptCharaData__IsMove(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(this, method);
  return chara->fields.isMove;
}


bool ScriptCharaData__IsMoveAlpha(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return ((__int64 (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))chara->klass->vtable._19_IsBusyMoveAlpha.methodPtr)(
           chara,
           chara->klass->vtable._19_IsBusyMoveAlpha.method);
}


bool ScriptCharaData__IsMoveAlphaWaitTalk(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  if ( !this->fields.isWaitTalkMoveAlpha )
    return 0;
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return ((__int64 (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))chara->klass->vtable._19_IsBusyMoveAlpha.methodPtr)(
           chara,
           chara->klass->vtable._19_IsBusyMoveAlpha.method);
}


bool ScriptCharaData__IsMoveRelativePosition(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(this, method);
  return chara->fields.isMoveRelativePosition;
}


bool ScriptCharaData__IsMoveRelativePositionLoop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsMoveRelativePositionLoop(chara, 0);
}


bool ScriptCharaData__IsRoll(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(this, method);
  return chara->fields.isRoll;
}


bool ScriptCharaData__IsShake(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsShake(chara, 0);
}


bool ScriptCharaData__IsSpecialEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsSpecialEffect(chara, 0);
}


bool ScriptCharaData__IsSpecialEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  return UIScriptChara__IsSpecialEffectStart(chara, 0);
}


bool ScriptCharaData__IsSpecialEffectStart_51809312(
        ScriptCharaData_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsSpecialEffectStart_51942884(chara, n, 0);
}


bool ScriptCharaData__IsSpecialEffect_51809264(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__IsSpecialEffect_51942860(chara, n, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__MoveAlpha(
        ScriptCharaData_o *this,
        float duration,
        float alpha,
        bool isWaitTalk,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.isWaitTalkMoveAlpha = isWaitTalk;
  if ( !chara )
    sub_2213CDC(0, isWaitTalk);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *, float, float))chara->klass->vtable._20_MoveAlpha.methodPtr)(
    chara,
    chara->klass->vtable._20_MoveAlpha.method,
    duration,
    alpha);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__MoveAlphaSpeed(
        ScriptCharaData_o *this,
        float speed,
        float alpha,
        bool isWaitTalk,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.isWaitTalkMoveAlpha = isWaitTalk;
  if ( !chara )
    sub_2213CDC(0, isWaitTalk);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *, float, float))chara->klass->vtable._21_MoveAlphaSpeed.methodPtr)(
    chara,
    chara->klass->vtable._21_MoveAlphaSpeed.method,
    speed,
    alpha);
}


void ScriptCharaData__MoveAttack(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float duration,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UIScriptChara_o *chara; // x0
  float y; // s4
  float z; // s5
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972824 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972824 = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, kind);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v9);
  y = Position.fields.y;
  z = Position.fields.z;
  v14.fields.x = Position.fields.x;
  v14.fields.y = y;
  v14.fields.z = z;
  UIScriptChara__MoveAttack(chara, kind, duration, v14, 0);
}


void ScriptCharaData__MoveAttack_51808580(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, kind);
  UIScriptChara__MoveAttack(chara, kind, duration, v, 0);
}


void ScriptCharaData__MoveAttack_51808604(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float duration,
        float x,
        float y,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UIScriptChara_o *chara; // x0
  float v13; // s4
  float z; // s5
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972825 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972825 = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, kind);
  Position_51899636 = ScriptPosition__GetPosition_51899636(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v11);
  v13 = Position_51899636.fields.y;
  z = Position_51899636.fields.z;
  v16.fields.x = Position_51899636.fields.x;
  v16.fields.y = v13;
  v16.fields.z = z;
  UIScriptChara__MoveAttack(chara, kind, duration, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__MovePosition(ScriptCharaData_o *this, float duration, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x1
  UIScriptChara_o *chara; // x0
  float y; // s4
  float z; // s5
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_597281F & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_597281F = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, *(_QWORD *)&index);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v7);
  y = Position.fields.y;
  z = Position.fields.z;
  v12.fields.x = Position.fields.x;
  v12.fields.y = y;
  v12.fields.z = z;
  UIScriptChara__MovePosition(chara, duration, v12, 0);
}


void ScriptCharaData__MovePositionEase(
        ScriptCharaData_o *this,
        float time,
        float x,
        float y,
        System_String_o *easeType,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  float v14; // s4
  float z; // s5
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972821 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972821 = 1;
  }
  chara = this->fields.chara;
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, easeType);
  Position_51899636 = ScriptPosition__GetPosition_51899636(x, y, 0);
  if ( !chara )
    sub_2213CDC(v12, v13);
  v14 = Position_51899636.fields.y;
  z = Position_51899636.fields.z;
  v17.fields.x = Position_51899636.fields.x;
  v17.fields.y = v14;
  v17.fields.z = z;
  UIScriptChara__MovePositionEase(chara, time, v17, easeType, 0);
}


void ScriptCharaData__MovePosition_51807428(
        ScriptCharaData_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__MovePosition(chara, duration, v, 0);
}


void ScriptCharaData__MovePosition_51807452(
        ScriptCharaData_o *this,
        float duration,
        float x,
        float y,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UIScriptChara_o *chara; // x0
  float v11; // s4
  float z; // s5
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972820 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972820 = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, method);
  Position_51899636 = ScriptPosition__GetPosition_51899636(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v9);
  v11 = Position_51899636.fields.y;
  z = Position_51899636.fields.z;
  v14.fields.x = Position_51899636.fields.x;
  v14.fields.y = v11;
  v14.fields.z = z;
  UIScriptChara__MovePosition(chara, duration, v14, 0);
}


void ScriptCharaData__MoveRelativePositionEaseLoop(
        ScriptCharaData_o *this,
        UnityEngine_Vector2_array *movePos,
        System_Single_array *duration,
        int32_t loopNum,
        System_String_o *easeType,
        bool isFastPlay,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, movePos);
  UIScriptChara__MoveRelativePositionEaseLoop(chara, movePos, duration, loopNum, easeType, isFastPlay, 0);
}


void ScriptCharaData__MoveRelativePositionLoop(
        ScriptCharaData_o *this,
        UnityEngine_Vector2_array *movePos,
        System_Single_array *duration,
        int32_t loopNum,
        bool isFastPlay,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, movePos);
  UIScriptChara__MoveRelativePositionLoop(chara, movePos, duration, loopNum, isFastPlay, 0);
}


void ScriptCharaData__MoveReturnPosition(ScriptCharaData_o *this, float duration, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__MoveReturnPosition(chara, duration, 0);
}


void ScriptCharaData__MoveReturnPositionEase(
        ScriptCharaData_o *this,
        UnityEngine_Vector3_o v,
        float time,
        System_String_o *startEaseType,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, startEaseType);
  UIScriptChara__MoveReturnPositionEase(chara, v.fields.x, v.fields.y, time, startEaseType, returnEaseType, 0);
}


void ScriptCharaData__MoveReturnPositionEase_51808212(
        ScriptCharaData_o *this,
        float x,
        float y,
        float time,
        System_String_o *startEaseType,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, startEaseType);
  UIScriptChara__MoveReturnPositionEase(chara, x, y, time, startEaseType, returnEaseType, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__MoveReturnPosition_51807832(
        ScriptCharaData_o *this,
        float duration,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIScriptChara_o *chara; // x0
  float y; // s4
  float z; // s5
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972822 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972822 = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, *(_QWORD *)&index);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v7);
  y = Position.fields.y;
  z = Position.fields.z;
  v12.fields.x = Position.fields.x;
  v12.fields.y = y;
  v12.fields.z = z;
  UIScriptChara__MoveReturnPosition_51932688(chara, duration, v12, 0);
}


void ScriptCharaData__MoveReturnPosition_51807992(
        ScriptCharaData_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__MoveReturnPosition_51932688(chara, duration, v, 0);
}


void ScriptCharaData__MoveReturnPosition_51808016(
        ScriptCharaData_o *this,
        float duration,
        float x,
        float y,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UIScriptChara_o *chara; // x0
  float v11; // s4
  float z; // s5
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5972823 & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_5972823 = 1;
  }
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, method);
  Position_51899636 = ScriptPosition__GetPosition_51899636(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, v9);
  v11 = Position_51899636.fields.y;
  z = Position_51899636.fields.z;
  v14.fields.x = Position_51899636.fields.x;
  v14.fields.y = v11;
  v14.fields.z = z;
  UIScriptChara__MoveReturnPosition_51932688(chara, duration, v14, 0);
}


void ScriptCharaData__MoveScale(ScriptCharaData_o *this, float duration, float s, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__MoveScale(chara, duration, s, 0);
}


void ScriptCharaData__MoveScaleEase(
        ScriptCharaData_o *this,
        float scale,
        float time,
        System_String_o *easeType,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, easeType);
  UIScriptChara__MoveScaleEase(chara, scale, time, easeType, 0);
}


void ScriptCharaData__RecoverDepth(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, _QWORD, const MethodInfo *))chara->klass->vtable._18_SetDepth.methodPtr)(
    chara,
    (unsigned int)this->fields.defaultDepth,
    chara->klass->vtable._18_SetDepth.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__ResumeBackEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  UIScriptChara__ResumeBackEffect(chara, isSkip, 0);
}


void ScriptCharaData__ResumeBackEffect_51810392(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  UIScriptChara__ResumeBackEffect_51946244(chara, n, isSkip, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__ResumeCutin(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *))chara->klass->vtable._24_ResumeCutin.methodPtr)(
    chara,
    isSkip,
    chara->klass->vtable._24_ResumeCutin.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__ResumeEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  UIScriptChara__ResumeEffect(chara, isSkip, 0);
}


void ScriptCharaData__ResumeEffect_51809936(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  UIScriptChara__ResumeEffect_51944776(chara, n, isSkip, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__ResumeSpecialEffect(ScriptCharaData_o *this, bool isPause, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isPause);
  UIScriptChara__ResumeSpecialEffect(chara, isPause, 0);
}


void ScriptCharaData__ResumeSpecialEffect_51809420(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isPause,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  UIScriptChara__ResumeSpecialEffect_51943752(chara, n, isPause, 0);
}


void ScriptCharaData__SetAlpha(ScriptCharaData_o *this, float a, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *, float))chara->klass->vtable._17_SetAlpha.methodPtr)(
    chara,
    chara->klass->vtable._17_SetAlpha.method,
    a);
}


void ScriptCharaData__SetBackEffect(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x22
  _BOOL8 IsDefaultLayer; // x0
  __int64 v12; // x1

  chara = this->fields.chara;
  IsDefaultLayer = ScriptCharaData__IsDefaultLayer(this, (const MethodInfo *)n);
  if ( !chara )
    sub_2213CDC(IsDefaultLayer, v12);
  UIScriptChara__SetBackEffect(chara, n, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetBackEffect_51810232(
        ScriptCharaData_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x23
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 IsDefaultLayer; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  chara = this->fields.chara;
  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  IsDefaultLayer = ScriptCharaData__IsDefaultLayer(this, (const MethodInfo *)n);
  if ( !chara )
    sub_2213CDC(IsDefaultLayer, v16);
  v17.fields.y = y;
  v17.fields.z = z;
  v17.fields.x = x;
  UIScriptChara__SetBackEffect_51945796(chara, n, v17, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetCharacter(ScriptCharaData_o *this, System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  int32_t kind; // w8
  _BOOL8 IsUseSimpleMeshFigure; // x0
  struct UIScriptChara_o *chara; // x8
  struct UIScriptChara_o *v14; // x22
  unsigned int faceType; // w21
  System_Action_o *v16; // x23

  if ( (byte_597281A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScriptCharaData_EndLoadAsset__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_597281A = 1;
  }
  this->fields.imageName = imageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  kind = this->fields.kind;
  IsUseSimpleMeshFigure = 0;
  this->fields.state = 0;
  if ( !kind )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
    IsUseSimpleMeshFigure = ScriptManager__IsUseSimpleMeshFigure(imageName, 0);
  }
  chara = this->fields.chara;
  if ( !chara
    || (((void (__fastcall *)(struct UIScriptChara_o *__return_ptr, struct UIScriptChara_o *, _BOOL8, const MethodInfo *))chara->klass->vtable._31_SetUseSimpleMesh.methodPtr)(
          chara,
          this->fields.chara,
          IsUseSimpleMeshFigure,
          chara->klass->vtable._31_SetUseSimpleMesh.method),
        v14 = this->fields.chara,
        faceType = this->fields.faceType,
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptCharaData_EndLoadAsset__, 0),
        !v14) )
  {
    sub_2213CDC(IsUseSimpleMeshFigure, v10);
  }
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, _QWORD, System_Action_o *, const MethodInfo *))v14->klass->vtable._11_SetCharacter.methodPtr)(
    v14,
    imageName,
    faceType,
    v16,
    v14->klass->vtable._11_SetCharacter.method);
}


void ScriptCharaData__SetCutin(
        ScriptCharaData_o *this,
        System_String_o *n,
        float time,
        float mgd,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, bool, bool, const MethodInfo *, float, float))chara->klass->vtable._23_SetCutin.methodPtr)(
    chara,
    n,
    isSkip,
    isPause,
    chara->klass->vtable._23_SetCutin.method,
    time,
    mgd);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetCutout(ScriptCharaData_o *this, float time, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *, float))chara->klass->vtable._25_SetCutout.methodPtr)(
    chara,
    isSkip,
    chara->klass->vtable._25_SetCutout.method,
    time);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetDepth(ScriptCharaData_o *this, int32_t d, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.defaultDepth = d;
  if ( !chara )
    sub_2213CDC(0, *(_QWORD *)&d);
  ((void (__fastcall *)(struct UIScriptChara_o *))chara->klass->vtable._18_SetDepth.methodPtr)(chara);
}


void ScriptCharaData__SetEffect(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x22
  _BOOL8 IsDefaultLayer; // x0
  __int64 v12; // x1

  chara = this->fields.chara;
  IsDefaultLayer = ScriptCharaData__IsDefaultLayer(this, (const MethodInfo *)n);
  if ( !chara )
    sub_2213CDC(IsDefaultLayer, v12);
  UIScriptChara__SetEffect(chara, n, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetEffectEdgeBlur(
        ScriptCharaData_o *this,
        System_String_o *effectName,
        UnityEngine_Color_o color,
        UnityEngine_Color_o particleColor,
        bool isSkip,
        bool isPause,
        int32_t flip,
        int32_t level,
        float thick,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, effectName);
  UIScriptChara__SetEffectEdgeBlur(chara, effectName, color, particleColor, isSkip, isPause, flip, level, thick, 0);
}


void ScriptCharaData__SetEffect_51809732(
        ScriptCharaData_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x23
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 IsDefaultLayer; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  chara = this->fields.chara;
  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  IsDefaultLayer = ScriptCharaData__IsDefaultLayer(this, (const MethodInfo *)n);
  if ( !chara )
    sub_2213CDC(IsDefaultLayer, v16);
  v17.fields.y = y;
  v17.fields.z = z;
  v17.fields.x = x;
  UIScriptChara__SetEffect_51944328(chara, n, v17, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetFace(ScriptCharaData_o *this, int32_t type, float fadeTime, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.faceType = type;
  if ( !chara )
    sub_2213CDC(0, *(_QWORD *)&type);
  ((void (__fastcall *)(struct UIScriptChara_o *, float))chara->klass->vtable._13_SetFace.methodPtr)(chara, fadeTime);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetFilter(
        ScriptCharaData_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, filterName);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))chara->klass->vtable._14_SetFilter.methodPtr)(
    chara,
    filterName,
    chara->klass->vtable._14_SetFilter.method,
    *(long double *)&filterColor,
    *(long double *)&filterColor.fields.g,
    *(long double *)&filterColor.fields.b,
    *(long double *)&filterColor.fields.a);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetFullScreenScaleType(ScriptCharaData_o *this, int32_t type, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, *(_QWORD *)&type);
  ((void (__fastcall *)(struct UIScriptChara_o *, int32_t, const MethodInfo *))chara->klass->vtable._22_SetFullScreenScaleType.methodPtr)(
    chara,
    type,
    chara->klass->vtable._22_SetFullScreenScaleType.method);
}


void ScriptCharaData__SetLayer(ScriptCharaData_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptCharaData_o *v5; // x0
  const MethodInfo *v6; // x2

  gameObject = this->fields.gameObject;
  if ( layer < 0 )
    layer = this->fields.defaultLayer;
  GameObjectExtensions__SetLayerRecursively(gameObject, layer, 0);
  ScriptCharaData__UpdateWidgetLayer(v5, this->fields.gameObject, v6);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetMaskData(
        ScriptCharaData_o *this,
        int32_t offsetX,
        int32_t offsetY,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5972829 & 1) == 0 )
  {
    sub_2213A60(&UIScriptImage_TypeInfo);
    byte_5972829 = 1;
  }
  if ( this->fields.kind == 2 )
  {
    chara = this->fields.chara;
    if ( !chara
      || (naturalAligment = UIScriptImage_TypeInfo->_2.naturalAligment,
          chara->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (UIScriptImage_c *)chara->klass->_2.typeHierarchy[naturalAligment - 1] != UIScriptImage_TypeInfo )
    {
      sub_2213CDC(chara, *(_QWORD *)&offsetX);
    }
    UIScriptImage__SetMaskImage((UIScriptImage_o *)chara, offsetX, offsetY, width, height, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetMaskInteraction(ScriptCharaData_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, *(_QWORD *)&maskInteraction);
  ((void (__fastcall *)(struct UIScriptChara_o *, int32_t, const MethodInfo *))chara->klass->vtable._29_SetMaskInteraction.methodPtr)(
    chara,
    maskInteraction,
    chara->klass->vtable._29_SetMaskInteraction.method);
}


void ScriptCharaData__SetMaterial(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))chara->klass->vtable._28_SetMaterial.methodPtr)(
    chara,
    chara->klass->vtable._28_SetMaterial.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetPosition(ScriptCharaData_o *this, int32_t index, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597281D & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_597281D = 1;
  }
  chara = this->fields.chara;
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, *(_QWORD *)&index);
  Position = ScriptPosition__GetPosition(index, 0);
  if ( !chara )
    sub_2213CDC(v6, v7);
  UIScriptChara__SetBasePosition(chara, Position, 0);
}


void ScriptCharaData__SetPosition_51806680(ScriptCharaData_o *this, float x, float y, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  UnityEngine_Vector3_o Position_51899636; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597281E & 1) == 0 )
  {
    sub_2213A60(&ScriptPosition_TypeInfo);
    byte_597281E = 1;
  }
  chara = this->fields.chara;
  if ( !*(&ScriptPosition_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, method);
  Position_51899636 = ScriptPosition__GetPosition_51899636(x, y, 0);
  if ( !chara )
    sub_2213CDC(v8, v9);
  UIScriptChara__SetBasePosition(chara, Position_51899636, 0);
}


void ScriptCharaData__SetPosition_51806812(ScriptCharaData_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__SetBasePosition(chara, v, 0);
}


void ScriptCharaData__SetRelativePosition(ScriptCharaData_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__SetRelativePosition(chara, v, 0);
}


void ScriptCharaData__SetRoll(
        ScriptCharaData_o *this,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__SetRoll(chara, rollZ, centerOffset, 0);
}


void ScriptCharaData__SetScale(ScriptCharaData_o *this, float v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__SetScale(chara, v, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetShadow(ScriptCharaData_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isShadow);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, bool, const MethodInfo *))chara->klass->vtable._15_SetShadow.methodPtr)(
    chara,
    isShadow,
    isSkip,
    chara->klass->vtable._15_SetShadow.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetSortingOrder(ScriptCharaData_o *this, int32_t order, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, *(_QWORD *)&order);
  ((void (__fastcall *)(struct UIScriptChara_o *, int32_t, const MethodInfo *))chara->klass->vtable._30_SetSortingOrder.methodPtr)(
    chara,
    order,
    chara->klass->vtable._30_SetSortingOrder.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetSpecialEffect(
        ScriptCharaData_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, bool, bool, bool, const MethodInfo *, long double, long double, long double, float, long double, long double, long double, long double))chara->klass->vtable._27_SetSpecialEffect.methodPtr)(
    chara,
    n,
    isSkip,
    isPause,
    isContinueSilhouette,
    chara->klass->vtable._27_SetSpecialEffect.method,
    *(long double *)&pos.fields.x,
    *(long double *)&pos.fields.y,
    *(long double *)&pos.fields.z,
    time,
    *(long double *)&color,
    *(long double *)&color.fields.g,
    *(long double *)&color.fields.b,
    *(long double *)&color.fields.a);
}


void ScriptCharaData__SetTalkDepth(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, __int64, const MethodInfo *))chara->klass->vtable._18_SetDepth.methodPtr)(
    chara,
    9,
    chara->klass->vtable._18_SetDepth.method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__SetTalkMask(ScriptCharaData_o *this, bool isMask, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isMask);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *))chara->klass->vtable._16_SetTalkMask.methodPtr)(
    chara,
    isMask,
    chara->klass->vtable._16_SetTalkMask.method);
}


void ScriptCharaData__SetTalkName(ScriptCharaData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.talkName = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.talkName,
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptCharaData__Shake(
        ScriptCharaData_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__Shake(chara, duration, cycle, x, y, 0);
}


void ScriptCharaData__ShakeStop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__Shake(chara, 0.0, 0.0, 0.0, 0.0, 0);
}


void ScriptCharaData__StartRoll(ScriptCharaData_o *this, float duration, float rollZ, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__StartRoll(chara, duration, rollZ, 0);
}


void ScriptCharaData__StartRollAxis(
        ScriptCharaData_o *this,
        System_String_o *rollAxis,
        float roll,
        float duration,
        bool isRollLoop,
        bool isRollWait,
        float stopAngleLoopEnd,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, rollAxis);
  UIScriptChara__StartRollAxis(chara, rollAxis, roll, duration, isRollLoop, isRollWait, stopAngleLoopEnd, 0);
}


void ScriptCharaData__StartRollEx(
        ScriptCharaData_o *this,
        float duration,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__StartRollEx(chara, duration, rollZ, centerOffset, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ScriptCharaData__StopBackEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  return UIScriptChara__StopBackEffect(chara, isSkip, 0);
}


bool ScriptCharaData__StopBackEffect_51810448(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__StopBackEffect_51946476(chara, n, isSkip, 0);
}


void ScriptCharaData__StopCut(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__StopSpecialEffect(chara, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ScriptCharaData__StopEffect(
        ScriptCharaData_o *this,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isSkip);
  return UIScriptChara__StopEffect(chara, isSkip, markKey, 0);
}


bool ScriptCharaData__StopEffect_51809992(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  return UIScriptChara__StopEffect_51945012(chara, n, isSkip, markKey, 0);
}


void ScriptCharaData__StopMoveRelativePositionLoop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__StopMoveRelativePositionLoop(chara, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptCharaData__StopRollAxisLoop(ScriptCharaData_o *this, bool isFastPlay, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, isFastPlay);
  UIScriptChara__StopRollAxisLoop(chara, isFastPlay, 0);
}


void ScriptCharaData__StopSpecialEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, method);
  UIScriptChara__StopSpecialEffect(chara, 0);
}


void ScriptCharaData__StopSpecialEffect_51809472(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_2213CDC(0, n);
  UIScriptChara__StopSpecialEffect_51943776(chara, n, 0);
}


void ScriptCharaData__UpdateWidgetLayer(
        ScriptCharaData_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v5; // x1
  int max_length; // w8
  System_Object_array *v7; // x20
  unsigned int v8; // w23
  Il2CppObject *v9; // x24
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_5972828 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____91783696);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972828 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( !go )
      goto LABEL_20;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    go,
                                    1,
                                    (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____91783696);
    if ( !ComponentsInChildren_object )
      goto LABEL_20;
    max_length = ComponentsInChildren_object->max_length;
    v7 = ComponentsInChildren_object;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_2213CE4(ComponentsInChildren_object);
        v9 = v7->m_Items[v8];
        if ( !v9 )
          break;
        monitor = (UnityEngine_Object_o *)v9[21].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Equality(monitor, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
        {
          ComponentsInChildren_object = (System_Object_array *)v9[21].monitor;
          if ( !ComponentsInChildren_object )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ComponentsInChildren_object, 0);
          ComponentsInChildren_object = (System_Object_array *)UnityEngine_GameObject__get_layer(go, 0);
          if ( !gameObject )
            break;
          UnityEngine_GameObject__set_layer(gameObject, (int32_t)ComponentsInChildren_object, 0);
        }
        max_length = v7->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_20:
      sub_2213CDC(ComponentsInChildren_object, v5);
    }
  }
}


int32_t ScriptCharaData__get_DispKind(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int32_t ScriptCharaData__get_FaceType(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.faceType;
}


UnityEngine_GameObject_o *ScriptCharaData__get_GameObject(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.gameObject;
}


System_String_o *ScriptCharaData__get_ImageName(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.imageName;
}


System_String_o *ScriptCharaData__get_Name(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


System_String_o *ScriptCharaData__get_TalkName(ScriptCharaData_o *this, const MethodInfo *method)
{
  return this->fields.talkName;
}