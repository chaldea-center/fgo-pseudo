void SoundCheckMenu___ctor(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEBCE7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CEBCE7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.cpkNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cpkNameList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
  this->fields.exceptionData = (struct System_Collections_Generic_Dictionary_int__List_string___o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.exceptionData, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void SoundCheckMenu__CheckNumDispWrite(SoundCheckMenu_o *this, int32_t num, int32_t max, const MethodInfo *method)
{
  UILabel_o *checkNumDisp; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v10 = max;
  v11 = num;
  if ( (byte_4CEBCE3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_4402/*"CheckNum : "*/);
    byte_4CEBCE3 = 1;
  }
  checkNumDisp = this->fields.checkNumDisp;
  v6 = System_Int32__ToString((int32_t)&v11, 0);
  v7 = System_Int32__ToString((int32_t)&v10, 0);
  v8 = System_String__Concat_64217180(
         (System_String_o *)StringLiteral_4402/*"CheckNum : "*/,
         v6,
         (System_String_o *)StringLiteral_1042/*"/"*/,
         v7,
         0);
  if ( !checkNumDisp )
    sub_1C7BD40(v8, v9);
  UILabel__set_text(checkNumDisp, v8, 0);
}


void SoundCheckMenu__Close(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SoundCheckMenu_o *v5; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CEBCD8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    byte_4CEBCD8 = 1;
  }
  if ( this->fields.sceneStart && !this->fields.nextCheck )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3085/*"Battle"*/, v6) )
    {
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_16;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)gameObject, (System_String_o *)StringLiteral_3085/*"Battle"*/, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0);
        TransformHelper__DestroyChildren(transform, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)gameObject, 0);
              this->fields.sceneStart = 0;
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C7BD40(gameObject, v4);
  }
}


bool SoundCheckMenu__CueSheetCheck(SoundCheckMenu_o *this, System_String_o *SheetName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  bool v9; // w21
  int v10; // w22
  __int64 v11; // x8

  if ( (byte_4CEBCE4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEBCE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  klass = Instance[2].klass;
  if ( !klass )
    goto LABEL_13;
  element_class = klass->_1.element_class;
  if ( !element_class )
    goto LABEL_13;
  namespaze = (int)element_class->_1.namespaze;
  v9 = namespaze > 0;
  if ( namespaze >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)namespaze )
        sub_1C7BD48(Instance);
      v11 = *((_QWORD *)&element_class->_1.byval_arg.data + v10);
      if ( !v11 )
        break;
      Instance = (Il2CppObject *)System_String__op_Equality(*(System_String_o **)(v11 + 16), SheetName, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        namespaze = (int)element_class->_1.namespaze;
        v9 = ++v10 < namespaze;
        if ( v10 < namespaze )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C7BD40(Instance, v5);
  }
  return v9;
}


void SoundCheckMenu__ErrorOutput(SoundCheckMenu_o *this, System_String_o *text, const MethodInfo *method)
{
  SoundCheckMenu_o *v4; // x19
  int v5; // w8
  unsigned __int64 v6; // t2
  Il2CppObject *resultLabelSeed; // x22
  UnityEngine_Component_o *v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o **p_resultLabel; // x23
  SoundCheckMenu_o *v11; // x24
  UnityEngine_GameObject_o *v12; // x0
  float LocalPositionY; // s0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UILabel_o *resultLabel; // x22
  System_String_o *v21; // x0
  UILabel_o *errorCntLabel; // x20
  System_String_o *v23; // x0

  v4 = this;
  if ( (byte_4CEBCE2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    this = (SoundCheckMenu_o *)sub_1C7BAE8(&StringLiteral_6192/*"ErrorCount : "*/);
    byte_4CEBCE2 = 1;
  }
  v5 = v4->fields.errorCnt + 1;
  HIDWORD(v6) = -1030792151 * v5 + 85899344;
  LODWORD(v6) = HIDWORD(v6);
  v4->fields.errorCnt = v5;
  if ( (unsigned int)(v6 >> 2) <= 0x28F5C28 )
  {
    resultLabelSeed = (Il2CppObject *)v4->fields.resultLabelSeed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SoundCheckMenu_o *)UnityEngine_Object__Instantiate_object_(
                                 resultLabelSeed,
                                 (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
    if ( !this )
      goto LABEL_14;
    v8 = (UnityEngine_Component_o *)this;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4->fields.scrollView, 0);
    this = (SoundCheckMenu_o *)UnityEngine_Component__get_gameObject(v8, 0);
    p_resultLabel = &v4->fields.resultLabel;
    if ( !v4->fields.resultLabel
      || (v11 = this,
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.resultLabel, 0),
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(v12, 0),
          !*p_resultLabel) )
    {
LABEL_14:
      sub_1C7BD40(this, text);
    }
    GameObjectExtensions__SetLocalPositionY(
      (UnityEngine_GameObject_o *)v11,
      (float)(LocalPositionY - (float)(*p_resultLabel)->fields.mHeight) + (float)(*p_resultLabel)->fields.mFontSize,
      0);
    *p_resultLabel = (struct UILabel_o *)v8;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.resultLabel, (int32_t)v8, v14, v15, v16, v17, v18, v19);
  }
  resultLabel = v4->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_14;
  v21 = System_String__Concat_64215176(resultLabel->fields.mText, text, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(resultLabel, v21, 0);
  errorCntLabel = v4->fields.errorCntLabel;
  v23 = System_Int32__ToString((int)v4 + 108, 0);
  this = (SoundCheckMenu_o *)System_String__Concat_64176912((System_String_o *)StringLiteral_6192/*"ErrorCount : "*/, v23, 0);
  if ( !errorCntLabel )
    goto LABEL_14;
  UILabel__set_text(errorCntLabel, (System_String_o *)this, 0);
  this = (SoundCheckMenu_o *)v4->fields.scrollView;
  if ( !this )
    goto LABEL_14;
  UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
}


bool SoundCheckMenu__IsReplaceable(SoundCheckMenu_o *this, System_String_o *groupId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v6; // x0
  int32_t Value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEBCDC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8563/*"MASHU_SVT_ID1"*/);
    sub_1C7BAE8(&StringLiteral_8564/*"MASHU_SVT_ID2"*/);
    byte_4CEBCDC = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8563/*"MASHU_SVT_ID1"*/, 0);
  v4 = System_Int32__ToString((int32_t)&Value, 0);
  if ( System_String__op_Equality(groupId, v4, 0) )
  {
    return 1;
  }
  else
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8564/*"MASHU_SVT_ID2"*/, 0);
    v6 = System_Int32__ToString((int32_t)&Value, 0);
    return System_String__op_Equality(groupId, v6, 0);
  }
}


void SoundCheckMenu__OnButtonClick(
        SoundCheckMenu_o *this,
        UnityEngine_GameObject_o *ButtonObj,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *name; // x20
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4CEBCE1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24104/*"svtVoiceButton"*/);
    sub_1C7BAE8(&StringLiteral_9367/*"NPButton"*/);
    sub_1C7BAE8(&StringLiteral_16818/*"allCpkVoiceButton"*/);
    sub_1C7BAE8(&StringLiteral_3118/*"BattleEffectButton"*/);
    sub_1C7BAE8(&StringLiteral_2192/*"AllButton"*/);
    byte_4CEBCE1 = 1;
  }
  if ( !this->fields.nextCheck && this->fields.sceneStart )
  {
    SoundCheckMenu__ValueReset(this, (const MethodInfo *)ButtonObj);
    if ( !ButtonObj )
      sub_1C7BD40(v5, v6);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ButtonObj, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_2192/*"AllButton"*/, 0) )
    {
      v9 = SoundCheckMenu__allCheck(this, v8);
LABEL_17:
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v9, 0);
      return;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3118/*"BattleEffectButton"*/, 0) )
    {
      v9 = SoundCheckMenu__battleEffectCheck(this, v10);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9367/*"NPButton"*/, 0) )
    {
      v9 = SoundCheckMenu__npCheck(this, v11);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_24104/*"svtVoiceButton"*/, 0) )
    {
      v9 = SoundCheckMenu__svtVoiceCheck(this, v12);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_16818/*"allCpkVoiceButton"*/, 0) )
    {
      v9 = SoundCheckMenu__cueNameMstCheck(this, v13);
      goto LABEL_17;
    }
  }
}


void SoundCheckMenu__Open(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SoundCheckMenu_o *v5; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CEBCD7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu__Open_b__16_0__);
    sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    byte_4CEBCD7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3085/*"Battle"*/, v6) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundCheckMenu__Open_b__16_0__, 0);
  if ( !Instance )
LABEL_7:
    sub_1C7BD40(gameObject, v4);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)StringLiteral_3085/*"Battle"*/, v8, 1, 0);
}


void SoundCheckMenu__Start(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SoundCheckMenu__createExceptionList(this, method);
  SoundCheckMenu__cpkNameListup(this, v3);
}


void SoundCheckMenu__StartMenu(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  SoundCheckMenu__Open(this, v3);
}


void SoundCheckMenu__Update(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SoundCheckMenu__CheckNumDispWrite(this, this->fields.checkCnt, this->fields.checkMax, v2);
}


void SoundCheckMenu__ValueReset(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *resultLabelSeed; // x20
  struct UILabel_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEBCE0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6193/*"ErrorCount : 0"*/);
    byte_4CEBCE0 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0);
  if ( !scrollView )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0);
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)scrollView,
                                            0);
  if ( !scrollView )
    goto LABEL_14;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)scrollView, 0);
  resultLabelSeed = (Il2CppObject *)this->fields.resultLabelSeed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                            resultLabelSeed,
                                            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !scrollView )
    goto LABEL_14;
  v6 = (struct UILabel_o *)scrollView;
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.scrollView, 0);
  this->fields.resultLabel = v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.resultLabel, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  scrollView = (UnityEngine_Component_o *)this->fields.errorCntLabel;
  this->fields.nextCheck = 1;
  this->fields.checkCnt = 0;
  this->fields.errorCnt = 0;
  if ( !scrollView
    || (UILabel__set_text((UILabel_o *)scrollView, (System_String_o *)StringLiteral_6193/*"ErrorCount : 0"*/, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
LABEL_14:
    sub_1C7BD40(scrollView, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0);
}


void SoundCheckMenu___Open_b__16_0(SoundCheckMenu_o *this, const MethodInfo *method)
{
  this->fields.sceneStart = 1;
}


System_Collections_IEnumerator_o *SoundCheckMenu__allCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCDF & 1) == 0 )
  {
    sub_1C7BAE8(&SoundCheckMenu__allCheck_d__24_TypeInfo);
    byte_4CEBCDF = 1;
  }
  v3 = sub_1C7BD34(SoundCheckMenu__allCheck_d__24_TypeInfo);
  SoundCheckMenu__allCheck_d__24___ctor((SoundCheckMenu__allCheck_d__24_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__battleEffectCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCDE & 1) == 0 )
  {
    sub_1C7BAE8(&SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
    byte_4CEBCDE = 1;
  }
  v3 = sub_1C7BD34(SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
  SoundCheckMenu__battleEffectCheck_d__23___ctor((SoundCheckMenu__battleEffectCheck_d__23_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu__cpkNameListup(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_String_o *CpkPath; // x0
  Il2CppObject *Files_65037232; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *cpkNameList; // x8
  int32_t size; // w2
  Il2CppObject *v8; // x20
  int v9; // w9
  void *monitor; // x8
  unsigned __int64 v11; // x22
  System_String_o *v12; // x21
  System_String_o *FileNameWithoutExtension; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 v23; // x11
  Il2CppObject *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4CEBCD9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_793/*"*.cpk.bytes"*/);
    byte_4CEBCD9 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  CpkPath = SoundManager__getCpkPath(0);
  Files_65037232 = (Il2CppObject *)System_IO_Directory__GetFiles_65037232(
                                     CpkPath,
                                     (System_String_o *)StringLiteral_793/*"*.cpk.bytes"*/,
                                     1,
                                     0);
  cpkNameList = this->fields.cpkNameList;
  if ( !cpkNameList )
    goto LABEL_21;
  size = cpkNameList->fields._size;
  v8 = Files_65037232;
  v9 = cpkNameList->fields._version + 1;
  cpkNameList->fields._size = 0;
  cpkNameList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)cpkNameList->fields._items, 0, size, 0);
  if ( !v8 )
    goto LABEL_21;
  monitor = v8[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)monitor )
        sub_1C7BD48(Files_65037232);
      v12 = (System_String_o *)*((_QWORD *)&v8[2].klass + v11);
      if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
      FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v12, 0);
      Files_65037232 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(FileNameWithoutExtension, 0);
      v20 = (System_Collections_Generic_List_object__o *)this->fields.cpkNameList;
      if ( !v20 )
        break;
      items = v20->fields._items;
      v22 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( !items )
        break;
      v23 = v20->fields._size;
      v24 = Files_65037232;
      if ( (unsigned int)v23 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          Files_65037232,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + v23;
        v20->fields._size = v23 + 1;
        v25[4] = (Il2CppClass *)v24;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v24, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(monitor) = v8[1].monitor;
      if ( (__int64)++v11 >= (int)monitor )
        return;
    }
LABEL_21:
    sub_1C7BD40(Files_65037232, v5);
  }
}


void SoundCheckMenu__createExceptionList(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *Item; // x0
  Il2CppObject *v4; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  unsigned __int64 v7; // x29
  int32_t v8; // w21
  struct System_Collections_Generic_Dictionary_int__List_string___o *exceptionData; // x22
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  _QWORD *v17; // x9
  struct System_Int32_array *buckets; // x8
  __int64 entries_low; // x10
  __int64 v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _QWORD *v27; // x9
  struct System_Int32_array *v28; // x8
  __int64 v29; // x10
  __int64 v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _QWORD *v37; // x9
  struct System_Int32_array *v38; // x8
  __int64 v39; // x10
  __int64 v40; // x8
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  _QWORD *v47; // x9
  struct System_Int32_array *v48; // x8
  __int64 v49; // x10
  __int64 v50; // x8
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  _QWORD *v57; // x9
  struct System_Int32_array *v58; // x8
  __int64 v59; // x10
  __int64 v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  _QWORD *v67; // x9
  struct System_Int32_array *v68; // x8
  __int64 v69; // x10
  __int64 v70; // x8
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  _QWORD *v77; // x9
  struct System_Int32_array *v78; // x8
  __int64 v79; // x10
  __int64 v80; // x8
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  _QWORD *v87; // x9
  struct System_Int32_array *v88; // x8
  __int64 v89; // x10
  __int64 v90; // x8
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  _QWORD *v97; // x9
  struct System_Int32_array *v98; // x8
  __int64 v99; // x10
  __int64 v100; // x8
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  _QWORD *v107; // x9
  struct System_Int32_array *v108; // x8
  __int64 v109; // x10
  __int64 v110; // x8
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  _QWORD *v117; // x9
  struct System_Int32_array *v118; // x8
  __int64 v119; // x10
  __int64 v120; // x8
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  _QWORD *v127; // x9
  struct System_Int32_array *v128; // x8
  __int64 v129; // x10
  __int64 v130; // x8
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  _QWORD *v137; // x9
  struct System_Int32_array *v138; // x8
  __int64 v139; // x10
  __int64 v140; // x8
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  _QWORD *v147; // x9
  struct System_Int32_array *v148; // x8
  __int64 v149; // x10
  __int64 v150; // x8
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  _QWORD *v157; // x9
  struct System_Int32_array *v158; // x8
  __int64 v159; // x10
  __int64 v160; // x8
  struct System_Collections_Generic_Dictionary_int__List_string___o *v161; // x20
  System_Collections_Generic_List_object__o *v162; // x21
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  _QWORD *v169; // x9
  struct System_Int32_array *v170; // x8
  __int64 v171; // x10
  __int64 v172; // x8
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  _QWORD *v179; // x9
  struct System_Int32_array *v180; // x8
  __int64 v181; // x10
  __int64 v182; // x8

  if ( (byte_4CEBCE5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_1151/*"0_B091"*/);
    sub_1C7BAE8(&StringLiteral_1148/*"0_B031"*/);
    sub_1C7BAE8(&StringLiteral_1156/*"0_B161"*/);
    sub_1C7BAE8(&StringLiteral_1152/*"0_B121"*/);
    sub_1C7BAE8(&StringLiteral_1155/*"0_B151"*/);
    sub_1C7BAE8(&StringLiteral_1150/*"0_B081"*/);
    sub_1C7BAE8(&StringLiteral_1160/*"0_B201"*/);
    sub_1C7BAE8(&StringLiteral_1158/*"0_B181"*/);
    sub_1C7BAE8(&StringLiteral_1145/*"0_"*/);
    sub_1C7BAE8(&StringLiteral_1147/*"0_B021"*/);
    sub_1C7BAE8(&StringLiteral_1157/*"0_B171"*/);
    sub_1C7BAE8(&StringLiteral_1149/*"0_B041"*/);
    sub_1C7BAE8(&StringLiteral_1153/*"0_B131"*/);
    sub_1C7BAE8(&StringLiteral_1154/*"0_B141"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_1159/*"0_B191"*/);
    sub_1C7BAE8(&StringLiteral_1146/*"0_B011"*/);
    byte_4CEBCE5 = 1;
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BB90(int___TypeInfo, 2);
  if ( !Item )
    goto LABEL_114;
  entries = Item->fields._entries;
  v6 = Item;
  if ( !(_DWORD)entries )
    goto LABEL_115;
  Item->fields._count = 600700;
  if ( (_DWORD)entries == 1 )
    goto LABEL_115;
  Item->fields._freeList = 600710;
  if ( (int)entries >= 1 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)entries )
    {
      v8 = *(&v6->fields._count + v7);
      exceptionData = this->fields.exceptionData;
      v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !exceptionData )
        goto LABEL_114;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        (System_Collections_Generic_Dictionary_int__object__o *)exceptionData,
        v8,
        (Il2CppObject *)v10,
        (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1146/*"0_B011"*/;
      buckets = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !buckets )
        goto LABEL_114;
      entries_low = SLODWORD(Item->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = (__int64)buckets + 8 * entries_low;
        LODWORD(Item->fields._entries) = entries_low + 1;
        *(_QWORD *)(v20 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v4, v11, v12, v13, v14, v15, v16);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v27 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1147/*"0_B021"*/;
      v28 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v28 )
        goto LABEL_114;
      v29 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = (__int64)v28 + 8 * v29;
        LODWORD(Item->fields._entries) = v29 + 1;
        *(_QWORD *)(v30 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v4, v21, v22, v23, v24, v25, v26);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1148/*"0_B031"*/;
      v38 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v38 )
        goto LABEL_114;
      v39 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v39 >= LODWORD(v38->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = (__int64)v38 + 8 * v39;
        LODWORD(Item->fields._entries) = v39 + 1;
        *(_QWORD *)(v40 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 32), (int32_t)v4, v31, v32, v33, v34, v35, v36);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v47 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1149/*"0_B041"*/;
      v48 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v48 )
        goto LABEL_114;
      v49 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v49 >= LODWORD(v48->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (__int64)v48 + 8 * v49;
        LODWORD(Item->fields._entries) = v49 + 1;
        *(_QWORD *)(v50 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v50 + 32), (int32_t)v4, v41, v42, v43, v44, v45, v46);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v57 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1150/*"0_B081"*/;
      v58 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v58 )
        goto LABEL_114;
      v59 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v59 >= LODWORD(v58->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = (__int64)v58 + 8 * v59;
        LODWORD(Item->fields._entries) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v60 + 32), (int32_t)v4, v51, v52, v53, v54, v55, v56);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v67 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1151/*"0_B091"*/;
      v68 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v68 )
        goto LABEL_114;
      v69 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v69 >= LODWORD(v68->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = (__int64)v68 + 8 * v69;
        LODWORD(Item->fields._entries) = v69 + 1;
        *(_QWORD *)(v70 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v70 + 32), (int32_t)v4, v61, v62, v63, v64, v65, v66);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v77 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1152/*"0_B121"*/;
      v78 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v78 )
        goto LABEL_114;
      v79 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v79 >= LODWORD(v78->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = (__int64)v78 + 8 * v79;
        LODWORD(Item->fields._entries) = v79 + 1;
        *(_QWORD *)(v80 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v80 + 32), (int32_t)v4, v71, v72, v73, v74, v75, v76);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v87 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1153/*"0_B131"*/;
      v88 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v88 )
        goto LABEL_114;
      v89 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v89 >= LODWORD(v88->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = (__int64)v88 + 8 * v89;
        LODWORD(Item->fields._entries) = v89 + 1;
        *(_QWORD *)(v90 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v90 + 32), (int32_t)v4, v81, v82, v83, v84, v85, v86);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v97 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1154/*"0_B141"*/;
      v98 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v98 )
        goto LABEL_114;
      v99 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v99 >= LODWORD(v98->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = (__int64)v98 + 8 * v99;
        LODWORD(Item->fields._entries) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v100 + 32), (int32_t)v4, v91, v92, v93, v94, v95, v96);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v107 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1155/*"0_B151"*/;
      v108 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v108 )
        goto LABEL_114;
      v109 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v109 >= LODWORD(v108->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = (__int64)v108 + 8 * v109;
        LODWORD(Item->fields._entries) = v109 + 1;
        *(_QWORD *)(v110 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v110 + 32), (int32_t)v4, v101, v102, v103, v104, v105, v106);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v117 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1156/*"0_B161"*/;
      v118 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v118 )
        goto LABEL_114;
      v119 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v119 >= LODWORD(v118->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = (__int64)v118 + 8 * v119;
        LODWORD(Item->fields._entries) = v119 + 1;
        *(_QWORD *)(v120 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v120 + 32), (int32_t)v4, v111, v112, v113, v114, v115, v116);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v127 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1157/*"0_B171"*/;
      v128 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v128 )
        goto LABEL_114;
      v129 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v129 >= LODWORD(v128->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = (__int64)v128 + 8 * v129;
        LODWORD(Item->fields._entries) = v129 + 1;
        *(_QWORD *)(v130 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v130 + 32), (int32_t)v4, v121, v122, v123, v124, v125, v126);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v137 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1158/*"0_B181"*/;
      v138 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v138 )
        goto LABEL_114;
      v139 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v139 >= LODWORD(v138->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
      }
      else
      {
        v140 = (__int64)v138 + 8 * v139;
        LODWORD(Item->fields._entries) = v139 + 1;
        *(_QWORD *)(v140 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v140 + 32), (int32_t)v4, v131, v132, v133, v134, v135, v136);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v147 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1159/*"0_B191"*/;
      v148 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v148 )
        goto LABEL_114;
      v149 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v149 >= LODWORD(v148->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
      }
      else
      {
        v150 = (__int64)v148 + 8 * v149;
        LODWORD(Item->fields._entries) = v149 + 1;
        *(_QWORD *)(v150 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v150 + 32), (int32_t)v4, v141, v142, v143, v144, v145, v146);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v157 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1160/*"0_B201"*/;
      v158 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v158 )
        goto LABEL_114;
      v159 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v159 >= LODWORD(v158->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
      }
      else
      {
        v160 = (__int64)v158 + 8 * v159;
        LODWORD(Item->fields._entries) = v159 + 1;
        *(_QWORD *)(v160 + 32) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v160 + 32), (int32_t)v4, v151, v152, v153, v154, v155, v156);
      }
      LODWORD(entries) = v6->fields._entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_101;
    }
LABEL_115:
    sub_1C7BD48(Item);
  }
LABEL_101:
  v161 = this->fields.exceptionData;
  v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v162,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v161 )
    goto LABEL_114;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v161,
    602300,
    (Il2CppObject *)v162,
    (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item )
    goto LABEL_114;
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                   Item,
                                                                   602300,
                                                                   (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
  if ( !Item )
    goto LABEL_114;
  v169 = Method_System_Collections_Generic_List_string__Add__;
  v4 = (Il2CppObject *)StringLiteral_1145/*"0_"*/;
  v170 = Item->fields._buckets;
  ++HIDWORD(Item->fields._entries);
  if ( !v170 )
    goto LABEL_114;
  v171 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v171 >= LODWORD(v170->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
  }
  else
  {
    v172 = (__int64)v170 + 8 * v171;
    LODWORD(Item->fields._entries) = v171 + 1;
    *(_QWORD *)(v172 + 32) = v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v172 + 32), (int32_t)v4, v163, v164, v165, v166, v167, v168);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         Item,
                                                                         602300,
                                                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__)) == 0
    || (v179 = Method_System_Collections_Generic_List_string__Add__,
        v4 = (Il2CppObject *)StringLiteral_1/*""*/,
        v180 = Item->fields._buckets,
        ++HIDWORD(Item->fields._entries),
        !v180) )
  {
LABEL_114:
    sub_1C7BD40(Item, v4);
  }
  v181 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v181 >= LODWORD(v180->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
  }
  else
  {
    v182 = (__int64)v180 + 8 * v181;
    LODWORD(Item->fields._entries) = v181 + 1;
    *(_QWORD *)(v182 + 32) = v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v182 + 32), (int32_t)v4, v173, v174, v175, v176, v177, v178);
  }
}


System_Collections_IEnumerator_o *SoundCheckMenu__cueNameMstCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCDA & 1) == 0 )
  {
    sub_1C7BAE8(&SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
    byte_4CEBCDA = 1;
  }
  v3 = sub_1C7BD34(SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
  SoundCheckMenu__cueNameMstCheck_d__19___ctor((SoundCheckMenu__cueNameMstCheck_d__19_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
bool SoundCheckMenu__isExceptionCheck(
        SoundCheckMenu_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *exceptionData; // x0

  if ( (byte_4CEBCE6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CEBCE6 = 1;
  }
  exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !exceptionData )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         exceptionData,
         svtId,
         (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__) )
  {
    exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
    if ( exceptionData )
    {
      exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                exceptionData,
                                                                                svtId,
                                                                                (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( exceptionData )
        return System_Collections_Generic_List_object___Contains(
                 (System_Collections_Generic_List_object__o *)exceptionData,
                 (Il2CppObject *)voiceId,
                 (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__);
    }
LABEL_9:
    sub_1C7BD40(exceptionData, *(_QWORD *)&svtId);
  }
  return 0;
}


System_Collections_IEnumerator_o *SoundCheckMenu__npCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCDB & 1) == 0 )
  {
    sub_1C7BAE8(&SoundCheckMenu__npCheck_d__20_TypeInfo);
    byte_4CEBCDB = 1;
  }
  v3 = sub_1C7BD34(SoundCheckMenu__npCheck_d__20_TypeInfo);
  SoundCheckMenu__npCheck_d__20___ctor((SoundCheckMenu__npCheck_d__20_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__svtVoiceCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCDD & 1) == 0 )
  {
    sub_1C7BAE8(&SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
    byte_4CEBCDD = 1;
  }
  v3 = sub_1C7BD34(SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
  SoundCheckMenu__svtVoiceCheck_d__22___ctor((SoundCheckMenu__svtVoiceCheck_d__22_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu___c__DisplayClass19_0___ctor(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass19_0___cueNameMstCheck_b__0(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_String_o *sequencePath; // x20
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEBCF4 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__);
    byte_4CEBCF4 = 1;
  }
  sequencePath = this->fields.sequencePath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(sequencePath, 0) )
  {
    _9__1 = this->fields.__9__1;
    v5 = this->fields.sequencePath;
    if ( !_9__1 )
    {
      _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
    }
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v5, _9__1, 1, 0);
  }
  else
  {
    this->fields.isLoad = 0;
  }
}


void SoundCheckMenu___c__DisplayClass19_0___cueNameMstCheck_b__1(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct AssetData_o **p_nobleAssetData; // x19

  this->fields.nobleAssetData = data;
  p_nobleAssetData = &this->fields.nobleAssetData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.nobleAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_nobleAssetData - 8) = 0;
}


void SoundCheckMenu___c__DisplayClass20_0___ctor(
        SoundCheckMenu___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___ctor(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___npCheck_b__0(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v22; // x19
  Il2CppObject *Item; // x21
  System_Action_o *v24; // x22

  if ( (byte_4CEBCF5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
    byte_4CEBCF5 = 1;
  }
  v5 = sub_1C7BD34(SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.nobleSequenceData = data;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)data, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v5 + 16) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = p_fields->CS___8__locals1;
  if ( !CS___8__locals1
    || (v7 = *(unsigned int *)(v5 + 16),
        v22 = (SoundManager_o *)Instance,
        Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath,
        *(_DWORD *)(v5 + 16) = v7 + 1,
        !Instance)
    || (Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v7,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__),
        v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(v24, (Il2CppObject *)v5, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__, 0),
        !v22) )
  {
LABEL_8:
    sub_1C7BD40(Instance, v7);
  }
  SoundManager__LoadAudioAssetStorage(v22, (System_String_o *)Item, v24, 1, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___npCheck_b__3(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEnd = 1;
}


void SoundCheckMenu___c__DisplayClass20_2___ctor(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_2___npCheck_b__1(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v7; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEBCF6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__);
    byte_4CEBCF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_10;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v9 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
LABEL_10:
    sub_1C7BD40(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v9, _9__2, 1, 0);
}


void SoundCheckMenu___c__DisplayClass20_2___npCheck_b__2(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v7; // x19
  struct SoundCheckMenu___c__DisplayClass20_1_o *v8; // x22
  System_Action_o *_9__3; // x21
  System_String_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEBCF7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__);
    byte_4CEBCF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_11;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_11;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_11;
  _9__3 = v8->fields.__9__3;
  v10 = (System_String_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v8, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__, 0);
    v8->fields.__9__3 = _9__3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v7 )
LABEL_11:
    sub_1C7BD40(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v10, _9__3, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_0___ctor(
        SoundCheckMenu___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___ctor(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__0(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  SoundManager_o *v6; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEBCF8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__);
    byte_4CEBCF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__1 = this->fields.__9__1;
  v8 = (System_String_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_9:
    sub_1C7BD40(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v8, _9__1, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__1(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  SoundManager_o *v6; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEBCF9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__);
    byte_4CEBCF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v8 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_9:
    sub_1C7BD40(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v8, _9__2, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__2(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEnd = 1;
}


void SoundCheckMenu__allCheck_d__24___ctor(
        SoundCheckMenu__allCheck_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__allCheck_d__24__MoveNext(SoundCheckMenu__allCheck_d__24_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  struct SoundCheckMenu_o *_4__this; // x20
  System_Collections_IEnumerator_o *v11; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  Il2CppObject **v15; // x19
  System_Collections_IEnumerator_o *v16; // x0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_9;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v11 = SoundCheckMenu__battleEffectCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)_4__this, v11, 0);
LABEL_9:
        if ( _4__this->fields.nextCheck )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        _4__this->fields.nextCheck = 1;
        _4__this->fields.checkCnt = 0;
        v14 = SoundCheckMenu__npCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)_4__this, v14, 0);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1C7BD40(this, method);
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
LABEL_12:
  if ( _4__this->fields.nextCheck )
  {
    this->fields.__2__current = 0;
    v15 = &this->fields.__2__current;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v15, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v15 - 2) = 2;
    return 1;
  }
  _4__this->fields.nextCheck = 1;
  _4__this->fields.checkCnt = 0;
  v16 = SoundCheckMenu__svtVoiceCheck(_4__this, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0);
  return 0;
}


Il2CppObject *SoundCheckMenu__allCheck_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__allCheck_d__24__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundCheckMenu__allCheck_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SoundCheckMenu__allCheck_d__24__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__allCheck_d__24__System_IDisposable_Dispose(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__battleEffectCheck_d__23___ctor(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__battleEffectCheck_d__23__MoveNext(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundCheckMenu_o *_4__this; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w8
  int32_t v27; // w20
  EffectEntity_o *v28; // x8
  DataManager_o *v29; // x21
  struct EffectEntity_array *_7__wrap2; // x9
  int32_t max_length; // w10
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CEBCFA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_22498/*"not exist : "*/);
    sub_1C7BAE8(&StringLiteral_81/*"\ntarget : Battle\n"*/);
    sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    byte_4CEBCFA = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v27 = -1;
LABEL_33:
    this->fields.__1__state = v27;
    return result;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_20;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EffectMaster___),
          this->fields._effectMst_5__2 = (struct EffectMaster_o *)MasterData_object,
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields._effectMst_5__2,
            (int32_t)MasterData_object,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (Instance = (DataManager_o *)this->fields._effectMst_5__2) == 0)
      || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (const MethodInfo_342D580 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__)) == 0
      || !_4__this )
    {
LABEL_35:
      sub_1C7BD40(Instance, method);
    }
    _4__this->fields.checkMax = (int32_t)Instance->fields.m_CancellationTokenSource;
    this->fields.__7__wrap2 = (struct EffectEntity_array *)Instance;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap2,
      (int32_t)Instance,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = 0;
    for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v26 )
    {
      Instance = (DataManager_o *)&this->fields.__7__wrap2;
      _7__wrap2 = this->fields.__7__wrap2;
      if ( !_7__wrap2 )
        goto LABEL_35;
      max_length = _7__wrap2->max_length;
      if ( v26 >= max_length )
      {
        Instance->klass = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)Instance, 0, v2, v3, v4, v5, v6, v7);
        if ( !_4__this )
          goto LABEL_35;
        _4__this->fields.nextCheck = 0;
        v27 = 2;
        goto LABEL_32;
      }
      if ( v26 >= (unsigned int)max_length )
        sub_1C7BD48(Instance);
      v28 = _7__wrap2->m_Items[v26];
      if ( !v28 )
        goto LABEL_35;
      Instance = (DataManager_o *)this->fields._effectMst_5__2;
      if ( !Instance )
        goto LABEL_35;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v28->fields.id,
                                    (const MethodInfo_342E2FC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_35;
      v29 = Instance;
      Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      if ( !_4__this )
        goto LABEL_35;
      ++_4__this->fields.checkCnt;
LABEL_20:
      v26 = this->fields.__7__wrap3 + 1;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)SoundManager__IsExistsSound(
                                  (SoundManager_o *)Instance,
                                  (System_String_o *)StringLiteral_3085/*"Battle"*/,
                                  *(System_String_o **)&v29->fields._DispLog,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      Instance = (DataManager_o *)System_String__Concat_64215176(
                                    (System_String_o *)StringLiteral_22498/*"not exist : "*/,
                                    *(System_String_o **)&v29->fields._DispLog,
                                    (System_String_o *)StringLiteral_81/*"\ntarget : Battle\n"*/,
                                    0);
      if ( !_4__this )
        goto LABEL_35;
      SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, 0);
    }
    ++_4__this->fields.checkCnt;
    v27 = 1;
LABEL_32:
    this->fields.__2__current = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v32, v33, v34, v35, v36, v37);
    result = 1;
    goto LABEL_33;
  }
  return result;
}


Il2CppObject *SoundCheckMenu__battleEffectCheck_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__battleEffectCheck_d__23__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundCheckMenu__battleEffectCheck_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SoundCheckMenu__battleEffectCheck_d__23__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__battleEffectCheck_d__23__System_IDisposable_Dispose(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__cueNameMstCheck_d__19___ctor(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__cueNameMstCheck_d__19__MoveNext(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 Instance; // x0
  int32_t v10; // w20
  struct SoundCheckMenu_o *v11; // x20
  Il2CppObject *MasterData_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Object_array *Entitys; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Collections_Generic_List_string__o *cpkNameList; // x9
  int32_t v41; // w8
  Il2CppObject *v42; // x22
  struct SoundCheckMenu___c__DisplayClass19_0_o **p__8__1; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  Il2CppObject *Item; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct SoundCheckMenu___c__DisplayClass19_0_o *v57; // x23
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Il2CppObject *v71; // x0
  System_String_o *nameOrig_5__7; // x22
  Il2CppObject *v73; // x24
  SoundManager_o *v74; // x21
  System_Action_o *v75; // x23
  struct SoundCheckMenu___c__DisplayClass19_0_o *_8__1; // x8
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x8
  int max_length; // w9
  int v85; // w10
  __int64 v86; // x21
  __int64 v87; // x8
  unsigned __int64 v88; // x28
  ServantVoiceEntity_o *v89; // x22
  int32_t i; // w23
  _BOOL8 v91; // x0
  __int64 v92; // x1
  Il2CppObject *current; // x24
  int monitor; // w8
  int j; // w21
  __int64 v96; // x26
  System_Collections_Generic_Dictionary_TKey__TValue__o *svtVoiceListup_5__4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v98; // x0
  struct SoundCheckMenu___c__DisplayClass19_0_o *v99; // x8
  struct AssetData_o *nobleAssetData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v102; // w8
  unsigned int v103; // w22
  __int64 v104; // x8
  UnityEngine_Object_o *v105; // x21
  int v106; // w8
  __int64 v107; // x21
  int k; // w20
  __int64 v109; // x22
  struct CriAtomEx_CueInfo_array *CueInfoList; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  int32_t v117; // w8
  Il2CppObject *name; // x21
  __int64 v119; // x22
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  __int64 v121; // x23
  Il2CppObject *v122; // x22
  struct CriAtomEx_CueInfo_array *_7__wrap9; // x9
  int32_t v124; // w10
  struct SoundCheckMenu___c__DisplayClass19_0_o *v125; // x8
  struct SoundCheckMenu___c__DisplayClass19_0_o **v126; // x21
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  struct System_Collections_Generic_List_string__o *v145; // x9
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  __int64 v152; // x22
  int32_t v153; // w1
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  int32_t v166; // w1
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  struct System_String_o *v173; // x1
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  int32_t v180; // w1
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  __int64 v187; // x22
  int32_t v188; // w1
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x4
  int32_t v192; // w5
  int64_t v193; // x6
  System_String_o *v194; // x7
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  int32_t v201; // w1
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  struct System_String_o *v208; // x1
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  int32_t v215; // w1
  struct SoundCheckMenu_o *_4__this; // [xsp+8h] [xbp-A8h]
  __int64 v218; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v219; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v220; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CEBCFB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__bool__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_4426/*"ChrSequence1"*/);
    sub_1C7BAE8(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C7BAE8(&StringLiteral_1145/*"0_"*/);
    sub_1C7BAE8(&StringLiteral_19590/*"file only data : "*/);
    sub_1C7BAE8(&StringLiteral_9542/*"NoblePhantasm/Sequence/"*/);
    sub_1C7BAE8(&StringLiteral_1116/*"0"*/);
    byte_4CEBCFB = 1;
  }
  memset(&v220, 0, sizeof(v220));
  Instance = 0;
  v10 = -1;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      this->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)MasterData_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields._svtVoiceMst_5__2,
        (int32_t)MasterData_object,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !Instance )
        goto LABEL_148;
      Entitys = DataMasterBase_object__object__object___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  (const MethodInfo_3432038 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      this->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)Entitys;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields._svtLimitAddEntitys_5__3,
        (int32_t)Entitys,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v26,
        (const MethodInfo_34DCB40 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._svtVoiceListup_5__4 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v26;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields._svtVoiceListup_5__4,
        (int32_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v33 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v33,
        (const MethodInfo_34DCB40 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._nobleListup_5__5 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v33;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields._nobleListup_5__5,
        (int32_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      v11 = _4__this;
      if ( !_4__this )
        goto LABEL_148;
      cpkNameList = _4__this->fields.cpkNameList;
      if ( !cpkNameList )
        goto LABEL_148;
      v41 = 0;
      _4__this->fields.checkMax = cpkNameList->fields._size;
      this->fields._ii_5__6 = 0;
      break;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_23;
    case 2:
    case 3:
      v11 = this->fields.__4__this;
      this->fields.__1__state = -1;
      goto LABEL_114;
    case 4:
      goto LABEL_139;
    default:
      return Instance;
  }
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_148;
    v145 = v11->fields.cpkNameList;
    if ( !v145 )
      goto LABEL_148;
    if ( v41 >= v145->fields._size )
    {
      v11->fields.nextCheck = 0;
      v10 = 4;
      goto LABEL_138;
    }
    v42 = (Il2CppObject *)sub_1C7BD34(SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor(v42, 0);
    this->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass19_0_o *)v42;
    p__8__1 = &this->fields.__8__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v42, v44, v45, v46, v47, v48, v49);
    Instance = (__int64)v11->fields.cpkNameList;
    if ( !Instance )
      goto LABEL_148;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             this->fields._ii_5__6,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
    this->fields._nameOrig_5__7 = (struct System_String_o *)Item;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._nameOrig_5__7,
      (int32_t)Item,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    Instance = (__int64)this->fields._nameOrig_5__7;
    if ( !Instance )
      goto LABEL_148;
    Instance = (__int64)System_String__Split((System_String_o *)Instance, 0x5Fu, 0, 0);
    if ( !*p__8__1 )
      goto LABEL_148;
    (*p__8__1)->fields.isLoad = 1;
    ++v11->fields.checkCnt;
    if ( !Instance )
      goto LABEL_148;
    if ( *(_DWORD *)(Instance + 24) == 2 )
    {
      Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 40), &this->fields._voiceId_5__8, 0);
      if ( (Instance & 1) != 0 )
        break;
    }
LABEL_125:
    v41 = this->fields._ii_5__6 + 1;
    this->fields._ii_5__6 = v41;
  }
  v57 = *p__8__1;
  LODWORD(v219.fields._list) = this->fields._voiceId_5__8;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219);
  Instance = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_9542/*"NoblePhantasm/Sequence/"*/, v58, 0);
  if ( !v57 )
    goto LABEL_148;
  v57->fields.sequencePath = (struct System_String_o *)Instance;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v57->fields, Instance, v59, v60, v61, v62, v63, v64);
  Instance = (__int64)this->fields._nobleListup_5__5;
  if ( !Instance )
    goto LABEL_148;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
    (const MethodInfo_34DD69C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  Instance = (__int64)*p__8__1;
  if ( !*p__8__1 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 32) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Instance + 32), 0, v65, v66, v67, v68, v69, v70);
  v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  nameOrig_5__7 = this->fields._nameOrig_5__7;
  v73 = (Il2CppObject *)*p__8__1;
  v74 = (SoundManager_o *)v71;
  v75 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v75, v73, Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__, 0);
  if ( !v74 )
    goto LABEL_148;
  SoundManager__LoadAudioAssetStorage(v74, nameOrig_5__7, v75, 1, 0);
LABEL_23:
  _8__1 = this->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_148;
  if ( _8__1->fields.isLoad )
  {
    v10 = 1;
    goto LABEL_138;
  }
  this->fields._svtLimitAddEntity_5__9 = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._svtLimitAddEntity_5__9, 0, v2, v3, v4, v5, v6, v7);
  svtLimitAddEntitys_5__3 = this->fields._svtLimitAddEntitys_5__3;
  if ( !svtLimitAddEntitys_5__3 )
    goto LABEL_148;
  max_length = svtLimitAddEntitys_5__3->max_length;
  if ( max_length >= 1 )
  {
    v85 = 0;
    while ( 1 )
    {
      if ( max_length == v85 )
        goto LABEL_149;
      method = (const MethodInfo *)svtLimitAddEntitys_5__3->m_Items[v85];
      if ( !method )
        goto LABEL_148;
      if ( LODWORD(method->invoker_method) == this->fields._voiceId_5__8 )
        break;
      if ( max_length == ++v85 )
        goto LABEL_34;
    }
    this->fields._svtLimitAddEntity_5__9 = (struct ServantLimitAddEntity_o *)method;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._svtLimitAddEntity_5__9,
      (int32_t)method,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
LABEL_34:
  Instance = (__int64)this->fields._svtVoiceMst_5__2;
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)ServantVoiceMaster__getEntity_43370296(
                        (ServantVoiceMaster_o *)Instance,
                        this->fields._voiceId_5__8,
                        0,
                        0);
  if ( !this->fields._svtVoiceListup_5__4 )
    goto LABEL_148;
  v86 = Instance;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
    (const MethodInfo_34DD69C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  if ( !v86 )
    goto LABEL_148;
  v87 = *(_QWORD *)(v86 + 24);
  if ( (int)v87 >= 1 )
  {
    v88 = 0;
    v218 = v86;
    do
    {
      if ( v88 >= (unsigned int)v87 )
        goto LABEL_149;
      v89 = *(ServantVoiceEntity_o **)(v86 + 8 * v88 + 32);
      if ( v89 )
      {
        for ( i = 1; i != 25; ++i )
        {
          Instance = (__int64)ServantVoiceEntity__getVoiceList(v89, i, 0);
          if ( Instance )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
            v220 = v219;
            while ( 1 )
            {
              v91 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v220,
                      (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
              if ( !v91 )
                break;
              current = v220.fields._current;
              if ( !v220.fields._current )
                sub_1C7BD40(v91, v92);
              monitor = (int)v220.fields._current[1].monitor;
              if ( monitor >= 1 )
              {
                for ( j = 0; j < monitor; ++j )
                {
                  if ( j >= (unsigned int)monitor )
                    sub_1C7BD48(v91);
                  v96 = *((_QWORD *)&current[2].klass + j);
                  if ( !v96 )
                    sub_1C7BD40(v91, v92);
                  svtVoiceListup_5__4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                  if ( !svtVoiceListup_5__4 )
                    sub_1C7BD40(0, v92);
                  v91 = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                          svtVoiceListup_5__4,
                          *(Il2CppObject **)(v96 + 16),
                          (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
                  if ( !v91 )
                  {
                    v98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                    if ( !v98 )
                      sub_1C7BD40(0, v92);
                    System_Collections_Generic_Dictionary_object__bool___Add(
                      v98,
                      *(Il2CppObject **)(v96 + 16),
                      1,
                      (const MethodInfo_34DD500 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
                  }
                  monitor = (int)current[1].monitor;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v220,
              (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          }
        }
      }
      v86 = v218;
      ++v88;
      LODWORD(v87) = *(_DWORD *)(v218 + 24);
    }
    while ( (__int64)v88 < (int)v87 );
  }
  v99 = this->fields.__8__1;
  if ( !v99 )
    goto LABEL_148;
  nobleAssetData = v99->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    objectList = nobleAssetData->fields.objectList;
    if ( !objectList )
      goto LABEL_148;
    v102 = objectList->max_length;
    if ( v102 < 1 )
    {
LABEL_75:
      v105 = 0;
    }
    else
    {
      v103 = 0;
      while ( 1 )
      {
        if ( v103 >= v102 )
          goto LABEL_149;
        v104 = (__int64)objectList + 8 * (int)v103;
        v105 = *(UnityEngine_Object_o **)(v104 + 32);
        if ( !v105 )
          goto LABEL_148;
        Instance = (__int64)UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v104 + 32), 0);
        if ( !Instance )
          goto LABEL_148;
        Instance = System_String__Equals_64212232((System_String_o *)Instance, (System_String_o *)StringLiteral_4426/*"ChrSequence1"*/, 0);
        if ( (Instance & 1) != 0 )
          break;
        v102 = objectList->max_length;
        if ( (int)++v103 >= v102 )
          goto LABEL_75;
      }
      if ( (UnityEngine_GameObject_c *)v105->klass != UnityEngine_GameObject_TypeInfo )
        v105 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(v105, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v105 )
        goto LABEL_148;
      Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                            (UnityEngine_GameObject_o *)v105,
                            (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      if ( !Instance )
        goto LABEL_148;
      v106 = *(_DWORD *)(Instance + 24);
      v107 = Instance;
      if ( v106 >= 1 )
      {
        for ( k = 0; k < v106; ++k )
        {
          if ( k >= (unsigned int)v106 )
            goto LABEL_149;
          v109 = *(_QWORD *)(v107 + 8LL * k + 32);
          if ( !v109 )
            goto LABEL_148;
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                       *(Il2CppObject **)(v109 + 72),
                       (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)this->fields._nobleListup_5__5;
            if ( !Instance )
              goto LABEL_148;
            System_Collections_Generic_Dictionary_object__bool___Add(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
              *(Il2CppObject **)(v109 + 72),
              1,
              (const MethodInfo_34DD500 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
          }
          v106 = *(_DWORD *)(v107 + 24);
        }
      }
    }
  }
  Instance = (__int64)CriAtom__GetAcb(this->fields._nameOrig_5__7, 0);
  v11 = _4__this;
  if ( !Instance )
  {
LABEL_118:
    v126 = &this->fields.__8__1;
    v125 = this->fields.__8__1;
    if ( !v125 )
      goto LABEL_148;
    if ( v125->fields.nobleAssetData )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !*v126 || !Instance )
        goto LABEL_148;
      AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, (*v126)->fields.sequencePath, 0);
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields._nameOrig_5__7, 0);
    this->fields.__8__1 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, 0, v127, v128, v129, v130, v131, v132);
    this->fields._nameOrig_5__7 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._nameOrig_5__7, 0, v133, v134, v135, v136, v137, v138);
    this->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._svtLimitAddEntity_5__9,
      0,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    goto LABEL_125;
  }
  CueInfoList = CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)Instance, 0);
  this->fields.__7__wrap9 = CueInfoList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap9,
    (int32_t)CueInfoList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v117 = 0;
  for ( this->fields.__7__wrap10 = 0; ; this->fields.__7__wrap10 = v117 )
  {
    Instance = (__int64)&this->fields.__7__wrap9;
    _7__wrap9 = this->fields.__7__wrap9;
    if ( !_7__wrap9 )
      goto LABEL_148;
    v124 = _7__wrap9->max_length;
    if ( v117 >= v124 )
    {
      *(_QWORD *)Instance = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)Instance, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_118;
    }
    if ( v117 >= (unsigned int)v124 )
      goto LABEL_149;
    Instance = (__int64)this->fields._svtVoiceListup_5__4;
    if ( !Instance )
      goto LABEL_148;
    name = (Il2CppObject *)_7__wrap9->m_Items[v117].fields.name;
    if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
            name,
            (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      Instance = (__int64)this->fields._nobleListup_5__5;
      if ( !Instance )
        goto LABEL_148;
      Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                   name,
                   (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
      if ( (Instance & 1) == 0 )
        break;
    }
LABEL_114:
    v117 = this->fields.__7__wrap10 + 1;
  }
  if ( !name )
    goto LABEL_148;
  Instance = (__int64)System_String__Split((System_String_o *)name, 0x5Fu, 0, 0);
  if ( !Instance )
    goto LABEL_148;
  v119 = Instance;
  if ( *(_DWORD *)(Instance + 24) != 2 )
    goto LABEL_130;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_148;
  Instance = System_String__Equals_64212232((System_String_o *)Instance, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  if ( (Instance & 1) == 0 )
  {
    svtLimitAddEntity_5__9 = this->fields._svtLimitAddEntity_5__9;
    if ( svtLimitAddEntity_5__9 )
    {
      if ( !*(_DWORD *)(v119 + 24) )
        goto LABEL_149;
      v121 = *(_QWORD *)(v119 + 32);
      LODWORD(v219.fields._list) = svtLimitAddEntity_5__9->fields.voicePrefix;
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &v219);
      if ( !v121 )
        goto LABEL_148;
      Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v121 + 312LL))(
                   v121,
                   Instance,
                   *(_QWORD *)(*(_QWORD *)v121 + 320LL));
      if ( (Instance & 1) != 0 )
      {
        if ( *(_DWORD *)(v119 + 24) <= 1u )
          goto LABEL_149;
        Instance = (__int64)System_String__Concat_64176912(
                              (System_String_o *)StringLiteral_1145/*"0_"*/,
                              *(System_String_o **)(v119 + 40),
                              0);
        if ( !this->fields._svtVoiceListup_5__4 )
          goto LABEL_148;
        v122 = (Il2CppObject *)Instance;
        if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
                (Il2CppObject *)Instance,
                (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
        {
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                  v122,
                  (const MethodInfo_34DD708 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
          {
            Instance = sub_1C7BB90(string___TypeInfo, 5);
            if ( !Instance )
              goto LABEL_148;
            v187 = Instance;
            if ( *(_DWORD *)(Instance + 24) )
            {
              v188 = StringLiteral_19590/*"file only data : "*/;
              *(_QWORD *)(Instance + 32) = StringLiteral_19590/*"file only data : "*/;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Instance + 32), v188, v181, v182, v183, v184, v185, v186);
              if ( *(_DWORD *)(v187 + 24) > 1u )
              {
                *(_QWORD *)(v187 + 40) = name;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)(v187 + 40),
                  (int32_t)name,
                  v189,
                  v190,
                  v191,
                  v192,
                  v193,
                  v194);
                if ( *(_DWORD *)(v187 + 24) > 2u )
                {
                  v201 = StringLiteral_80/*"\ntarget : "*/;
                  *(_QWORD *)(v187 + 48) = StringLiteral_80/*"\ntarget : "*/;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v187 + 48), v201, v195, v196, v197, v198, v199, v200);
                  if ( *(_DWORD *)(v187 + 24) > 3u )
                  {
                    v208 = this->fields._nameOrig_5__7;
                    *(_QWORD *)(v187 + 56) = v208;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)(v187 + 56),
                      (int32_t)v208,
                      v202,
                      v203,
                      v204,
                      v205,
                      v206,
                      v207);
                    if ( *(_DWORD *)(v187 + 24) > 4u )
                    {
                      v215 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v187 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v187 + 64), v215, v209, v210, v211, v212, v213, v214);
                      Instance = (__int64)System_String__Concat_64217444((System_String_array *)v187, 0);
                      if ( v11 )
                      {
                        SoundCheckMenu__ErrorOutput(v11, (System_String_o *)Instance, 0);
                        v10 = 2;
                        goto LABEL_138;
                      }
LABEL_148:
                      sub_1C7BD40(Instance, method);
                    }
                  }
                }
              }
            }
LABEL_149:
            sub_1C7BD48(Instance);
          }
        }
      }
      goto LABEL_114;
    }
  }
LABEL_130:
  Instance = sub_1C7BB90(string___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_148;
  v152 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_149;
  v153 = StringLiteral_19590/*"file only data : "*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_19590/*"file only data : "*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Instance + 32), v153, v146, v147, v148, v149, v150, v151);
  if ( *(_DWORD *)(v152 + 24) <= 1u )
    goto LABEL_149;
  *(_QWORD *)(v152 + 40) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v152 + 40), (int32_t)name, v154, v155, v156, v157, v158, v159);
  if ( *(_DWORD *)(v152 + 24) <= 2u )
    goto LABEL_149;
  v166 = StringLiteral_80/*"\ntarget : "*/;
  *(_QWORD *)(v152 + 48) = StringLiteral_80/*"\ntarget : "*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v152 + 48), v166, v160, v161, v162, v163, v164, v165);
  if ( *(_DWORD *)(v152 + 24) <= 3u )
    goto LABEL_149;
  v173 = this->fields._nameOrig_5__7;
  *(_QWORD *)(v152 + 56) = v173;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v152 + 56), (int32_t)v173, v167, v168, v169, v170, v171, v172);
  if ( *(_DWORD *)(v152 + 24) <= 4u )
    goto LABEL_149;
  v180 = StringLiteral_43/*"\n"*/;
  *(_QWORD *)(v152 + 64) = StringLiteral_43/*"\n"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v152 + 64), v180, v174, v175, v176, v177, v178, v179);
  Instance = (__int64)System_String__Concat_64217444((System_String_array *)v152, 0);
  if ( !v11 )
    goto LABEL_148;
  SoundCheckMenu__ErrorOutput(v11, (System_String_o *)Instance, 0);
  v10 = 3;
LABEL_138:
  this->fields.__2__current = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
  LOBYTE(Instance) = 1;
LABEL_139:
  this->fields.__1__state = v10;
  return Instance;
}


Il2CppObject *SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundCheckMenu__cueNameMstCheck_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__cueNameMstCheck_d__19__System_IDisposable_Dispose(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__npCheck_d__20___ctor(
        SoundCheckMenu__npCheck_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__npCheck_d__20__MoveNext(SoundCheckMenu__npCheck_d__20_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SoundCheckMenu__npCheck_d__20_o *v8; // x25
  Il2CppObject *v9; // x20
  SoundCheckMenu__npCheck_d__20_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x1
  SoundCheckMenu__npCheck_d__20_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtLimitAddMst_5__2; // x0
  System_Object_array *v36; // x1
  SoundCheckMenu__npCheck_d__20_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  _BOOL8 IsServant; // x0
  __int64 v45; // x1
  int max_length; // w8
  int i; // w25
  Il2CppClass **v48; // x8
  Il2CppObject *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Text_RegularExpressions_Regex_o *v60; // x21
  SoundCheckMenu__npCheck_d__20_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_Text_RegularExpressions_Regex_o *v68; // x21
  SoundCheckMenu__npCheck_d__20_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct SoundCheckMenu___c__DisplayClass20_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v77; // x22
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  SoundCheckMenu__npCheck_d__20_o *v86; // x9
  __int128 v87; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap5; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Text_RegularExpressions_Group_o *v95; // x19
  bool result; // w0
  System_Text_RegularExpressions_Group_o *v97; // x20
  struct ServantEntity_o *v98; // x1
  Il2CppObject *v99; // x25
  SoundCheckMenu__npCheck_d__20_o *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct SoundCheckMenu___c__DisplayClass20_1_o *v114; // x0
  struct SoundCheckMenu___c__DisplayClass20_0_o *v115; // x1
  __int64 v116; // x0
  __int64 v117; // x1
  const MethodInfo *v118; // x2
  struct ServantEntity_o *v119; // x8
  System_String_o *v120; // x1
  struct System_String_o *v121; // x1
  SoundCheckMenu__npCheck_d__20_o *v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  System_String_o *v129; // x25
  _BOOL8 isExistAssetStorage; // x0
  __int64 v131; // x1
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  SoundCheckMenu__npCheck_d__20_o *v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x20
  int v142; // w8
  unsigned int v143; // w21
  struct ServantLimitAddEntity_o *v144; // x25
  struct ServantEntity_o *v145; // x8
  int32_t svtId; // w22
  __int64 v147; // x26
  __int64 v148; // x27
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  SoundCheckMenu__npCheck_d__20_o *v155; // x0
  struct ServantEntity_o *v156; // x9
  ServantLimitAddMaster_o *v157; // x25
  __int64 v158; // x26
  __int64 v159; // x27
  __int64 v160; // x0
  __int64 VoiceId; // x0
  __int64 v162; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v163; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v164; // x9
  struct System_Collections_Generic_List_string__o *v165; // x9
  int32_t v166; // w2
  int v167; // w10
  struct SoundCheckMenu___c__DisplayClass20_0_o *v168; // x8
  System_Collections_Generic_List_object__o *v169; // x25
  System_String_o *v170; // x1
  Il2CppObject *v171; // x0
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  Il2CppObject *v178; // x1
  struct System_Object_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  Il2CppClass **v182; // x0
  __int64 v183; // x0
  __int64 v184; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v185; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v186; // x8
  System_Collections_Generic_List_object__o *v187; // x25
  System_String_o *v188; // x1
  Il2CppObject *v189; // x0
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  Il2CppObject *v196; // x1
  struct System_Object_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  Il2CppClass **v200; // x0
  __int64 v201; // x0
  __int64 v202; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v203; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v204; // x8
  System_Collections_Generic_List_object__o *v205; // x25
  System_String_o *v206; // x1
  Il2CppObject *v207; // x0
  int32_t v208; // w2
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  Il2CppObject *v214; // x1
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass **v218; // x0
  __int64 v219; // x1
  int32_t v220; // w2
  int32_t v221; // w3
  System_String_o *v222; // x4
  int32_t v223; // w5
  int64_t v224; // x6
  System_String_o *v225; // x7
  struct SoundCheckMenu___c__DisplayClass20_1_o *v226; // x0
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x0
  System_String_o *v228; // x25
  Il2CppObject *v229; // x27
  AssetLoader_LoadEndDataHandler_o *v230; // x26
  struct SoundCheckMenu___c__DisplayClass20_1_o *v231; // x8
  struct AssetData_o *nobleSequenceData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v234; // w8
  unsigned int v235; // w21
  __int64 v236; // x8
  UnityEngine_Object_o *v237; // x25
  System_String_o *name; // x0
  __int64 v239; // x1
  _BOOL8 v240; // x0
  __int64 v241; // x1
  System_Object_array *ComponentsInChildren_object__52198636; // x1
  SoundCheckMenu__npCheck_d__20_o *v243; // x0
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  int v250; // w8
  SoundCheckMenu__npCheck_d__20_o *v251; // x8
  int v252; // w9
  SoundCheckMenu__npCheck_d__20_o *v253; // x0
  WellFired_USFGOPlayAudioEvent_o *v254; // x22
  System_String_o *soundId; // x26
  _BOOL8 v256; // x0
  __int64 v257; // x1
  const MethodInfo *v258; // x2
  System_Text_RegularExpressions_Group_o *v259; // x19
  struct ServantEntity_o *svtEntity_5__7; // x20
  __int64 v261; // x1
  System_Text_RegularExpressions_Regex_o *rNpVoice_5__4; // x0
  __int64 v263; // x1
  System_Text_RegularExpressions_Regex_o *v264; // x0
  System_Text_RegularExpressions_Match_o *matched; // x26
  __int64 v266; // x0
  __int64 v267; // x1
  const MethodInfo *v268; // x2
  struct ServantEntity_o *v269; // x20
  __int64 v270; // x25
  System_String_o *v271; // x0
  int32_t v272; // w2
  int32_t v273; // w3
  System_String_o *v274; // x4
  int32_t v275; // w5
  int64_t v276; // x6
  System_String_o *v277; // x7
  __int64 v278; // x0
  int32_t v279; // w2
  int32_t v280; // w3
  System_String_o *v281; // x4
  int32_t v282; // w5
  int64_t v283; // x6
  System_String_o *v284; // x7
  int32_t v285; // w1
  __int64 v286; // x0
  __int64 v287; // x1
  System_Text_RegularExpressions_GroupCollection_o *v288; // x0
  __int64 v289; // x1
  System_Text_RegularExpressions_Group_o *Item; // x0
  __int64 v291; // x1
  int32_t v292; // w2
  int32_t v293; // w3
  System_String_o *v294; // x4
  int32_t v295; // w5
  int64_t v296; // x6
  System_String_o *v297; // x7
  System_Text_RegularExpressions_Group_o *v298; // x10
  System_Text_RegularExpressions_Group_o *v299; // x1
  __int64 v300; // x0
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  int32_t v307; // w1
  System_Text_RegularExpressions_GroupCollection_o *v308; // x0
  __int64 v309; // x1
  System_Text_RegularExpressions_Group_o *v310; // x0
  __int64 v311; // x1
  int32_t v312; // w2
  int32_t v313; // w3
  System_String_o *v314; // x4
  int32_t v315; // w5
  int64_t v316; // x6
  System_String_o *v317; // x7
  System_Text_RegularExpressions_Group_o *v318; // x10
  System_Text_RegularExpressions_Group_o *v319; // x1
  System_Text_RegularExpressions_Regex_o *rNpSE_5__5; // x0
  System_Text_RegularExpressions_Regex_o *v321; // x0
  System_Text_RegularExpressions_Match_o *v322; // x0
  __int64 v323; // x1
  const MethodInfo *v324; // x2
  struct ServantEntity_o *v325; // x20
  System_Text_RegularExpressions_Match_o *v326; // x26
  System_String_o *v327; // x0
  __int64 v328; // x1
  System_String_o *v329; // x25
  System_Text_RegularExpressions_GroupCollection_o *v330; // x0
  __int64 v331; // x1
  System_Text_RegularExpressions_Group_o *v332; // x0
  __int64 v333; // x1
  System_Text_RegularExpressions_Group_o *v334; // x10
  System_String_o *v335; // x26
  System_String_o *v336; // x27
  System_String_o *v337; // x3
  System_Text_RegularExpressions_Regex_o *v338; // x0
  System_String_o *IsMatch_70692692; // x0
  __int64 v340; // x1
  System_Text_RegularExpressions_Regex_o *v341; // x0
  System_Text_RegularExpressions_Match_o *v342; // x0
  __int64 v343; // x1
  System_Text_RegularExpressions_Match_o *v344; // x26
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  System_String_o *v346; // x0
  __int64 v347; // x1
  System_String_o *v348; // x25
  System_Text_RegularExpressions_GroupCollection_o *v349; // x0
  __int64 v350; // x1
  System_Text_RegularExpressions_Group_o *v351; // x0
  __int64 v352; // x1
  System_Text_RegularExpressions_Group_o *v353; // x10
  System_String_o *v354; // x26
  System_String_o *v355; // x2
  int v356; // w8
  System_Text_RegularExpressions_GroupCollection_o *v357; // x0
  __int64 v358; // x1
  System_Text_RegularExpressions_Group_o *v359; // x0
  __int64 v360; // x1
  System_String_o *v361; // x25
  System_String_o *v362; // x1
  int32_t audioType; // w9
  __int64 v364; // x0
  __int64 v365; // x1
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
  __int64 v372; // x25
  int32_t v373; // w1
  __int64 v374; // x0
  int32_t v375; // w2
  int32_t v376; // w3
  System_String_o *v377; // x4
  int32_t v378; // w5
  int64_t v379; // x6
  System_String_o *v380; // x7
  __int64 v381; // x0
  int32_t v382; // w2
  int32_t v383; // w3
  System_String_o *v384; // x4
  int32_t v385; // w5
  int64_t v386; // x6
  System_String_o *v387; // x7
  int32_t v388; // w1
  __int64 v389; // x0
  int32_t v390; // w2
  int32_t v391; // w3
  System_String_o *v392; // x4
  int32_t v393; // w5
  int64_t v394; // x6
  System_String_o *v395; // x7
  struct System_String_o *sequencePath_5__8; // x1
  __int64 v397; // x0
  int32_t v398; // w2
  int32_t v399; // w3
  System_String_o *v400; // x4
  int32_t v401; // w5
  int64_t v402; // x6
  System_String_o *v403; // x7
  __int64 v404; // x0
  __int64 v405; // x1
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  int32_t v412; // w1
  __int64 v413; // x0
  int32_t v414; // w2
  int32_t v415; // w3
  System_String_o *v416; // x4
  int32_t v417; // w5
  int64_t v418; // x6
  System_String_o *v419; // x7
  __int64 v420; // x0
  int32_t v421; // w2
  int32_t v422; // w3
  System_String_o *v423; // x4
  int32_t v424; // w5
  int64_t v425; // x6
  System_String_o *v426; // x7
  int32_t v427; // w1
  __int64 v428; // x0
  int32_t v429; // w2
  int32_t v430; // w3
  System_String_o *v431; // x4
  int32_t v432; // w5
  int64_t v433; // x6
  System_String_o *v434; // x7
  struct System_String_o *v435; // x1
  __int64 v436; // x0
  int32_t v437; // w1
  System_String_o *v438; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *_8__2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_object__o *voiceDataPath; // x0
  _BOOL4 v442; // w25
  Il2CppObject *current; // x27
  Il2CppObject *v444; // x0
  __int64 v445; // x1
  Il2CppObject *v446; // x0
  __int64 v447; // x1
  struct WellFired_USFGOPlayAudioEvent_array *v448; // x9
  GrandQuestFolderBoardItem_o *p__7__wrap9; // x25
  struct WellFired_USFGOPlayAudioEvent_array *_7__wrap9; // t1
  int v451; // w10
  System_String_o *v452; // x25
  __int64 v453; // x0
  __int64 v454; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v455; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v456; // x8
  System_Collections_Generic_List_object__o *v457; // x0
  Il2CppObject *v458; // x25
  Il2CppObject *v459; // x0
  __int64 v460; // x1
  __int64 v461; // x0
  __int64 v462; // x1
  int32_t v463; // w2
  int32_t v464; // w3
  System_String_o *v465; // x4
  int32_t v466; // w5
  int64_t v467; // x6
  System_String_o *v468; // x7
  __int64 v469; // x20
  int32_t v470; // w1
  __int64 v471; // x0
  int32_t v472; // w2
  int32_t v473; // w3
  System_String_o *v474; // x4
  int32_t v475; // w5
  int64_t v476; // x6
  System_String_o *v477; // x7
  __int64 v478; // x0
  int32_t v479; // w2
  int32_t v480; // w3
  System_String_o *v481; // x4
  int32_t v482; // w5
  int64_t v483; // x6
  System_String_o *v484; // x7
  int32_t v485; // w1
  __int64 v486; // x0
  int32_t v487; // w2
  int32_t v488; // w3
  System_String_o *v489; // x4
  int32_t v490; // w5
  int64_t v491; // x6
  System_String_o *v492; // x7
  struct System_String_o *v493; // x1
  __int64 v494; // x0
  int32_t v495; // w2
  int32_t v496; // w3
  System_String_o *v497; // x4
  int32_t v498; // w5
  int64_t v499; // x6
  System_String_o *v500; // x7
  int32_t v501; // w1
  System_String_o *v502; // x0
  SoundCheckMenu__npCheck_d__20_o *v503; // x0
  int32_t v504; // w2
  int32_t v505; // w3
  System_String_o *v506; // x4
  int32_t v507; // w5
  int64_t v508; // x6
  System_String_o *v509; // x7
  __int64 v510; // x0
  __int64 v511; // x1
  int32_t v512; // w2
  int32_t v513; // w3
  System_String_o *v514; // x4
  int32_t v515; // w5
  int64_t v516; // x6
  System_String_o *v517; // x7
  SoundCheckMenu__npCheck_d__20_o *v518; // x0
  SoundCheckMenu__npCheck_d__20_o *v519; // x0
  int32_t v520; // w2
  int32_t v521; // w3
  System_String_o *v522; // x4
  int32_t v523; // w5
  int64_t v524; // x6
  System_String_o *v525; // x7
  SoundCheckMenu__npCheck_d__20_o *v526; // x0
  int32_t v527; // w2
  int32_t v528; // w3
  System_String_o *v529; // x4
  int32_t v530; // w5
  int64_t v531; // x6
  System_String_o *v532; // x7
  SoundCheckMenu__npCheck_d__20_o *v533; // x0
  int32_t v534; // w2
  int32_t v535; // w3
  System_String_o *v536; // x4
  int32_t v537; // w5
  int64_t v538; // x6
  System_String_o *v539; // x7
  const MethodInfo *v540; // x1
  int32_t v541; // w2
  int32_t v542; // w3
  System_String_o *v543; // x4
  int32_t v544; // w5
  int64_t v545; // x6
  System_String_o *v546; // x7
  bool v547; // w8
  SoundCheckMenu__npCheck_d__20_o *v548; // x0
  __int64 v549; // x1
  int32_t v550; // w2
  int32_t v551; // w3
  System_String_o *v552; // x4
  int32_t v553; // w5
  int64_t v554; // x6
  System_String_o *v555; // x7
  SoundCheckMenu__npCheck_d__20_o *v556; // x0
  System_Text_RegularExpressions_Group_o *v557; // [xsp+10h] [xbp-110h]
  System_Text_RegularExpressions_Group_o *v558; // [xsp+18h] [xbp-108h]
  System_Text_RegularExpressions_Group_o *v559; // [xsp+20h] [xbp-100h]
  System_Text_RegularExpressions_Group_o *v560; // [xsp+28h] [xbp-F8h]
  SoundCheckMenu_o *_4__this; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v562; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v563; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v564; // [xsp+70h] [xbp-B0h]
  SoundCheckMenu__npCheck_d__20_o **v565; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v566; // [xsp+80h] [xbp-A0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+A0h] [xbp-80h] BYREF
  int v568; // [xsp+B4h] [xbp-6Ch] BYREF
  SoundCheckMenu__npCheck_d__20_o *v569; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v570; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v571; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v572; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v573; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v574; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v575; // 0:x0.16

  v8 = this;
  v569 = this;
  if ( (byte_4CEBCFC & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_4426/*"ChrSequence1"*/);
    sub_1C7BAE8(&StringLiteral_9544/*"NoblePhantasm_"*/);
    sub_1C7BAE8(&StringLiteral_22498/*"not exist : "*/);
    sub_1C7BAE8(&StringLiteral_9378/*"NP_"*/);
    sub_1C7BAE8(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    sub_1C7BAE8(&StringLiteral_4428/*"ChrVoice_"*/);
    sub_1C7BAE8(&StringLiteral_1145/*"0_"*/);
    sub_1C7BAE8(&StringLiteral_12818/*"Servants_"*/);
    sub_1C7BAE8(&StringLiteral_733/*"(\\d+)_(\\d)_(.+)"*/);
    sub_1C7BAE8(&StringLiteral_9379/*"NP_(\\d+)_(.+)"*/);
    sub_1C7BAE8(&StringLiteral_17020/*"audio type error : "*/);
    sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    this = (SoundCheckMenu__npCheck_d__20_o *)sub_1C7BAE8(&StringLiteral_9542/*"NoblePhantasm/Sequence/"*/);
    byte_4CEBCFC = 1;
  }
  v568 = 0;
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v566, 0, sizeof(v566));
  v564 = 0;
  v565 = &v569;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v9 = (Il2CppObject *)sub_1C7BD34(SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v9, 0);
      v10 = v569;
      v569->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass20_0_o *)v9;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->fields.__8__1, (int32_t)v9, v11, v12, v13, v14, v15, v16);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v18);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !MasterData_object )
        sub_1C7BD40(0, v20);
      DataMasterBase_object__object__int___getEntitys(
        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
        (const MethodInfo_342D580 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  v21,
                  (const MethodInfo_342D580 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v23 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v23,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v24 )
        sub_1C7BD40(0, v25);
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)v24,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v27 = v569;
      v569->fields._svtLimitAddMst_5__2 = (struct ServantLimitAddMaster_o *)v26;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v27->fields._svtLimitAddMst_5__2,
        (int32_t)v26,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      svtLimitAddMst_5__2 = (DataMasterBase_TMaster__TEntity__PKType__o *)v569->fields._svtLimitAddMst_5__2;
      if ( !svtLimitAddMst_5__2 )
        sub_1C7BD40(0, v34);
      v36 = DataMasterBase_object__object__object___getEntitys(
              svtLimitAddMst_5__2,
              (const MethodInfo_3432038 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      v37 = v569;
      v569->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)v36;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v37->fields._svtLimitAddEntitys_5__3,
        (int32_t)v36,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      if ( !Entitys )
        sub_1C7BD40(IsServant, v45);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C7BD48(IsServant);
          v48 = &Entitys->obj.klass + i;
          v49 = (Il2CppObject *)v48[4];
          if ( !v49 )
            sub_1C7BD40(IsServant, v45);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)v48[4], 0);
          if ( IsServant )
          {
            if ( !v23 )
              sub_1C7BD40(IsServant, v45);
            items = v23->fields._items;
            v57 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1C7BD40(IsServant, v45);
            size = v23->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                v49,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v49;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v59 + 4), (int32_t)v49, v50, v51, v52, v53, v54, v55);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v23 )
        sub_1C7BD40(IsServant, v45);
      if ( !_4__this )
        sub_1C7BD40(IsServant, v45);
      _4__this->fields.checkMax = v23->fields._size;
      v60 = (System_Text_RegularExpressions_Regex_o *)sub_1C7BD34(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70697692(v60, (System_String_o *)StringLiteral_733/*"(\\d+)_(\\d)_(.+)"*/, 1, 0);
      v61 = v569;
      v569->fields._rNpVoice_5__4 = v60;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v61->fields._rNpVoice_5__4,
        (int32_t)v60,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      v68 = (System_Text_RegularExpressions_Regex_o *)sub_1C7BD34(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70697692(v68, (System_String_o *)StringLiteral_9379/*"NP_(\\d+)_(.+)"*/, 1, 0);
      v69 = v569;
      v569->fields._rNpSE_5__5 = v68;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v69->fields._rNpSE_5__5, (int32_t)v68, v70, v71, v72, v73, v74, v75);
      _8__1 = v569->fields.__8__1;
      v77 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v77,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C7BD40(v78, v79);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v77;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&_8__1->fields, (int32_t)v77, v80, v81, v82, v83, v84, v85);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v562,
        v23,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v86 = v569;
      v87 = *(_OWORD *)&v562.fields._list;
      p__7__wrap5 = (GrandQuestFolderBoardItem_o *)&v569->fields.__7__wrap5;
      v563 = v562;
      v569->fields.__7__wrap5.fields._current = (struct ServantEntity_o *)v562.fields._current;
      *(_OWORD *)&v86->fields.__7__wrap5.fields._list = v87;
      sub_1C7BA8C(p__7__wrap5, 0, v89, v90, v91, v92, v93, v94);
      v8 = v569;
      goto LABEL_24;
    case 1:
LABEL_24:
      v95 = 0;
      v559 = 0;
      v560 = 0;
      v557 = 0;
      v558 = 0;
      v8->fields.__1__state = -3;
      goto LABEL_334;
    case 2:
      v95 = 0;
      v559 = 0;
      v560 = 0;
      v557 = 0;
      v558 = 0;
      v8->fields.__1__state = -3;
      goto LABEL_93;
    case 3:
      v97 = 0;
      v559 = 0;
      v560 = 0;
      v557 = 0;
      v558 = 0;
      v8->fields.__1__state = -3;
      break;
    case 4:
      result = 0;
      v8->fields.__1__state = -1;
      return result;
    default:
      return 0;
  }
  while ( 1 )
  {
    v250 = v8->fields.__7__wrap10 + 1;
    v8->fields.__7__wrap10 = v250;
LABEL_300:
    _7__wrap9 = v8->fields.__7__wrap9;
    p__7__wrap9 = (GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap9;
    v448 = _7__wrap9;
    if ( !_7__wrap9 )
      sub_1C7BD40(this, method);
    v451 = v448->max_length;
    if ( v250 >= v451 )
      break;
    if ( v250 >= (unsigned int)v451 )
      sub_1C7BD48(this);
    v254 = v448->m_Items[v250];
    if ( !v254 )
      sub_1C7BD40(this, method);
    if ( !_4__this )
      sub_1C7BD40(0, method);
    soundId = v254->fields.soundId;
    v256 = SoundCheckMenu__IsReplaceable(_4__this, v254->fields.groupId, 0);
    v259 = v97;
    if ( v256 )
    {
      svtEntity_5__7 = v569->fields._svtEntity_5__7;
      if ( !svtEntity_5__7 )
        sub_1C7BD40(v256, v257);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v573.fields.currentCryptoKey = &svtEntity_5__7->fields;
      *(_QWORD *)&v573.fields.fakeValue = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v573, v258);
      rNpVoice_5__4 = v569->fields._rNpVoice_5__4;
      if ( !rNpVoice_5__4 )
        sub_1C7BD40(0, v261);
      v97 = v259;
      if ( System_Text_RegularExpressions_Regex__IsMatch_70692692(rNpVoice_5__4, soundId, 0) )
      {
        v264 = v569->fields._rNpVoice_5__4;
        if ( !v264 )
          sub_1C7BD40(0, v263);
        matched = System_Text_RegularExpressions_Regex__Match_70693192(v264, soundId, 0);
        v266 = sub_1C7BB90(string___TypeInfo, 5);
        v269 = v569->fields._svtEntity_5__7;
        if ( !v269 )
          sub_1C7BD40(v266, v267);
        v270 = v266;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v574.fields.currentCryptoKey = &v269->fields;
        *(_QWORD *)&v574.fields.fakeValue = 0;
        v271 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v574, v268);
        if ( !v270 )
          sub_1C7BD40(v271, v271);
        if ( !*(_DWORD *)(v270 + 24) )
          sub_1C7BD48(v271);
        v97 = v259;
        *(_QWORD *)(v270 + 32) = v271;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v270 + 32), (int32_t)v271, v272, v273, v274, v275, v276, v277);
        if ( *(_DWORD *)(v270 + 24) <= 1u )
          sub_1C7BD48(v278);
        v285 = StringLiteral_16165/*"_"*/;
        *(_QWORD *)(v270 + 40) = StringLiteral_16165/*"_"*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v270 + 40), v285, v279, v280, v281, v282, v283, v284);
        if ( !matched )
          sub_1C7BD40(v286, v287);
        v288 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v288 )
          sub_1C7BD40(0, v289);
        Item = System_Text_RegularExpressions_GroupCollection__get_Item(v288, 2, 0);
        v298 = v559;
        if ( Item )
          v298 = Item;
        v559 = v298;
        if ( Item )
        {
          if ( !v298 )
            sub_1C7BD40(Item, v291);
          Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v298->klass->vtable._3_ToString.methodPtr)(
                                                             v298,
                                                             v298->klass->vtable._3_ToString.method);
          v299 = Item;
        }
        else
        {
          v299 = 0;
        }
        if ( *(_DWORD *)(v270 + 24) <= 2u )
          sub_1C7BD48(Item);
        *(_QWORD *)(v270 + 48) = v299;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v270 + 48), (int32_t)v299, v292, v293, v294, v295, v296, v297);
        if ( *(_DWORD *)(v270 + 24) <= 3u )
          sub_1C7BD48(v300);
        v307 = StringLiteral_16165/*"_"*/;
        *(_QWORD *)(v270 + 56) = StringLiteral_16165/*"_"*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v270 + 56), v307, v301, v302, v303, v304, v305, v306);
        v308 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v308 )
          sub_1C7BD40(0, v309);
        v310 = System_Text_RegularExpressions_GroupCollection__get_Item(v308, 3, 0);
        v318 = v558;
        if ( v310 )
          v318 = v310;
        v558 = v318;
        if ( v310 )
        {
          if ( !v318 )
            sub_1C7BD40(v310, v311);
          v310 = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v318->klass->vtable._3_ToString.methodPtr)(
                                                             v318,
                                                             v318->klass->vtable._3_ToString.method);
          v319 = v310;
        }
        else
        {
          v319 = 0;
        }
        if ( *(_DWORD *)(v270 + 24) <= 4u )
          sub_1C7BD48(v310);
        *(_QWORD *)(v270 + 64) = v319;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v270 + 64), (int32_t)v319, v312, v313, v314, v315, v316, v317);
        soundId = System_String__Concat_64217444((System_String_array *)v270, 0);
      }
      rNpSE_5__5 = v569->fields._rNpSE_5__5;
      if ( !rNpSE_5__5 )
        sub_1C7BD40(0, v263);
      if ( System_Text_RegularExpressions_Regex__IsMatch_70692692(rNpSE_5__5, soundId, 0) )
      {
        v321 = v569->fields._rNpSE_5__5;
        if ( !v321 )
          sub_1C7BD40(0, v257);
        v322 = System_Text_RegularExpressions_Regex__Match_70693192(v321, soundId, 0);
        v325 = v569->fields._svtEntity_5__7;
        if ( !v325 )
          sub_1C7BD40(v322, v323);
        v326 = v322;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v575.fields.currentCryptoKey = &v325->fields;
        *(_QWORD *)&v575.fields.fakeValue = 0;
        v327 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v575, v324);
        if ( !v326 )
          sub_1C7BD40(v327, v328);
        v329 = v327;
        v97 = v259;
        v330 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v326->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v326,
                                                                     v326->klass->vtable._5_get_Groups.method);
        if ( !v330 )
          sub_1C7BD40(0, v331);
        v332 = System_Text_RegularExpressions_GroupCollection__get_Item(v330, 2, 0);
        v334 = v557;
        v335 = (System_String_o *)StringLiteral_16165/*"_"*/;
        v336 = (System_String_o *)StringLiteral_9378/*"NP_"*/;
        if ( v332 )
          v334 = v332;
        v557 = v334;
        if ( v332 )
        {
          if ( !v334 )
            sub_1C7BD40(v332, v333);
          v337 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v334->klass->vtable._3_ToString.methodPtr)(
                                      v334,
                                      v334->klass->vtable._3_ToString.method);
        }
        else
        {
          v337 = 0;
        }
        soundId = System_String__Concat_64217180(v336, v329, v335, v337, 0);
      }
    }
    v338 = v569->fields._rNpVoice_5__4;
    if ( !v338 )
      sub_1C7BD40(0, v257);
    IsMatch_70692692 = (System_String_o *)System_Text_RegularExpressions_Regex__IsMatch_70692692(v338, soundId, 0);
    if ( ((unsigned __int8)IsMatch_70692692 & 1) != 0 )
    {
      v341 = v569->fields._rNpVoice_5__4;
      if ( !v341 )
        sub_1C7BD40(0, v340);
      v342 = System_Text_RegularExpressions_Regex__Match_70693192(v341, soundId, 0);
      v344 = v342;
      svtLimitAddEntity_5__9 = v569->fields._svtLimitAddEntity_5__9;
      if ( svtLimitAddEntity_5__9 )
      {
        v346 = System_Int32__ToString((int)svtLimitAddEntity_5__9 + 52, 0);
        if ( !v344 )
          sub_1C7BD40(v346, v347);
        v348 = v346;
        v349 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v344->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v344,
                                                                     v344->klass->vtable._5_get_Groups.method);
        if ( !v349 )
          sub_1C7BD40(0, v350);
        v351 = System_Text_RegularExpressions_GroupCollection__get_Item(v349, 3, 0);
        v353 = v560;
        v354 = (System_String_o *)StringLiteral_16165/*"_"*/;
        if ( v351 )
          v353 = v351;
        v560 = v353;
        if ( v351 )
        {
          if ( !v353 )
            sub_1C7BD40(v351, v352);
          v355 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v353->klass->vtable._3_ToString.methodPtr)(
                                      v353,
                                      v353->klass->vtable._3_ToString.method);
        }
        else
        {
          v355 = 0;
        }
        IsMatch_70692692 = System_String__Concat_64215176(v348, v354, v355, 0);
      }
      else
      {
        if ( !v342 )
          sub_1C7BD40(0, v343);
        v357 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v342->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v342,
                                                                     v342->klass->vtable._5_get_Groups.method);
        if ( !v357 )
          sub_1C7BD40(0, v358);
        v359 = System_Text_RegularExpressions_GroupCollection__get_Item(v357, 3, 0);
        if ( v359 )
          v97 = v359;
        v361 = (System_String_o *)StringLiteral_1145/*"0_"*/;
        if ( v359 )
        {
          if ( !v97 )
            sub_1C7BD40(v359, v360);
          v362 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v97->klass->vtable._3_ToString.methodPtr)(
                                      v97,
                                      v97->klass->vtable._3_ToString.method);
        }
        else
        {
          v362 = 0;
        }
        v259 = v97;
        IsMatch_70692692 = System_String__Concat_64176912(v361, v362, 0);
      }
      soundId = IsMatch_70692692;
      v356 = 1;
    }
    else
    {
      v356 = 0;
    }
    audioType = v254->fields.audioType;
    if ( (unsigned int)(audioType - 2) < 2 )
    {
      if ( (v356 & 1) != 0 )
        goto LABEL_240;
      v364 = sub_1C7BB90(string___TypeInfo, 5);
      v372 = v364;
      if ( !v364 )
        sub_1C7BD40(0, v365);
      if ( !*(_DWORD *)(v364 + 24) )
        sub_1C7BD48(v364);
      v373 = StringLiteral_17020/*"audio type error : "*/;
      *(_QWORD *)(v364 + 32) = StringLiteral_17020/*"audio type error : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v364 + 32), v373, v366, v367, v368, v369, v370, v371);
      if ( *(_DWORD *)(v372 + 24) <= 1u )
        sub_1C7BD48(v374);
      *(_QWORD *)(v372 + 40) = soundId;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 40), (int32_t)soundId, v375, v376, v377, v378, v379, v380);
      if ( *(_DWORD *)(v372 + 24) <= 2u )
        sub_1C7BD48(v381);
      v388 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v372 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 48), v388, v382, v383, v384, v385, v386, v387);
      if ( *(_DWORD *)(v372 + 24) <= 3u )
        sub_1C7BD48(v389);
      sequencePath_5__8 = v569->fields._sequencePath_5__8;
      *(_QWORD *)(v372 + 56) = sequencePath_5__8;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)(v372 + 56),
        (int32_t)sequencePath_5__8,
        v390,
        v391,
        v392,
        v393,
        v394,
        v395);
      if ( *(_DWORD *)(v372 + 24) <= 4u )
        sub_1C7BD48(v397);
      goto LABEL_239;
    }
    if ( audioType == 1 && v356 )
    {
      v404 = sub_1C7BB90(string___TypeInfo, 5);
      v372 = v404;
      if ( !v404 )
        sub_1C7BD40(0, v405);
      if ( !*(_DWORD *)(v404 + 24) )
        sub_1C7BD48(v404);
      v412 = StringLiteral_17020/*"audio type error : "*/;
      *(_QWORD *)(v404 + 32) = StringLiteral_17020/*"audio type error : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v404 + 32), v412, v406, v407, v408, v409, v410, v411);
      if ( *(_DWORD *)(v372 + 24) <= 1u )
        sub_1C7BD48(v413);
      *(_QWORD *)(v372 + 40) = soundId;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 40), (int32_t)soundId, v414, v415, v416, v417, v418, v419);
      if ( *(_DWORD *)(v372 + 24) <= 2u )
        sub_1C7BD48(v420);
      v427 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v372 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 48), v427, v421, v422, v423, v424, v425, v426);
      if ( *(_DWORD *)(v372 + 24) <= 3u )
        sub_1C7BD48(v428);
      v435 = v569->fields._sequencePath_5__8;
      *(_QWORD *)(v372 + 56) = v435;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 56), (int32_t)v435, v429, v430, v431, v432, v433, v434);
      if ( *(_DWORD *)(v372 + 24) <= 4u )
        sub_1C7BD48(v436);
LABEL_239:
      v437 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v372 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v372 + 64), v437, v398, v399, v400, v401, v402, v403);
      v438 = System_String__Concat_64217444((System_String_array *)v372, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v438, 0);
    }
LABEL_240:
    _8__2 = v569->fields.__8__2;
    if ( !_8__2 )
      sub_1C7BD40(IsMatch_70692692, v340);
    CS___8__locals1 = _8__2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_1C7BD40(IsMatch_70692692, v340);
    voiceDataPath = (System_Collections_Generic_List_object__o *)CS___8__locals1->fields.voiceDataPath;
    if ( !voiceDataPath )
      sub_1C7BD40(0, v340);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v563,
      voiceDataPath,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v566 = v563;
    do
    {
      v442 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v566,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v442 )
        break;
      current = v566.fields._current;
      v444 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v444 )
        sub_1C7BD40(0, v445);
    }
    while ( !SoundManager__IsExistsSound((SoundManager_o *)v444, (System_String_o *)current, soundId, 0) );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v566,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v446 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v446 )
      sub_1C7BD40(0, v447);
    this = (SoundCheckMenu__npCheck_d__20_o *)SoundManager__IsExistsSound(
                                                (SoundManager_o *)v446,
                                                (System_String_o *)StringLiteral_3085/*"Battle"*/,
                                                soundId,
                                                0);
    if ( ((v442 | (unsigned int)this) & 1) == 0 )
    {
      v461 = sub_1C7BB90(string___TypeInfo, 5);
      v469 = v461;
      if ( !v461 )
        sub_1C7BD40(0, v462);
      if ( !*(_DWORD *)(v461 + 24) )
        sub_1C7BD48(v461);
      v470 = StringLiteral_22498/*"not exist : "*/;
      *(_QWORD *)(v461 + 32) = StringLiteral_22498/*"not exist : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v461 + 32), v470, v463, v464, v465, v466, v467, v468);
      if ( *(_DWORD *)(v469 + 24) <= 1u )
        sub_1C7BD48(v471);
      *(_QWORD *)(v469 + 40) = soundId;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v469 + 40), (int32_t)soundId, v472, v473, v474, v475, v476, v477);
      if ( *(_DWORD *)(v469 + 24) <= 2u )
        sub_1C7BD48(v478);
      v485 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v469 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v469 + 48), v485, v479, v480, v481, v482, v483, v484);
      if ( *(_DWORD *)(v469 + 24) <= 3u )
        sub_1C7BD48(v486);
      v493 = v569->fields._sequencePath_5__8;
      *(_QWORD *)(v469 + 56) = v493;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v469 + 56), (int32_t)v493, v487, v488, v489, v490, v491, v492);
      if ( *(_DWORD *)(v469 + 24) <= 4u )
        sub_1C7BD48(v494);
      v501 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v469 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v469 + 64), v501, v495, v496, v497, v498, v499, v500);
      v502 = System_String__Concat_64217444((System_String_array *)v469, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v502, 0);
      v503 = v569;
      v569->fields.__2__current = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v503->fields.__2__current, 0, v504, v505, v506, v507, v508, v509);
      v251 = v569;
      v252 = 3;
LABEL_147:
      v251->fields.__1__state = v252;
      return 1;
    }
    v8 = v569;
    v97 = v259;
  }
  p__7__wrap9->klass = 0;
  sub_1C7BA8C(p__7__wrap9, 0, v2, v3, v4, v5, v6, v7);
  while ( 1 )
  {
    v452 = v569->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v452, 0);
    v455 = v569->fields.__8__2;
    if ( !v455 )
      sub_1C7BD40(v453, v454);
    v456 = v455->fields.CS___8__locals1;
    if ( !v456 )
      sub_1C7BD40(v453, v454);
    v457 = (System_Collections_Generic_List_object__o *)v456->fields.voiceDataPath;
    if ( !v457 )
      sub_1C7BD40(0, v454);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v563,
      v457,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v566 = v563;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v566,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v458 = v566.fields._current;
      v459 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v459 )
        sub_1C7BD40(0, v460);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v459, (System_String_o *)v458, 0);
    }
    v95 = v97;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v566,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !_4__this )
      sub_1C7BD40(v510, v511);
    ++_4__this->fields.checkCnt;
    v518 = v569;
    v569->fields.__8__2 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v518->fields.__8__2, 0, v512, v513, v514, v515, v516, v517);
    v519 = v569;
    v569->fields._sequencePath_5__8 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v519->fields._sequencePath_5__8, 0, v520, v521, v522, v523, v524, v525);
    v526 = v569;
    v569->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v526->fields._svtLimitAddEntity_5__9,
      0,
      v527,
      v528,
      v529,
      v530,
      v531,
      v532);
    v533 = v569;
    v569->fields._svtEntity_5__7 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v533->fields._svtEntity_5__7, 0, v534, v535, v536, v537, v538, v539);
    v8 = v569;
LABEL_334:
    v547 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap5,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    v548 = v569;
    if ( !v547 )
    {
      SoundCheckMenu__npCheck_d__20____m__Finally1(v569, v540);
      v556 = v569;
      v569->fields.__7__wrap5.fields._list = 0;
      *(_QWORD *)&v556->fields.__7__wrap5.fields._index = 0;
      v556->fields.__7__wrap5.fields._current = 0;
      if ( !_4__this )
        sub_1C7BD40(v556, v549);
      _4__this->fields.nextCheck = 0;
      v556->fields.__2__current = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v556->fields.__2__current, 0, v550, v551, v552, v553, v554, v555);
      v251 = v569;
      v252 = 4;
      goto LABEL_147;
    }
    v98 = v569->fields.__7__wrap5.fields._current;
    v569->fields._svtEntity_5__7 = v98;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v548->fields._svtEntity_5__7,
      (int32_t)v98,
      v541,
      v542,
      v543,
      v544,
      v545,
      v546);
    v99 = (Il2CppObject *)sub_1C7BD34(SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    System_Object___ctor(v99, 0);
    v100 = v569;
    v569->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass20_1_o *)v99;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v100->fields.__8__2, (int32_t)v99, v101, v102, v103, v104, v105, v106);
    v114 = v569->fields.__8__2;
    if ( !v114 )
      sub_1C7BD40(0, v107);
    v115 = v569->fields.__8__1;
    v114->fields.CS___8__locals1 = v115;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v114->fields.CS___8__locals1,
      (int32_t)v115,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v119 = v569->fields._svtEntity_5__7;
    if ( !v119 )
      sub_1C7BD40(v116, v117);
    id = v119->fields.id;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v570.fields.currentCryptoKey = &id;
    *(_QWORD *)&v570.fields.fakeValue = 0;
    v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v570, v118);
    v121 = System_String__Concat_64176912((System_String_o *)StringLiteral_9542/*"NoblePhantasm/Sequence/"*/, v120, 0);
    v122 = v569;
    v569->fields._sequencePath_5__8 = v121;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v122->fields._sequencePath_5__8,
      (int32_t)v121,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    v129 = v569->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    isExistAssetStorage = AssetManager__isExistAssetStorage(v129, 0);
    if ( !isExistAssetStorage )
      break;
    v138 = v569;
    v569->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v138->fields._svtLimitAddEntity_5__9,
      0,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    svtLimitAddEntitys_5__3 = v569->fields._svtLimitAddEntitys_5__3;
    if ( !svtLimitAddEntitys_5__3 )
      sub_1C7BD40(v139, v140);
    v142 = svtLimitAddEntitys_5__3->max_length;
    if ( v142 >= 1 )
    {
      v143 = 0;
      while ( 1 )
      {
        if ( v143 >= v142 )
          sub_1C7BD48(v139);
        v144 = svtLimitAddEntitys_5__3->m_Items[v143];
        if ( !v144 )
          sub_1C7BD40(v139, v140);
        v145 = v569->fields._svtEntity_5__7;
        if ( !v145 )
          sub_1C7BD40(v139, v140);
        svtId = v144->fields.svtId;
        v148 = *(_QWORD *)&v145->fields.id.fields.currentCryptoKey;
        v147 = *(_QWORD *)&v145->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v571.fields.currentCryptoKey = v148;
        *(_QWORD *)&v571.fields.fakeValue = v147;
        v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v571, 0);
        if ( svtId == (_DWORD)v139 )
          break;
        v142 = svtLimitAddEntitys_5__3->max_length;
        if ( (int)++v143 >= v142 )
          goto LABEL_60;
      }
      v155 = v569;
      v569->fields._svtLimitAddEntity_5__9 = v144;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v155->fields._svtLimitAddEntity_5__9,
        (int32_t)v144,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
    }
LABEL_60:
    v156 = v569->fields._svtEntity_5__7;
    if ( !v156 )
      sub_1C7BD40(v139, v140);
    v157 = v569->fields._svtLimitAddMst_5__2;
    v159 = *(_QWORD *)&v156->fields.id.fields.currentCryptoKey;
    v158 = *(_QWORD *)&v156->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v572.fields.currentCryptoKey = v159;
    *(_QWORD *)&v572.fields.fakeValue = v158;
    v160 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v572, 0);
    if ( !v157 )
      sub_1C7BD40(v160, (unsigned int)v160);
    VoiceId = ServantLimitAddMaster__getVoiceId(v157, v160, 0, 0);
    v568 = VoiceId;
    v163 = v569->fields.__8__2;
    if ( !v163 )
      sub_1C7BD40(VoiceId, v162);
    v164 = v163->fields.CS___8__locals1;
    if ( !v164 )
      sub_1C7BD40(VoiceId, v162);
    v165 = v164->fields.voiceDataPath;
    if ( !v165 )
      sub_1C7BD40(VoiceId, v162);
    v166 = v165->fields._size;
    v167 = v165->fields._version + 1;
    v165->fields._size = 0;
    v165->fields._version = v167;
    if ( v166 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v165->fields._items, 0, v166, 0);
      v163 = v569->fields.__8__2;
      if ( !v163 )
        sub_1C7BD40(VoiceId, v162);
    }
    v168 = v163->fields.CS___8__locals1;
    if ( !v168 )
      sub_1C7BD40(VoiceId, v162);
    v169 = (System_Collections_Generic_List_object__o *)v168->fields.voiceDataPath;
    v170 = System_Int32__ToString((int32_t)&v568, 0);
    v171 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_4428/*"ChrVoice_"*/, v170, 0);
    v178 = v171;
    if ( !v169 )
      sub_1C7BD40(v171, v171);
    v179 = v169->fields._items;
    v180 = Method_System_Collections_Generic_List_string__Add__;
    ++v169->fields._version;
    if ( !v179 )
      sub_1C7BD40(v171, v171);
    v181 = v169->fields._size;
    if ( (unsigned int)v181 >= LODWORD(v179->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v169,
        v171,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
    }
    else
    {
      v182 = &v179->obj.klass + v181;
      v169->fields._size = v181 + 1;
      v182[4] = (Il2CppClass *)v178;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v182 + 4), (int32_t)v178, v172, v173, v174, v175, v176, v177);
    }
    v185 = v569->fields.__8__2;
    if ( !v185 )
      sub_1C7BD40(v183, v184);
    v186 = v185->fields.CS___8__locals1;
    if ( !v186 )
      sub_1C7BD40(v183, v184);
    v187 = (System_Collections_Generic_List_object__o *)v186->fields.voiceDataPath;
    v188 = System_Int32__ToString((int32_t)&v568, 0);
    v189 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_12818/*"Servants_"*/, v188, 0);
    v196 = v189;
    if ( !v187 )
      sub_1C7BD40(v189, v189);
    v197 = v187->fields._items;
    v198 = Method_System_Collections_Generic_List_string__Add__;
    ++v187->fields._version;
    if ( !v197 )
      sub_1C7BD40(v189, v189);
    v199 = v187->fields._size;
    if ( (unsigned int)v199 >= LODWORD(v197->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v187,
        v189,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
    }
    else
    {
      v200 = &v197->obj.klass + v199;
      v187->fields._size = v199 + 1;
      v200[4] = (Il2CppClass *)v196;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v200 + 4), (int32_t)v196, v190, v191, v192, v193, v194, v195);
    }
    v203 = v569->fields.__8__2;
    if ( !v203 )
      sub_1C7BD40(v201, v202);
    v204 = v203->fields.CS___8__locals1;
    if ( !v204 )
      sub_1C7BD40(v201, v202);
    v205 = (System_Collections_Generic_List_object__o *)v204->fields.voiceDataPath;
    v206 = System_Int32__ToString((int32_t)&v568, 0);
    v207 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_9544/*"NoblePhantasm_"*/, v206, 0);
    v214 = v207;
    if ( !v205 )
      sub_1C7BD40(v207, v207);
    v215 = v205->fields._items;
    v216 = Method_System_Collections_Generic_List_string__Add__;
    ++v205->fields._version;
    if ( !v215 )
      sub_1C7BD40(v207, v207);
    v217 = v205->fields._size;
    if ( (unsigned int)v217 >= LODWORD(v215->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v205,
        v207,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
    }
    else
    {
      v218 = &v215->obj.klass + v217;
      v205->fields._size = v217 + 1;
      v218[4] = (Il2CppClass *)v214;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v218 + 4), (int32_t)v214, v208, v209, v210, v211, v212, v213);
    }
    v226 = v569->fields.__8__2;
    if ( !v226 )
      sub_1C7BD40(0, v219);
    v226->fields.nobleSequenceData = 0;
    p_fields = &v226->fields;
    p_fields->isLoadEnd = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_fields, 0, v220, v221, v222, v223, v224, v225);
    v228 = v569->fields._sequencePath_5__8;
    v229 = (Il2CppObject *)v569->fields.__8__2;
    v230 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v230, v229, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (SoundCheckMenu__npCheck_d__20_o *)AssetManager__loadAssetStorage(v228, v230, 1, 0);
    v8 = v569;
LABEL_93:
    v231 = v8->fields.__8__2;
    if ( !v231 )
      sub_1C7BD40(this, method);
    if ( !v231->fields.isLoadEnd )
    {
      v8->fields.__2__current = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      v251 = v569;
      v252 = 2;
      goto LABEL_147;
    }
    nobleSequenceData = v231->fields.nobleSequenceData;
    if ( !nobleSequenceData )
      sub_1C7BD40(this, method);
    objectList = nobleSequenceData->fields.objectList;
    if ( !objectList )
      sub_1C7BD40(this, method);
    v234 = objectList->max_length;
    if ( v234 < 1 )
    {
LABEL_104:
      v237 = 0;
    }
    else
    {
      v235 = 0;
      while ( 1 )
      {
        if ( v235 >= v234 )
          sub_1C7BD48(this);
        v236 = (__int64)objectList + 8 * (int)v235;
        v237 = *(UnityEngine_Object_o **)(v236 + 32);
        if ( !v237 )
          sub_1C7BD40(this, method);
        name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v236 + 32), 0);
        if ( !name )
          sub_1C7BD40(0, v239);
        this = (SoundCheckMenu__npCheck_d__20_o *)System_String__Equals_64212232(
                                                    name,
                                                    (System_String_o *)StringLiteral_4426/*"ChrSequence1"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        v234 = objectList->max_length;
        if ( (int)++v235 >= v234 )
          goto LABEL_104;
      }
      if ( (UnityEngine_GameObject_c *)v237->klass != UnityEngine_GameObject_TypeInfo )
        v237 = 0;
    }
    v97 = v95;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v240 = UnityEngine_Object__op_Inequality(v237, 0, 0);
    if ( v240 )
    {
      if ( !v237 )
        sub_1C7BD40(v240, v241);
      ComponentsInChildren_object__52198636 = UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                                (UnityEngine_GameObject_o *)v237,
                                                (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      v243 = v569;
      v569->fields.__7__wrap9 = (struct WellFired_USFGOPlayAudioEvent_array *)ComponentsInChildren_object__52198636;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v243->fields.__7__wrap9,
        (int32_t)ComponentsInChildren_object__52198636,
        v244,
        v245,
        v246,
        v247,
        v248,
        v249);
      v8 = v569;
      v250 = 0;
      v569->fields.__7__wrap10 = 0;
      goto LABEL_300;
    }
  }
  if ( !_4__this )
    sub_1C7BD40(isExistAssetStorage, v131);
  ++_4__this->fields.checkCnt;
  v253 = v569;
  v569->fields.__2__current = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v253->fields.__2__current, 0, v132, v133, v134, v135, v136, v137);
  result = 1;
  v569->fields.__1__state = 1;
  return result;
}


Il2CppObject *SoundCheckMenu__npCheck_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__npCheck_d__20__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundCheckMenu__npCheck_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SoundCheckMenu__npCheck_d__20__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__npCheck_d__20__System_IDisposable_Dispose(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 6 && ((1 << v2) & 0x71) != 0 )
    SoundCheckMenu__npCheck_d__20____m__Finally1(this, method);
}


void SoundCheckMenu__npCheck_d__20____m__Finally1(SoundCheckMenu__npCheck_d__20_o *this, const MethodInfo *method)
{
  if ( (byte_4CEBCFD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4CEBCFD = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
}


void SoundCheckMenu__svtVoiceCheck_d__22___ctor(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__svtVoiceCheck_d__22__MoveNext(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v8; // x20
  SoundCheckMenu_o *_4__this; // x19
  Il2CppObject *v10; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x22
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v47; // x20
  __int64 v48; // x0
  __int64 v49; // x1
  System_Object_array *IsServant; // x0
  __int64 v51; // x1
  int max_length; // w8
  int i; // w23
  Il2CppClass **v54; // x8
  Il2CppObject *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v67; // x22
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v76; // x9
  __int128 v77; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap3; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v85; // x8
  int32_t _7__wrap12; // w8
  int v87; // w9
  GrandQuestFolderBoardItem_o *p__8__2; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  const MethodInfo *v103; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  bool v110; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v111; // x0
  struct ServantEntity_o *current; // x1
  Il2CppObject *v113; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  __int64 v121; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  struct SoundCheckMenu___c__DisplayClass22_1_o *_8__2; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *v129; // x1
  __int64 v130; // x0
  __int64 v131; // x1
  struct ServantEntity_o *svtEntity_5__5; // x9
  ServantVoiceMaster_o *svtVoiceMst_5__2; // x20
  __int64 v134; // x21
  __int64 v135; // x22
  __int64 v136; // x0
  struct ServantVoiceEntity_array *Entity_43370296; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  __int64 v145; // x0
  __int64 v146; // x1
  struct ServantEntity_o *v147; // x8
  ServantLimitAddMaster_o *svtLimitAddMst_5__3; // x20
  __int64 v149; // x0
  __int64 VoiceId; // x0
  __int64 v151; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v152; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x9
  struct System_Collections_Generic_List_string__o *voiceDataPath; // x9
  int32_t v155; // w2
  int v156; // w10
  struct SoundCheckMenu___c__DisplayClass22_0_o *v157; // x8
  System_Collections_Generic_List_object__o *v158; // x20
  System_String_o *v159; // x1
  Il2CppObject *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  Il2CppObject *v167; // x1
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  __int64 v172; // x0
  __int64 v173; // x1
  __int64 v174; // x0
  __int64 v175; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v176; // x8
  bool result; // w0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v178; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v179; // x8
  System_Collections_Generic_List_object__o *v180; // x20
  System_String_o *v181; // x1
  Il2CppObject *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  Il2CppObject *v189; // x1
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  Il2CppClass **v193; // x0
  __int64 v194; // x0
  __int64 v195; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v196; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v197; // x8
  System_Collections_Generic_List_object__o *v198; // x20
  System_String_o *v199; // x1
  Il2CppObject *v200; // x0
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  Il2CppObject *v207; // x1
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  Il2CppClass **v211; // x0
  __int64 v212; // x0
  __int64 v213; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v214; // x8
  Il2CppObject *v215; // x0
  __int64 v216; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v217; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v218; // x9
  __int64 DataCnt; // x1
  SoundManager_o *v220; // x20
  System_Collections_Generic_List_object__o *v221; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v223; // x23
  System_Action_o *v224; // x22
  __int64 v225; // x0
  __int64 v226; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v227; // x8
  struct ServantVoiceEntity_array *svtVoiceEntitys_5__6; // x1
  __int64 v229; // x0
  __int64 v230; // x1
  int32_t v231; // w2
  int32_t v232; // w3
  System_String_o *v233; // x4
  int32_t v234; // w5
  int64_t v235; // x6
  System_String_o *v236; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v237; // x8
  int v238; // w10
  struct ServantVoiceEntity_o *v239; // x1
  __int64 j; // x1
  ServantVoiceEntity_o *klass; // x0
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v243; // x9
  __int128 v244; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap10; // x0
  int32_t v246; // w2
  int32_t v247; // w3
  System_String_o *v248; // x4
  int32_t v249; // w5
  int64_t v250; // x6
  System_String_o *v251; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v252; // x8
  struct ServantVoiceData_array *v253; // x1
  struct ServantVoiceData_array *_7__wrap11; // x10
  unsigned int v255; // w11
  const MethodInfo *v256; // x1
  int32_t v257; // w2
  int32_t v258; // w3
  System_String_o *v259; // x4
  int32_t v260; // w5
  int64_t v261; // x6
  System_String_o *v262; // x7
  bool v263; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v264; // x0
  GrandQuestFolderBoardItem_o *p_svtVoiceEntity_5__9; // x0
  struct ServantVoiceEntity_array *_7__wrap6; // x11
  int v267; // w12
  __int64 v268; // x0
  __int64 v269; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v270; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v271; // x8
  System_Collections_Generic_List_object__o *v272; // x0
  Il2CppObject *v273; // x20
  Il2CppObject *v274; // x0
  __int64 v275; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v276; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v277; // x8
  System_Collections_Generic_List_object__o *v278; // x0
  ServantVoiceData_o *v279; // x24
  _BOOL4 v280; // w20
  Il2CppObject *v281; // x21
  Il2CppObject *v282; // x0
  __int64 v283; // x1
  Il2CppObject *v284; // x0
  __int64 v285; // x1
  _BOOL8 IsExistsSound; // x0
  __int64 v287; // x1
  struct ServantEntity_o *v288; // x8
  _BOOL4 v289; // w21
  __int64 v290; // x22
  __int64 v291; // x23
  __int64 v292; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  __int64 v299; // x0
  __int64 v300; // x1
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  __int64 v307; // x20
  int32_t v308; // w1
  __int64 v309; // x0
  int32_t v310; // w2
  int32_t v311; // w3
  System_String_o *v312; // x4
  int32_t v313; // w5
  int64_t v314; // x6
  System_String_o *v315; // x7
  struct System_String_o *id; // x1
  __int64 v317; // x0
  int32_t v318; // w2
  int32_t v319; // w3
  System_String_o *v320; // x4
  int32_t v321; // w5
  int64_t v322; // x6
  System_String_o *v323; // x7
  int32_t v324; // w1
  __int64 v325; // x0
  __int64 v326; // x1
  const MethodInfo *v327; // x2
  struct ServantEntity_o *v328; // x8
  System_String_o *v329; // x0
  int32_t v330; // w2
  int32_t v331; // w3
  System_String_o *v332; // x4
  int32_t v333; // w5
  int64_t v334; // x6
  System_String_o *v335; // x7
  __int64 v336; // x0
  int32_t v337; // w2
  int32_t v338; // w3
  System_String_o *v339; // x4
  int32_t v340; // w5
  int64_t v341; // x6
  System_String_o *v342; // x7
  int32_t v343; // w1
  System_String_o *v344; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v345; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v346; // x8
  int v347; // w9
  __int64 v348; // x0
  __int64 v349; // x1
  int32_t v350; // w2
  int32_t v351; // w3
  System_String_o *v352; // x4
  int32_t v353; // w5
  int64_t v354; // x6
  System_String_o *v355; // x7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v356; // x0
  System_Collections_Generic_List_Enumerator_object__o v357; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v358; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v359; // [xsp+40h] [xbp-90h]
  SoundCheckMenu__svtVoiceCheck_d__22_o **v360; // [xsp+48h] [xbp-88h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v362; // [xsp+60h] [xbp-70h] BYREF
  int v363; // [xsp+84h] [xbp-4Ch] BYREF
  SoundCheckMenu__svtVoiceCheck_d__22_o *v364; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v365; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v366; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v367; // 0:x0.16

  v8 = this;
  v364 = this;
  if ( (byte_4CEBCFE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
    sub_1C7BAE8(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__);
    sub_1C7BAE8(&SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_9544/*"NoblePhantasm_"*/);
    sub_1C7BAE8(&StringLiteral_22498/*"not exist : "*/);
    sub_1C7BAE8(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C7BAE8(&StringLiteral_4428/*"ChrVoice_"*/);
    sub_1C7BAE8(&StringLiteral_12818/*"Servants_"*/);
    this = (SoundCheckMenu__svtVoiceCheck_d__22_o *)sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    byte_4CEBCFE = 1;
  }
  v363 = 0;
  memset(&v362, 0, sizeof(v362));
  v361 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v359 = 0;
  v360 = &v364;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C7BD34(SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v11 = v364;
      v364->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass22_0_o *)v10;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v11->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v21 )
        sub_1C7BD40(0, v22);
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)v21,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      v24 = v364;
      v364->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)v23;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v24->fields._svtVoiceMst_5__2,
        (int32_t)v23,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v31 )
        sub_1C7BD40(0, v32);
      v33 = DataManager__GetMasterData_object_(
              (DataManager_o *)v31,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v34 = v364;
      v364->fields._svtLimitAddMst_5__3 = (struct ServantLimitAddMaster_o *)v33;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v34->fields._svtLimitAddMst_5__3,
        (int32_t)v33,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        sub_1C7BD40(0, v42);
      v43 = DataManager__GetMasterData_object_(
              (DataManager_o *)v41,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !MasterData_object )
        sub_1C7BD40(v43, v44);
      v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)v43;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  (const MethodInfo_342D580 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v47 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v47,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      if ( !v45 )
        sub_1C7BD40(v48, v49);
      IsServant = DataMasterBase_object__object__object___getEntitys(
                    v45,
                    (const MethodInfo_3432038 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
      if ( !Entitys )
        sub_1C7BD40(IsServant, v51);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C7BD48(IsServant);
          v54 = &Entitys->obj.klass + i;
          v55 = (Il2CppObject *)v54[4];
          if ( !v55 )
            sub_1C7BD40(IsServant, v51);
          IsServant = (System_Object_array *)ServantEntity__get_IsServant((ServantEntity_o *)v54[4], 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            if ( !v47 )
              sub_1C7BD40(IsServant, v51);
            items = v47->fields._items;
            v63 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v47->fields._version;
            if ( !items )
              sub_1C7BD40(IsServant, v51);
            size = v47->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                v55,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &items->obj.klass + size;
              v47->fields._size = size + 1;
              v65[4] = (Il2CppClass *)v55;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v47 )
        sub_1C7BD40(IsServant, v51);
      if ( !_4__this )
        sub_1C7BD40(IsServant, v51);
      _4__this->fields.checkMax = v47->fields._size;
      _8__1 = v364->fields.__8__1;
      v67 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v67,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C7BD40(v68, v69);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v67;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&_8__1->fields, (int32_t)v67, v70, v71, v72, v73, v74, v75);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v357,
        v47,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v76 = v364;
      v77 = *(_OWORD *)&v357.fields._list;
      p__7__wrap3 = (GrandQuestFolderBoardItem_o *)&v364->fields.__7__wrap3;
      v358 = v357;
      v364->fields.__7__wrap3.fields._current = (struct ServantEntity_o *)v357.fields._current;
      *(_OWORD *)&v76->fields.__7__wrap3.fields._list = v77;
      sub_1C7BA8C(p__7__wrap3, 0, v79, v80, v81, v82, v83, v84);
      v85 = v364;
      v364->fields.__1__state = -3;
      goto LABEL_28;
    case 1:
      v8->fields.__1__state = -3;
      goto LABEL_70;
    case 2:
      _7__wrap12 = v8->fields.__7__wrap12;
      v8->fields.__1__state = -4;
      v87 = _7__wrap12 + 1;
      v8->fields.__7__wrap12 = _7__wrap12 + 1;
      goto LABEL_126;
    case 3:
      v8->fields.__8__2 = 0;
      p__8__2 = (GrandQuestFolderBoardItem_o *)&v8->fields.__8__2;
      LODWORD(p__8__2[-1].fields._Name_k__BackingField) = -3;
      sub_1C7BA8C(p__8__2, 0, v2, v3, v4, v5, v6, v7);
      v89 = v364;
      v364->fields._svtVoiceEntitys_5__6 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v89->fields._svtVoiceEntitys_5__6, 0, v90, v91, v92, v93, v94, v95);
      v96 = v364;
      v364->fields._svtEntity_5__5 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v96->fields._svtEntity_5__5, 0, v97, v98, v99, v100, v101, v102);
      v85 = v364;
LABEL_28:
      v110 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               (System_Collections_Generic_List_Enumerator_object__o *)&v85->fields.__7__wrap3,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
      v111 = v364;
      if ( v110 )
      {
        current = v364->fields.__7__wrap3.fields._current;
        v364->fields._svtEntity_5__5 = current;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v111->fields._svtEntity_5__5,
          (int32_t)current,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v113 = (Il2CppObject *)sub_1C7BD34(SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
        System_Object___ctor(v113, 0);
        v114 = v364;
        v364->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass22_1_o *)v113;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v114->fields.__8__2,
          (int32_t)v113,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
        _8__2 = v364->fields.__8__2;
        if ( !_8__2 )
          sub_1C7BD40(0, v121);
        v129 = v364->fields.__8__1;
        _8__2->fields.CS___8__locals1 = v129;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&_8__2->fields.CS___8__locals1,
          (int32_t)v129,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127);
        svtEntity_5__5 = v364->fields._svtEntity_5__5;
        if ( !svtEntity_5__5 )
          sub_1C7BD40(v130, v131);
        svtVoiceMst_5__2 = v364->fields._svtVoiceMst_5__2;
        v135 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.currentCryptoKey;
        v134 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v365.fields.currentCryptoKey = v135;
        *(_QWORD *)&v365.fields.fakeValue = v134;
        v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v365, 0);
        if ( !svtVoiceMst_5__2 )
          sub_1C7BD40(v136, (unsigned int)v136);
        Entity_43370296 = ServantVoiceMaster__getEntity_43370296(svtVoiceMst_5__2, v136, 0, 0);
        v138 = v364;
        v364->fields._svtVoiceEntitys_5__6 = Entity_43370296;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v138->fields._svtVoiceEntitys_5__6,
          (int32_t)Entity_43370296,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
        v147 = v364->fields._svtEntity_5__5;
        if ( !v147 )
          sub_1C7BD40(v145, v146);
        svtLimitAddMst_5__3 = v364->fields._svtLimitAddMst_5__3;
        v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v147->fields.id, 0);
        if ( !svtLimitAddMst_5__3 )
          sub_1C7BD40(v149, (unsigned int)v149);
        VoiceId = ServantLimitAddMaster__getVoiceId(svtLimitAddMst_5__3, v149, 0, 0);
        v363 = VoiceId;
        v152 = v364->fields.__8__2;
        if ( !v152 )
          sub_1C7BD40(VoiceId, v151);
        CS___8__locals1 = v152->fields.CS___8__locals1;
        if ( !CS___8__locals1 )
          sub_1C7BD40(VoiceId, v151);
        voiceDataPath = CS___8__locals1->fields.voiceDataPath;
        if ( !voiceDataPath )
          sub_1C7BD40(VoiceId, v151);
        v155 = voiceDataPath->fields._size;
        v156 = voiceDataPath->fields._version + 1;
        voiceDataPath->fields._size = 0;
        voiceDataPath->fields._version = v156;
        if ( v155 >= 1 )
        {
          System_Array__Clear((System_Array_o *)voiceDataPath->fields._items, 0, v155, 0);
          v152 = v364->fields.__8__2;
          if ( !v152 )
            sub_1C7BD40(VoiceId, v151);
        }
        v157 = v152->fields.CS___8__locals1;
        if ( !v157 )
          sub_1C7BD40(VoiceId, v151);
        v158 = (System_Collections_Generic_List_object__o *)v157->fields.voiceDataPath;
        v159 = System_Int32__ToString((int32_t)&v363, 0);
        v160 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_4428/*"ChrVoice_"*/, v159, 0);
        v167 = v160;
        if ( !v158 )
          sub_1C7BD40(v160, v160);
        v168 = v158->fields._items;
        v169 = Method_System_Collections_Generic_List_string__Add__;
        ++v158->fields._version;
        if ( !v168 )
          sub_1C7BD40(v160, v160);
        v170 = v158->fields._size;
        if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v158,
            v160,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
        }
        else
        {
          v171 = &v168->obj.klass + v170;
          v158->fields._size = v170 + 1;
          v171[4] = (Il2CppClass *)v167;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v171 + 4), (int32_t)v167, v161, v162, v163, v164, v165, v166);
        }
        v178 = v364->fields.__8__2;
        if ( !v178 )
          sub_1C7BD40(v172, v173);
        v179 = v178->fields.CS___8__locals1;
        if ( !v179 )
          sub_1C7BD40(v172, v173);
        v180 = (System_Collections_Generic_List_object__o *)v179->fields.voiceDataPath;
        v181 = System_Int32__ToString((int32_t)&v363, 0);
        v182 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_12818/*"Servants_"*/, v181, 0);
        v189 = v182;
        if ( !v180 )
          sub_1C7BD40(v182, v182);
        v190 = v180->fields._items;
        v191 = Method_System_Collections_Generic_List_string__Add__;
        ++v180->fields._version;
        if ( !v190 )
          sub_1C7BD40(v182, v182);
        v192 = v180->fields._size;
        if ( (unsigned int)v192 >= LODWORD(v190->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v180,
            v182,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
        }
        else
        {
          v193 = &v190->obj.klass + v192;
          v180->fields._size = v192 + 1;
          v193[4] = (Il2CppClass *)v189;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v193 + 4), (int32_t)v189, v183, v184, v185, v186, v187, v188);
        }
        v196 = v364->fields.__8__2;
        if ( !v196 )
          sub_1C7BD40(v194, v195);
        v197 = v196->fields.CS___8__locals1;
        if ( !v197 )
          sub_1C7BD40(v194, v195);
        v198 = (System_Collections_Generic_List_object__o *)v197->fields.voiceDataPath;
        v199 = System_Int32__ToString((int32_t)&v363, 0);
        v200 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_9544/*"NoblePhantasm_"*/, v199, 0);
        v207 = v200;
        if ( !v198 )
          sub_1C7BD40(v200, v200);
        v208 = v198->fields._items;
        v209 = Method_System_Collections_Generic_List_string__Add__;
        ++v198->fields._version;
        if ( !v208 )
          sub_1C7BD40(v200, v200);
        v210 = v198->fields._size;
        if ( (unsigned int)v210 >= LODWORD(v208->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v198,
            v200,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
        }
        else
        {
          v211 = &v208->obj.klass + v210;
          v198->fields._size = v210 + 1;
          v211[4] = (Il2CppClass *)v207;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v211 + 4), (int32_t)v207, v201, v202, v203, v204, v205, v206);
        }
        v214 = v364->fields.__8__2;
        if ( !v214 )
          sub_1C7BD40(v212, v213);
        v214->fields.DataCnt = 0;
        v214->fields.isLoadEnd = 0;
        v215 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v217 = v364->fields.__8__2;
        if ( !v217 )
          sub_1C7BD40(v215, v216);
        v218 = v217->fields.CS___8__locals1;
        if ( !v218 )
          sub_1C7BD40(v215, v216);
        DataCnt = (unsigned int)v217->fields.DataCnt;
        v220 = (SoundManager_o *)v215;
        v221 = (System_Collections_Generic_List_object__o *)v218->fields.voiceDataPath;
        v217->fields.DataCnt = DataCnt + 1;
        if ( !v221 )
          sub_1C7BD40(0, DataCnt);
        Item = System_Collections_Generic_List_object___get_Item(
                 v221,
                 DataCnt,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
        v223 = (Il2CppObject *)v364->fields.__8__2;
        v224 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(v224, v223, Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__, 0);
        if ( !v220 )
          sub_1C7BD40(v225, v226);
        SoundManager__LoadAudioAssetStorage(v220, (System_String_o *)Item, v224, 1, 0);
        v8 = v364;
LABEL_70:
        v227 = v8->fields.__8__2;
        if ( !v227 )
          sub_1C7BD40(this, method);
        if ( !v227->fields.isLoadEnd )
        {
          v8->fields.__2__current = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          v364->fields.__1__state = 1;
          return result;
        }
        svtVoiceEntitys_5__6 = v8->fields._svtVoiceEntitys_5__6;
        v8->fields.__7__wrap6 = svtVoiceEntitys_5__6;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap6,
          (int32_t)svtVoiceEntitys_5__6,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v237 = v364;
        v238 = 0;
        v364->fields.__7__wrap7 = 0;
        while ( 1 )
        {
          _7__wrap6 = v237->fields.__7__wrap6;
          if ( !_7__wrap6 )
            sub_1C7BD40(v229, v230);
          v267 = _7__wrap6->max_length;
          if ( v238 >= v267 )
            break;
          if ( v238 >= (unsigned int)v267 )
            sub_1C7BD48(v229);
          v239 = _7__wrap6->m_Items[v238];
          v237->fields._svtVoiceEntity_5__9 = v239;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v237->fields._svtVoiceEntity_5__9,
            (int32_t)v239,
            v231,
            v232,
            v233,
            v234,
            v235,
            v236);
          v237 = v364;
          if ( v364->fields._svtVoiceEntity_5__9 )
          {
            for ( j = 1; ; j = (unsigned int)(v237->fields._ii_5__10 + 1) )
            {
              p_svtVoiceEntity_5__9 = (GrandQuestFolderBoardItem_o *)&v237->fields._svtVoiceEntity_5__9;
              v237->fields._ii_5__10 = j;
              if ( (int)j >= 25 )
                break;
              klass = (ServantVoiceEntity_o *)p_svtVoiceEntity_5__9->klass;
              if ( !klass )
                sub_1C7BD40(0, j);
              VoiceList = ServantVoiceEntity__getVoiceList(klass, j, 0);
              if ( VoiceList )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v357,
                  (System_Collections_Generic_List_object__o *)VoiceList,
                  (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
                v243 = v364;
                v244 = *(_OWORD *)&v357.fields._list;
                p__7__wrap10 = (GrandQuestFolderBoardItem_o *)&v364->fields.__7__wrap10;
                v358 = v357;
                v364->fields.__7__wrap10.fields._current = (struct ServantVoiceData_array *)v357.fields._current;
                *(_OWORD *)&v243->fields.__7__wrap10.fields._list = v244;
                sub_1C7BA8C(p__7__wrap10, 0, v246, v247, v248, v249, v250, v251);
                v252 = v364;
                v364->fields.__1__state = -4;
                while ( 1 )
                {
                  v263 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           (System_Collections_Generic_List_Enumerator_object__o *)&v252->fields.__7__wrap10,
                           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
                  v264 = v364;
                  if ( !v263 )
                    break;
                  v253 = v364->fields.__7__wrap10.fields._current;
                  v364->fields.__7__wrap11 = v253;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&v264->fields.__7__wrap11,
                    (int32_t)v253,
                    v257,
                    v258,
                    v259,
                    v260,
                    v261,
                    v262);
                  v8 = v364;
                  v87 = 0;
                  v364->fields.__7__wrap12 = 0;
LABEL_126:
                  _7__wrap11 = v8->fields.__7__wrap11;
                  if ( !_7__wrap11 )
                    sub_1C7BD40(this, method);
                  v255 = _7__wrap11->max_length;
                  if ( v87 < (int)v255 )
                  {
                    if ( v87 >= v255 )
                      sub_1C7BD48(this);
                    v276 = v8->fields.__8__2;
                    if ( !v276 )
                      sub_1C7BD40(this, method);
                    v277 = v276->fields.CS___8__locals1;
                    if ( !v277 )
                      sub_1C7BD40(this, method);
                    v278 = (System_Collections_Generic_List_object__o *)v277->fields.voiceDataPath;
                    if ( !v278 )
                      sub_1C7BD40(0, method);
                    v279 = _7__wrap11->m_Items[v87];
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v358,
                      v278,
                      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
                    v362 = v358;
                    do
                    {
                      v280 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v362,
                               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
                      if ( !v280 )
                        break;
                      v281 = v362.fields._current;
                      v282 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                      if ( !v279 )
                        sub_1C7BD40(v282, v283);
                      if ( !v282 )
                        sub_1C7BD40(0, v283);
                    }
                    while ( !SoundManager__IsExistsSound(
                               (SoundManager_o *)v282,
                               (System_String_o *)v281,
                               v279->fields.id,
                               0) );
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v362,
                      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
                    v284 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                    if ( !v279 )
                      sub_1C7BD40(v284, v285);
                    if ( !v284 )
                      sub_1C7BD40(0, v285);
                    IsExistsSound = SoundManager__IsExistsSound(
                                      (SoundManager_o *)v284,
                                      (System_String_o *)StringLiteral_3085/*"Battle"*/,
                                      v279->fields.id,
                                      0);
                    v288 = v364->fields._svtEntity_5__5;
                    if ( !v288 )
                      sub_1C7BD40(IsExistsSound, v287);
                    v289 = IsExistsSound;
                    v291 = *(_QWORD *)&v288->fields.id.fields.currentCryptoKey;
                    v290 = *(_QWORD *)&v288->fields.id.fields.fakeValue;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v366.fields.currentCryptoKey = v291;
                    *(_QWORD *)&v366.fields.fakeValue = v290;
                    v292 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v366, 0);
                    if ( !_4__this )
                      sub_1C7BD40(v292, (unsigned int)v292);
                    if ( (((v280 || v289) | SoundCheckMenu__isExceptionCheck(_4__this, v292, v279->fields.id, 0)) & 1) == 0 )
                    {
                      v299 = sub_1C7BB90(string___TypeInfo, 5);
                      v307 = v299;
                      if ( !v299 )
                        sub_1C7BD40(0, v300);
                      if ( !*(_DWORD *)(v299 + 24) )
                        sub_1C7BD48(v299);
                      v308 = StringLiteral_22498/*"not exist : "*/;
                      *(_QWORD *)(v299 + 32) = StringLiteral_22498/*"not exist : "*/;
                      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v299 + 32), v308, v301, v302, v303, v304, v305, v306);
                      if ( *(_DWORD *)(v307 + 24) <= 1u )
                        sub_1C7BD48(v309);
                      id = v279->fields.id;
                      *(_QWORD *)(v307 + 40) = id;
                      sub_1C7BA8C(
                        (GrandQuestFolderBoardItem_o *)(v307 + 40),
                        (int32_t)id,
                        v310,
                        v311,
                        v312,
                        v313,
                        v314,
                        v315);
                      if ( *(_DWORD *)(v307 + 24) <= 2u )
                        sub_1C7BD48(v317);
                      v324 = StringLiteral_80/*"\ntarget : "*/;
                      *(_QWORD *)(v307 + 48) = StringLiteral_80/*"\ntarget : "*/;
                      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v307 + 48), v324, v318, v319, v320, v321, v322, v323);
                      v328 = v364->fields._svtEntity_5__5;
                      if ( !v328 )
                        sub_1C7BD40(v325, v326);
                      v361 = v328->fields.id;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v367.fields.currentCryptoKey = &v361;
                      *(_QWORD *)&v367.fields.fakeValue = 0;
                      v329 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v367, v327);
                      if ( *(_DWORD *)(v307 + 24) <= 3u )
                        sub_1C7BD48(v329);
                      *(_QWORD *)(v307 + 56) = v329;
                      sub_1C7BA8C(
                        (GrandQuestFolderBoardItem_o *)(v307 + 56),
                        (int32_t)v329,
                        v330,
                        v331,
                        v332,
                        v333,
                        v334,
                        v335);
                      if ( *(_DWORD *)(v307 + 24) <= 4u )
                        sub_1C7BD48(v336);
                      v343 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v307 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v307 + 64), v343, v337, v338, v339, v340, v341, v342);
                      v344 = System_String__Concat_64217444((System_String_array *)v307, 0);
                      SoundCheckMenu__ErrorOutput(_4__this, v344, 0);
                    }
                    v345 = v364;
                    v364->fields.__2__current = 0;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)&v345->fields.__2__current,
                      0,
                      v293,
                      v294,
                      v295,
                      v296,
                      v297,
                      v298);
                    v346 = v364;
                    v347 = 2;
                    goto LABEL_173;
                  }
                  v8->fields.__7__wrap11 = 0;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap11, 0, v2, v3, v4, v5, v6, v7);
                  v252 = v364;
                }
                SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(v364, v256);
                v237 = v364;
                v364->fields.__7__wrap10.fields._list = 0;
                *(_QWORD *)&v237->fields.__7__wrap10.fields._index = 0;
                v237->fields.__7__wrap10.fields._current = 0;
              }
              else
              {
                v237 = v364;
              }
            }
            p_svtVoiceEntity_5__9->klass = 0;
            sub_1C7BA8C(p_svtVoiceEntity_5__9, 0, v231, v232, v233, v234, v235, v236);
            v237 = v364;
          }
          v238 = v237->fields.__7__wrap7 + 1;
          v237->fields.__7__wrap7 = v238;
        }
        v237->fields.__7__wrap6 = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v237->fields.__7__wrap6, 0, v231, v232, v233, v234, v235, v236);
        v270 = v364->fields.__8__2;
        if ( !v270 )
          sub_1C7BD40(v268, v269);
        v271 = v270->fields.CS___8__locals1;
        if ( !v271 )
          sub_1C7BD40(v268, v269);
        v272 = (System_Collections_Generic_List_object__o *)v271->fields.voiceDataPath;
        if ( !v272 )
          sub_1C7BD40(0, v269);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v358,
          v272,
          (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v362 = v358;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v362,
                  (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          v273 = v362.fields._current;
          v274 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( !v274 )
            sub_1C7BD40(0, v275);
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v274, (System_String_o *)v273, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v362,
          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( !_4__this )
          sub_1C7BD40(v348, v349);
        ++_4__this->fields.checkCnt;
        v356 = v364;
        v364->fields.__2__current = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v356->fields.__2__current, 0, v350, v351, v352, v353, v354, v355);
        v346 = v364;
        v347 = 3;
LABEL_173:
        v346->fields.__1__state = v347;
        return 1;
      }
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(v364, v103);
      v176 = v364;
      v364->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v176->fields.__7__wrap3.fields._index = 0;
      v176->fields.__7__wrap3.fields._current = 0;
      if ( !_4__this )
        sub_1C7BD40(v174, v175);
      result = 0;
      _4__this->fields.nextCheck = 0;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundCheckMenu__svtVoiceCheck_d__22_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__svtVoiceCheck_d__22__System_IDisposable_Dispose(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8
  int v3; // w8

  v2 = this->fields.__1__state + 4;
  if ( v2 <= 7 )
  {
    v3 = 1 << v2;
    if ( (v3 & 0xA2) == 0 )
    {
      if ( (v3 & 0x41) == 0 )
        return;
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(this, method);
    }
    SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(this, method);
  }
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEBCFF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4CEBCFF = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEBD00 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    byte_4CEBD00 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}