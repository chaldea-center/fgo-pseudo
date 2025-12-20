void ScriptCharaData___ctor(
        ScriptCharaData_o *this,
        int32_t kind,
        System_String_o *name,
        System_String_o *imageName,
        ItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  Il2CppObject *prefab; // x22
  Il2CppObject *v27; // x0
  struct UnityEngine_GameObject_o **p_gameObject; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  UnityEngine_Object_o *v42; // x25
  UnityEngine_Object_o *v43; // x25
  __int64 *v44; // x8
  UnityEngine_Transform_o *v45; // x23
  UnityEngine_GameObject_o *v46; // x21
  UIScriptChara_o *chara; // x21
  const MethodInfo *v48; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E816 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIScriptChara___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ScriptPosition_TypeInfo);
    sub_1C94098(&StringLiteral_7361/*"HorizontalImage"*/);
    sub_1C94098(&StringLiteral_6716/*"Figure"*/);
    sub_1C94098(&StringLiteral_15379/*"VerticalImage"*/);
    sub_1C94098(&StringLiteral_6113/*"Equip"*/);
    sub_1C94098(&StringLiteral_7584/*"Image"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E816 = 1;
  }
  this->fields.isWaitTalkMoveAlpha = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.name = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)name, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.imageName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.imageName, v17, v18, v19, v20, v21, v22, v23);
  if ( !seed )
    goto LABEL_29;
  prefab = (Il2CppObject *)seed->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__Instantiate_object_(
          prefab,
          (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.gameObject = (struct UnityEngine_GameObject_o *)v27;
  p_gameObject = &this->fields.gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.gameObject, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  gameObject = this->fields.gameObject;
  if ( !gameObject )
LABEL_29:
    sub_1C942F0(gameObject, v25);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIScriptChara___);
  this->fields.chara = (struct UIScriptChara_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.chara,
    (int32_t)Component_object,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  switch ( kind )
  {
    case 0:
      v42 = (UnityEngine_Object_o *)*p_gameObject;
      gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64417744(
                                                 (System_String_o *)StringLiteral_6716/*"Figure"*/,
                                                 name,
                                                 0);
      if ( !v42 )
        goto LABEL_29;
      UnityEngine_Object__set_name(v42, (System_String_o *)gameObject, 0);
      this->fields.faceType = 0;
      goto LABEL_16;
    case 1:
      v43 = (UnityEngine_Object_o *)*p_gameObject;
      v44 = &StringLiteral_6113/*"Equip"*/;
      goto LABEL_14;
    case 2:
      v43 = (UnityEngine_Object_o *)*p_gameObject;
      v44 = &StringLiteral_7584/*"Image"*/;
      goto LABEL_14;
    case 3:
      v43 = (UnityEngine_Object_o *)*p_gameObject;
      v44 = &StringLiteral_15379/*"VerticalImage"*/;
      goto LABEL_14;
    case 4:
      v43 = (UnityEngine_Object_o *)*p_gameObject;
      v44 = &StringLiteral_7361/*"HorizontalImage"*/;
LABEL_14:
      gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64417744((System_String_o *)*v44, name, 0);
      if ( !v43 )
        goto LABEL_29;
      UnityEngine_Object__set_name(v43, (System_String_o *)gameObject, 0);
LABEL_16:
      gameObject = *p_gameObject;
      if ( !*p_gameObject )
        goto LABEL_29;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !seed->fields.parent )
        goto LABEL_29;
      v45 = (UnityEngine_Transform_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seed->fields.parent, 0);
      if ( !v45 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent(v45, (UnityEngine_Transform_o *)gameObject, 0);
      Position = ItemSeed__GetPosition(seed, 0);
      UnityEngine_Transform__set_position(v45, Position, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
      if ( !gameObject )
        goto LABEL_29;
      localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)gameObject, 0);
      UnityEngine_Transform__set_localRotation(v45, localRotation, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
      if ( !gameObject )
        goto LABEL_29;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
      UnityEngine_Transform__set_localScale(v45, localScale, 0);
      gameObject = seed->fields.parent;
      if ( !gameObject )
        goto LABEL_29;
      this->fields.defaultLayer = UnityEngine_GameObject__get_layer(gameObject, 0);
      gameObject = seed->fields.parent;
      if ( !gameObject )
        goto LABEL_29;
      v46 = this->fields.gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0);
      if ( !v46 )
        goto LABEL_29;
      UnityEngine_GameObject__set_layer(v46, (int32_t)gameObject, 0);
      chara = this->fields.chara;
      if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
      Position_45677228 = ScriptPosition__GetPosition_45677228(0.0, 0.0, 0);
      if ( !chara )
        goto LABEL_29;
      UIScriptChara__SetBasePosition(chara, Position_45677228, 0);
      ScriptCharaData__SetCharacter(this, imageName, v48);
      gameObject = (UnityEngine_GameObject_o *)this->fields.chara;
      this->fields.defaultDepth = 0;
      if ( !gameObject )
        goto LABEL_29;
      (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, size_t))&gameObject->klass[1]._2.cctor_finished)(
        gameObject,
        0,
        gameObject->klass[1]._2.cctor_thread);
      return;
    default:
      goto LABEL_16;
  }
}


void ScriptCharaData__ChangeCharacter(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float speed,
        System_String_o *imageName,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UIScriptChara_o *chara; // x21
  int32_t faceType; // w20
  System_String_o *changeKind; // x23
  System_String_o *v23; // x22
  System_Action_o *v24; // x24
  __int64 v25; // x0
  __int64 v26; // x1

  if ( (byte_4D2E818 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ScriptCharaData_EndChange__);
    byte_4D2E818 = 1;
  }
  this->fields.imageName = imageName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    (int32_t)imageName,
    type,
    (System_String_o *)method,
    v6,
    v7,
    v8);
  this->fields.faceType = type;
  this->fields.changeKind = kind;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.changeKind, (int32_t)kind, v14, v15, v16, v17, v18, v19);
  this->fields.changeSpeed = speed;
  this->fields.state = 2;
  chara = this->fields.chara;
  faceType = this->fields.faceType;
  changeKind = this->fields.changeKind;
  v23 = this->fields.imageName;
  v24 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ScriptCharaData_EndChange__, 0);
  if ( !chara )
    sub_1C942F0(v25, v26);
  UIScriptChara__ChangeCharacter(chara, changeKind, speed, v23, faceType, v24, 0);
}


void ScriptCharaData__Destroy(ScriptCharaData_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_gameObject; // x20
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *klass; // x21
  struct UIScriptChara_o **p_chara; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2E819 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E819 = 1;
  }
  p_gameObject = (GrandQuestFolderBoardItem_o *)&this->fields.gameObject;
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  this->fields.state = 3;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_gameObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(klass, 0);
    this->fields.chara = 0;
    p_chara = &this->fields.chara;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_chara, 0, v7, v8, v9, v10, v11, v12);
    *(p_chara - 1) = 0;
    sub_1C9403C(p_gameObject, 0, v13, v14, v15, v16, v17, v18);
  }
}


void ScriptCharaData__DestroyEffectByMark(ScriptCharaData_o *this, System_String_o *markKey, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, markKey);
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
    sub_1C942F0(0, method);
  return UIScriptChara__GetDepth(chara, 0);
}


float ScriptCharaData__GetDepthPos(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *parent; // x20
  float z; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E823 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E823 = 1;
  }
  gameObject = this->fields.gameObject;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_18;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(gameObject, method);
  }
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E824 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E824 = 1;
  }
  gameObject = this->fields.gameObject;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(gameObject, method);
  }
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  return UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.z;
}


void ScriptCharaData__InitRoll(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__InitRoll(chara, 0);
}


bool ScriptCharaData__IsBackEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsBackEffect(chara, 0);
}


bool ScriptCharaData__IsBackEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsBackEffectStart(chara, 0);
}


bool ScriptCharaData__IsBackEffectStart_45587524(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsBackEffectStart_45723600(chara, n, 0);
}


bool ScriptCharaData__IsBackEffect_45587468(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsBackEffect_45723400(chara, n, 0);
}


bool ScriptCharaData__IsChange(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  if ( !this->fields.state )
    return 1;
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsChange(chara, 0);
}


bool ScriptCharaData__IsCut(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsCut(chara, 0);
}


bool ScriptCharaData__IsCutStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsCutStart(chara, 0);
}


bool ScriptCharaData__IsDefaultLayer(ScriptCharaData_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = this->fields.gameObject;
  if ( !gameObject )
    sub_1C942F0(0, method);
  return UnityEngine_GameObject__get_layer(gameObject, 0) == this->fields.defaultLayer;
}


bool ScriptCharaData__IsEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsEffect(chara, 0);
}


bool ScriptCharaData__IsEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsEffectStart(chara, 0);
}


bool ScriptCharaData__IsEffectStart_45586940(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsEffectStart_45722132(chara, n, 0);
}


bool ScriptCharaData__IsEffect_45586884(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsEffect_45721932(chara, n, 0);
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
    sub_1C942F0(this, method);
  return chara->fields.isMove;
}


bool ScriptCharaData__IsMoveAlpha(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
  return ((__int64 (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))chara->klass->vtable._19_IsBusyMoveAlpha.methodPtr)(
           chara,
           chara->klass->vtable._19_IsBusyMoveAlpha.method);
}


bool ScriptCharaData__IsMoveRelativePosition(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(this, method);
  return chara->fields.isMoveRelativePosition;
}


bool ScriptCharaData__IsMoveRelativePositionLoop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsMoveRelativePositionLoop(chara, 0);
}


bool ScriptCharaData__IsRoll(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x8

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(this, method);
  return chara->fields.isRoll;
}


bool ScriptCharaData__IsShake(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsShake(chara, 0);
}


bool ScriptCharaData__IsSpecialEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsSpecialEffect(chara, 0);
}


bool ScriptCharaData__IsSpecialEffectStart(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  return UIScriptChara__IsSpecialEffectStart(chara, 0);
}


bool ScriptCharaData__IsSpecialEffectStart_45586656(
        ScriptCharaData_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsSpecialEffectStart_45720936(chara, n, 0);
}


bool ScriptCharaData__IsSpecialEffect_45586600(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__IsSpecialEffect_45720912(chara, n, 0);
}


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
    sub_1C942F0(0, isWaitTalk);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *, float, float))chara->klass->vtable._20_MoveAlpha.methodPtr)(
    chara,
    chara->klass->vtable._20_MoveAlpha.method,
    duration,
    alpha);
}


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
    sub_1C942F0(0, isWaitTalk);
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

  if ( (byte_4D2E821 & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E821 = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v9);
  y = Position.fields.y;
  z = Position.fields.z;
  v14.fields.x = Position.fields.x;
  v14.fields.y = y;
  v14.fields.z = z;
  UIScriptChara__MoveAttack(chara, kind, duration, v14, 0);
}


void ScriptCharaData__MoveAttack_45585844(
        ScriptCharaData_o *this,
        System_String_o *kind,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, kind);
  UIScriptChara__MoveAttack(chara, kind, duration, v, 0);
}


void ScriptCharaData__MoveAttack_45585872(
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
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2E822 & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E822 = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position_45677228 = ScriptPosition__GetPosition_45677228(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v11);
  v13 = Position_45677228.fields.y;
  z = Position_45677228.fields.z;
  v16.fields.x = Position_45677228.fields.x;
  v16.fields.y = v13;
  v16.fields.z = z;
  UIScriptChara__MoveAttack(chara, kind, duration, v16, 0);
}


void ScriptCharaData__MovePosition(ScriptCharaData_o *this, float duration, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x1
  UIScriptChara_o *chara; // x0
  float y; // s4
  float z; // s5
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2E81C & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81C = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v7);
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
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2E81E & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81E = 1;
  }
  chara = this->fields.chara;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position_45677228 = ScriptPosition__GetPosition_45677228(x, y, 0);
  if ( !chara )
    sub_1C942F0(v12, v13);
  v14 = Position_45677228.fields.y;
  z = Position_45677228.fields.z;
  v17.fields.x = Position_45677228.fields.x;
  v17.fields.y = v14;
  v17.fields.z = z;
  UIScriptChara__MovePositionEase(chara, time, v17, easeType, 0);
}


void ScriptCharaData__MovePosition_45584644(
        ScriptCharaData_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__MovePosition(chara, duration, v, 0);
}


void ScriptCharaData__MovePosition_45584672(
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
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2E81D & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81D = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position_45677228 = ScriptPosition__GetPosition_45677228(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v9);
  v11 = Position_45677228.fields.y;
  z = Position_45677228.fields.z;
  v14.fields.x = Position_45677228.fields.x;
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
    sub_1C942F0(0, movePos);
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
    sub_1C942F0(0, movePos);
  UIScriptChara__MoveRelativePositionLoop(chara, movePos, duration, loopNum, isFastPlay, 0);
}


void ScriptCharaData__MoveReturnPosition(ScriptCharaData_o *this, float duration, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, startEaseType);
  UIScriptChara__MoveReturnPositionEase(chara, v.fields.x, v.fields.y, time, startEaseType, returnEaseType, 0);
}


void ScriptCharaData__MoveReturnPositionEase_45585444(
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
    sub_1C942F0(0, startEaseType);
  UIScriptChara__MoveReturnPositionEase(chara, x, y, time, startEaseType, returnEaseType, 0);
}


void ScriptCharaData__MoveReturnPosition_45585056(
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

  if ( (byte_4D2E81F & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81F = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position = ScriptPosition__GetPosition(index, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v7);
  y = Position.fields.y;
  z = Position.fields.z;
  v12.fields.x = Position.fields.x;
  v12.fields.y = y;
  v12.fields.z = z;
  UIScriptChara__MoveReturnPosition_45710604(chara, duration, v12, 0);
}


void ScriptCharaData__MoveReturnPosition_45585216(
        ScriptCharaData_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__MoveReturnPosition_45710604(chara, duration, v, 0);
}


void ScriptCharaData__MoveReturnPosition_45585244(
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
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2E820 & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E820 = 1;
  }
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position_45677228 = ScriptPosition__GetPosition_45677228(x, y, 0);
  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, v9);
  v11 = Position_45677228.fields.y;
  z = Position_45677228.fields.z;
  v14.fields.x = Position_45677228.fields.x;
  v14.fields.y = v11;
  v14.fields.z = z;
  UIScriptChara__MoveReturnPosition_45710604(chara, duration, v14, 0);
}


void ScriptCharaData__MoveScale(ScriptCharaData_o *this, float duration, float s, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, easeType);
  UIScriptChara__MoveScaleEase(chara, scale, time, easeType, 0);
}


void ScriptCharaData__RecoverDepth(ScriptCharaData_o *this, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, _QWORD, const MethodInfo *))chara->klass->vtable._18_SetDepth.methodPtr)(
    chara,
    (unsigned int)this->fields.defaultDepth,
    chara->klass->vtable._18_SetDepth.method);
}


void ScriptCharaData__ResumeBackEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  UIScriptChara__ResumeBackEffect(chara, isSkip, 0);
}


void ScriptCharaData__ResumeBackEffect_45587808(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  UIScriptChara__ResumeBackEffect_45724296(chara, n, isSkip, 0);
}


void ScriptCharaData__ResumeCutin(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *))chara->klass->vtable._24_ResumeCutin.methodPtr)(
    chara,
    isSkip,
    chara->klass->vtable._24_ResumeCutin.method);
}


void ScriptCharaData__ResumeEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  UIScriptChara__ResumeEffect(chara, isSkip, 0);
}


void ScriptCharaData__ResumeEffect_45587316(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  UIScriptChara__ResumeEffect_45722828(chara, n, isSkip, 0);
}


void ScriptCharaData__ResumeSpecialEffect(ScriptCharaData_o *this, bool isPause, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isPause);
  UIScriptChara__ResumeSpecialEffect(chara, isPause, 0);
}


void ScriptCharaData__ResumeSpecialEffect_45586768(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isPause,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  UIScriptChara__ResumeSpecialEffect_45721800(chara, n, isPause, 0);
}


void ScriptCharaData__SetAlpha(ScriptCharaData_o *this, float a, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(IsDefaultLayer, v12);
  UIScriptChara__SetBackEffect(chara, n, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetBackEffect_45587644(
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
    sub_1C942F0(IsDefaultLayer, v16);
  v17.fields.y = y;
  v17.fields.z = z;
  v17.fields.x = x;
  UIScriptChara__SetBackEffect_45723848(chara, n, v17, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetCharacter(ScriptCharaData_o *this, System_String_o *imageName, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  int32_t kind; // w8
  _BOOL8 IsUseSimpleMeshFigure; // x0
  struct UIScriptChara_o *chara; // x8
  struct UIScriptChara_o *v14; // x22
  unsigned int faceType; // w21
  System_Action_o *v16; // x23

  if ( (byte_4D2E817 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ScriptCharaData_EndLoadAsset__);
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D2E817 = 1;
  }
  this->fields.imageName = imageName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    (int32_t)method,
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
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    IsUseSimpleMeshFigure = ScriptManager__IsUseSimpleMeshFigure(imageName, 0);
  }
  chara = this->fields.chara;
  if ( !chara
    || (((void (__fastcall *)(struct UIScriptChara_o *, _BOOL8, const MethodInfo *))chara->klass->vtable._31_SetUseSimpleMesh.methodPtr)(
          this->fields.chara,
          IsUseSimpleMeshFigure,
          chara->klass->vtable._31_SetUseSimpleMesh.method),
        v14 = this->fields.chara,
        faceType = this->fields.faceType,
        v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptCharaData_EndLoadAsset__, 0),
        !v14) )
  {
    sub_1C942F0(IsUseSimpleMeshFigure, v10);
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
    sub_1C942F0(0, n);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, bool, bool, const MethodInfo *, float, float))chara->klass->vtable._23_SetCutin.methodPtr)(
    chara,
    n,
    isSkip,
    isPause,
    chara->klass->vtable._23_SetCutin.method,
    time,
    mgd);
}


void ScriptCharaData__SetCutout(ScriptCharaData_o *this, float time, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *, float))chara->klass->vtable._25_SetCutout.methodPtr)(
    chara,
    isSkip,
    chara->klass->vtable._25_SetCutout.method,
    time);
}


void ScriptCharaData__SetDepth(ScriptCharaData_o *this, int32_t d, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.defaultDepth = d;
  if ( !chara )
    sub_1C942F0(0, d);
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
    sub_1C942F0(IsDefaultLayer, v12);
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
    sub_1C942F0(0, effectName);
  UIScriptChara__SetEffectEdgeBlur(chara, effectName, color, particleColor, isSkip, isPause, flip, level, thick, 0);
}


void ScriptCharaData__SetEffect_45587108(
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
    sub_1C942F0(IsDefaultLayer, v16);
  v17.fields.y = y;
  v17.fields.z = z;
  v17.fields.x = x;
  UIScriptChara__SetEffect_45722380(chara, n, v17, isSkip, isPause, flip, !IsDefaultLayer, 0);
}


void ScriptCharaData__SetFace(ScriptCharaData_o *this, int32_t type, float fadeTime, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  this->fields.faceType = type;
  if ( !chara )
    sub_1C942F0(0, type);
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
    sub_1C942F0(0, filterName);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))chara->klass->vtable._14_SetFilter.methodPtr)(
    chara,
    filterName,
    chara->klass->vtable._14_SetFilter.method,
    *(long double *)&filterColor,
    *(long double *)&filterColor.fields.g,
    *(long double *)&filterColor.fields.b,
    *(long double *)&filterColor.fields.a);
}


void ScriptCharaData__SetFullScreenScaleType(ScriptCharaData_o *this, int32_t type, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, type);
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

  if ( (byte_4D2E826 & 1) == 0 )
  {
    sub_1C94098(&UIScriptImage_TypeInfo);
    byte_4D2E826 = 1;
  }
  if ( this->fields.kind == 2 )
  {
    chara = this->fields.chara;
    if ( !chara
      || (naturalAligment = UIScriptImage_TypeInfo->_2.naturalAligment,
          chara->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (UIScriptImage_c *)chara->klass->_2.typeHierarchy[naturalAligment - 1] != UIScriptImage_TypeInfo )
    {
      sub_1C942F0(chara, *(_QWORD *)&offsetX);
    }
    UIScriptImage__SetMaskImage((UIScriptImage_o *)chara, offsetX, offsetY, width, height, 0);
  }
}


void ScriptCharaData__SetMaskInteraction(ScriptCharaData_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, maskInteraction);
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
    sub_1C942F0(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))chara->klass->vtable._28_SetMaterial.methodPtr)(
    chara,
    chara->klass->vtable._28_SetMaterial.method);
}


void ScriptCharaData__SetPosition(ScriptCharaData_o *this, int32_t index, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E81A & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81A = 1;
  }
  chara = this->fields.chara;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position = ScriptPosition__GetPosition(index, 0);
  if ( !chara )
    sub_1C942F0(v6, v7);
  UIScriptChara__SetBasePosition(chara, Position, 0);
}


void ScriptCharaData__SetPosition_45583856(ScriptCharaData_o *this, float x, float y, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  UnityEngine_Vector3_o Position_45677228; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E81B & 1) == 0 )
  {
    sub_1C94098(&ScriptPosition_TypeInfo);
    byte_4D2E81B = 1;
  }
  chara = this->fields.chara;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
  Position_45677228 = ScriptPosition__GetPosition_45677228(x, y, 0);
  if ( !chara )
    sub_1C942F0(v8, v9);
  UIScriptChara__SetBasePosition(chara, Position_45677228, 0);
}


void ScriptCharaData__SetPosition_45583988(ScriptCharaData_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__SetBasePosition(chara, v, 0);
}


void ScriptCharaData__SetRelativePosition(ScriptCharaData_o *this, UnityEngine_Vector2_o v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
  UIScriptChara__SetRoll(chara, rollZ, centerOffset, 0);
}


void ScriptCharaData__SetScale(ScriptCharaData_o *this, float v, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__SetScale(chara, v, 0);
}


void ScriptCharaData__SetShadow(ScriptCharaData_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isShadow);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, bool, const MethodInfo *))chara->klass->vtable._15_SetShadow.methodPtr)(
    chara,
    isShadow,
    isSkip,
    chara->klass->vtable._15_SetShadow.method);
}


void ScriptCharaData__SetSortingOrder(ScriptCharaData_o *this, int32_t order, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, order);
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
        const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  ((void (__fastcall *)(struct UIScriptChara_o *, System_String_o *, bool, bool, const MethodInfo *, long double, long double, long double, float, long double, long double, long double, long double))chara->klass->vtable._27_SetSpecialEffect.methodPtr)(
    chara,
    n,
    isSkip,
    isPause,
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
    sub_1C942F0(0, method);
  ((void (__fastcall *)(struct UIScriptChara_o *, __int64, const MethodInfo *))chara->klass->vtable._18_SetDepth.methodPtr)(
    chara,
    9,
    chara->klass->vtable._18_SetDepth.method);
}


void ScriptCharaData__SetTalkMask(ScriptCharaData_o *this, bool isMask, const MethodInfo *method)
{
  struct UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isMask);
  ((void (__fastcall *)(struct UIScriptChara_o *, bool, const MethodInfo *))chara->klass->vtable._16_SetTalkMask.methodPtr)(
    chara,
    isMask,
    chara->klass->vtable._16_SetTalkMask.method);
}


void ScriptCharaData__SetTalkName(ScriptCharaData_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.talkName = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.talkName, (int32_t)name, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C942F0(0, method);
  UIScriptChara__Shake(chara, duration, cycle, x, y, 0);
}


void ScriptCharaData__ShakeStop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__Shake(chara, 0.0, 0.0, 0.0, 0.0, 0);
}


void ScriptCharaData__StartRoll(ScriptCharaData_o *this, float duration, float rollZ, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, rollAxis);
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
    sub_1C942F0(0, method);
  UIScriptChara__StartRollEx(chara, duration, rollZ, centerOffset, 0);
}


bool ScriptCharaData__StopBackEffect(ScriptCharaData_o *this, bool isSkip, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  return UIScriptChara__StopBackEffect(chara, isSkip, 0);
}


bool ScriptCharaData__StopBackEffect_45587872(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__StopBackEffect_45724528(chara, n, isSkip, 0);
}


void ScriptCharaData__StopCut(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__StopSpecialEffect(chara, 0);
}


bool ScriptCharaData__StopEffect(
        ScriptCharaData_o *this,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isSkip);
  return UIScriptChara__StopEffect(chara, isSkip, markKey, 0);
}


bool ScriptCharaData__StopEffect_45587380(
        ScriptCharaData_o *this,
        System_String_o *n,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  return UIScriptChara__StopEffect_45723064(chara, n, isSkip, markKey, 0);
}


void ScriptCharaData__StopMoveRelativePositionLoop(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__StopMoveRelativePositionLoop(chara, 0);
}


void ScriptCharaData__StopRollAxisLoop(ScriptCharaData_o *this, bool isFastPlay, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, isFastPlay);
  UIScriptChara__StopRollAxisLoop(chara, isFastPlay, 0);
}


void ScriptCharaData__StopSpecialEffect(ScriptCharaData_o *this, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, method);
  UIScriptChara__StopSpecialEffect(chara, 0);
}


void ScriptCharaData__StopSpecialEffect_45586828(ScriptCharaData_o *this, System_String_o *n, const MethodInfo *method)
{
  UIScriptChara_o *chara; // x0

  chara = this->fields.chara;
  if ( !chara )
    sub_1C942F0(0, n);
  UIScriptChara__StopSpecialEffect_45721828(chara, n, 0);
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

  if ( (byte_4D2E825 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____79116888);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E825 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( !go )
      goto LABEL_20;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    go,
                                    1,
                                    (const MethodInfo_31F5430 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____79116888);
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
          sub_1C942F8(ComponentsInChildren_object);
        v9 = v7->m_Items[v8];
        if ( !v9 )
          break;
        monitor = (UnityEngine_Object_o *)v9[21].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C942F0(ComponentsInChildren_object, v5);
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