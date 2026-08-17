void SoundCheckMenu___ctor(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596DDA9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596DDA9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.cpkNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cpkNameList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
  this->fields.exceptionData = (struct System_Collections_Generic_Dictionary_int__List_string___o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exceptionData,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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

  v11 = num;
  v10 = max;
  if ( (byte_596DDA5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_4569/*"CheckNum : "*/);
    byte_596DDA5 = 1;
  }
  checkNumDisp = this->fields.checkNumDisp;
  v6 = System_Int32__ToString((int32_t)&v11, 0);
  v7 = System_Int32__ToString((int32_t)&v10, 0);
  v8 = System_String__Concat_75696856(
         (System_String_o *)StringLiteral_4569/*"CheckNum : "*/,
         v6,
         (System_String_o *)StringLiteral_1123/*"/"*/,
         v7,
         0);
  if ( !checkNumDisp )
    sub_2213CDC(v8, v9);
  UILabel__set_text(checkNumDisp, v8, 0);
}


void SoundCheckMenu__Close(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SoundCheckMenu_o *v5; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596DD9A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_596DD9A = 1;
  }
  if ( this->fields.sceneStart && !this->fields.nextCheck )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3205/*"Battle"*/, v6) )
    {
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_16;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)gameObject, (System_String_o *)StringLiteral_3205/*"Battle"*/, 0);
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
    sub_2213CDC(gameObject, v4);
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
  __int64 v10; // x22
  __int64 v11; // x8

  if ( (byte_596DDA6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_596DDA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
      if ( (unsigned int)v10 >= namespaze )
        sub_2213CE4(Instance);
      v11 = *((_QWORD *)&element_class->_1.byval_arg.data + v10);
      if ( !v11 )
        break;
      Instance = (Il2CppObject *)System_String__op_Equality(*(System_String_o **)(v11 + 16), SheetName, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        namespaze = (int)element_class->_1.namespaze;
        v9 = (int)++v10 < namespaze;
        if ( (int)v10 < namespaze )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_2213CDC(Instance, v5);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UILabel_o *resultLabel; // x22
  System_String_o *v21; // x0
  UILabel_o *errorCntLabel; // x20
  System_String_o *v23; // x0

  v4 = this;
  if ( (byte_596DDA4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    this = (SoundCheckMenu_o *)sub_2213A60(&StringLiteral_6441/*"ErrorCount : "*/);
    byte_596DDA4 = 1;
  }
  v5 = v4->fields.errorCnt + 1;
  v4->fields.errorCnt = v5;
  HIDWORD(v6) = -1030792151 * v5 + 85899344;
  LODWORD(v6) = HIDWORD(v6);
  if ( (unsigned int)(v6 >> 2) <= 0x28F5C28 )
  {
    resultLabelSeed = (Il2CppObject *)v4->fields.resultLabelSeed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, method);
    this = (SoundCheckMenu_o *)UnityEngine_Object__Instantiate_object_(
                                 resultLabelSeed,
                                 (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_UILabel___);
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
      sub_2213CDC(this, text);
    }
    GameObjectExtensions__SetLocalPositionY(
      (UnityEngine_GameObject_o *)v11,
      (float)(LocalPositionY - (float)(*p_resultLabel)->fields.mHeight) + (float)(*p_resultLabel)->fields.mFontSize,
      0);
    *p_resultLabel = (struct UILabel_o *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.resultLabel, (int32_t)v8, v14, v15, v16, v17, v18, v19);
  }
  resultLabel = v4->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_14;
  v21 = System_String__Concat_75694928(resultLabel->fields.mText, text, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(resultLabel, v21, 0);
  errorCntLabel = v4->fields.errorCntLabel;
  v23 = System_Int32__ToString((int)v4 + 108, 0);
  this = (SoundCheckMenu_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_6441/*"ErrorCount : "*/, v23, 0);
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

  if ( (byte_596DD9E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8902/*"MASHU_SVT_ID1"*/);
    sub_2213A60(&StringLiteral_8903/*"MASHU_SVT_ID2"*/);
    byte_596DD9E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8902/*"MASHU_SVT_ID1"*/, 0);
  v4 = System_Int32__ToString((int32_t)&Value, 0);
  if ( System_String__op_Equality(groupId, v4, 0) )
  {
    return 1;
  }
  else
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8903/*"MASHU_SVT_ID2"*/, 0);
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

  if ( (byte_596DDA3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25144/*"svtVoiceButton"*/);
    sub_2213A60(&StringLiteral_9727/*"NPButton"*/);
    sub_2213A60(&StringLiteral_17440/*"allCpkVoiceButton"*/);
    sub_2213A60(&StringLiteral_3239/*"BattleEffectButton"*/);
    sub_2213A60(&StringLiteral_2298/*"AllButton"*/);
    byte_596DDA3 = 1;
  }
  if ( !this->fields.nextCheck && this->fields.sceneStart )
  {
    SoundCheckMenu__ValueReset(this, (const MethodInfo *)ButtonObj);
    if ( !ButtonObj )
      sub_2213CDC(v5, v6);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ButtonObj, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_2298/*"AllButton"*/, 0) )
    {
      v9 = SoundCheckMenu__allCheck(this, v8);
LABEL_17:
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v9, 0);
      return;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3239/*"BattleEffectButton"*/, 0) )
    {
      v9 = SoundCheckMenu__battleEffectCheck(this, v10);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9727/*"NPButton"*/, 0) )
    {
      v9 = SoundCheckMenu__npCheck(this, v11);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_25144/*"svtVoiceButton"*/, 0) )
    {
      v9 = SoundCheckMenu__svtVoiceCheck(this, v12);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_17440/*"allCpkVoiceButton"*/, 0) )
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

  if ( (byte_596DD99 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu__Open_b__16_0__);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_596DD99 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3205/*"Battle"*/, v6) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundCheckMenu__Open_b__16_0__, 0);
  if ( !Instance )
LABEL_7:
    sub_2213CDC(gameObject, v4);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)StringLiteral_3205/*"Battle"*/, v8, 1, 0);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *resultLabelSeed; // x20
  struct UILabel_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DDA2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6442/*"ErrorCount : 0"*/);
    byte_596DDA2 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                            resultLabelSeed,
                                            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !scrollView )
    goto LABEL_14;
  v8 = (struct UILabel_o *)scrollView;
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.scrollView, 0);
  this->fields.resultLabel = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resultLabel, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  scrollView = (UnityEngine_Component_o *)this->fields.errorCntLabel;
  this->fields.checkCnt = 0;
  this->fields.nextCheck = 1;
  this->fields.errorCnt = 0;
  if ( !scrollView
    || (UILabel__set_text((UILabel_o *)scrollView, (System_String_o *)StringLiteral_6442/*"ErrorCount : 0"*/, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
LABEL_14:
    sub_2213CDC(scrollView, method);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DDA1 & 1) == 0 )
  {
    sub_2213A60(&SoundCheckMenu__allCheck_d__24_TypeInfo);
    byte_596DDA1 = 1;
  }
  v3 = sub_2213CCC(SoundCheckMenu__allCheck_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__battleEffectCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DDA0 & 1) == 0 )
  {
    sub_2213A60(&SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
    byte_596DDA0 = 1;
  }
  v3 = sub_2213CCC(SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu__cpkNameListup(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *CpkPath; // x0
  Il2CppObject *Files_76915508; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *cpkNameList; // x8
  __int64 size; // x2
  Il2CppObject *v9; // x20
  int v10; // w9
  void *monitor; // x8
  unsigned __int64 v12; // x22
  System_String_o *v13; // x21
  System_String_o *FileNameWithoutExtension; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 v24; // x11
  Il2CppObject *v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_596DD9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&System_IO_Path_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_853/*"*.cpk.bytes"*/);
    byte_596DD9B = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  CpkPath = SoundManager__getCpkPath(0);
  Files_76915508 = (Il2CppObject *)System_IO_Directory__GetFiles_76915508(
                                     CpkPath,
                                     (System_String_o *)StringLiteral_853/*"*.cpk.bytes"*/,
                                     1,
                                     0);
  cpkNameList = this->fields.cpkNameList;
  if ( !cpkNameList )
    goto LABEL_21;
  size = (unsigned int)cpkNameList->fields._size;
  v9 = Files_76915508;
  v10 = cpkNameList->fields._version + 1;
  cpkNameList->fields._size = 0;
  cpkNameList->fields._version = v10;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)cpkNameList->fields._items, 0, size, 0);
  if ( !v9 )
    goto LABEL_21;
  monitor = v9[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)monitor )
        sub_2213CE4(Files_76915508);
      v13 = (System_String_o *)*((_QWORD *)&v9[2].klass + v12);
      if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v6, size);
      FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v13, 0);
      Files_76915508 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(FileNameWithoutExtension, 0);
      v21 = (System_Collections_Generic_List_object__o *)this->fields.cpkNameList;
      if ( !v21 )
        break;
      items = v21->fields._items;
      v23 = Method_System_Collections_Generic_List_string__Add__;
      ++v21->fields._version;
      if ( !items )
        break;
      v24 = v21->fields._size;
      v25 = Files_76915508;
      if ( (unsigned int)v24 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Files_76915508,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + v24;
        v21->fields._size = v24 + 1;
        v26[4] = (Il2CppClass *)v25;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v25, v15, v16, v17, v18, v19, v20);
      }
      LODWORD(monitor) = v9[1].monitor;
      if ( (__int64)++v12 >= (int)monitor )
        return;
    }
LABEL_21:
    sub_2213CDC(Files_76915508, v6);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Int32_array *buckets; // x8
  _QWORD *v18; // x9
  __int64 entries_low; // x10
  __int64 v20; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Int32_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x8
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Int32_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct System_Int32_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct System_Int32_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct System_Int32_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  struct System_Int32_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x8
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  struct System_Int32_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  __int64 v140; // x8
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  struct System_Int32_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  __int64 v150; // x8
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  struct System_Int32_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  __int64 v160; // x8
  struct System_Collections_Generic_Dictionary_int__List_string___o *v161; // x20
  System_Collections_Generic_List_object__o *v162; // x21
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  struct System_Int32_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  __int64 v172; // x8
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  System_Collections_Generic_Dictionary_int__object__o *v179; // x8
  struct System_Int32_array *v180; // x9
  _QWORD *v181; // x10
  __int64 v182; // x11
  __int64 v183; // x0

  if ( (byte_596DDA7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_1233/*"0_B091"*/);
    sub_2213A60(&StringLiteral_1230/*"0_B031"*/);
    sub_2213A60(&StringLiteral_1238/*"0_B161"*/);
    sub_2213A60(&StringLiteral_1234/*"0_B121"*/);
    sub_2213A60(&StringLiteral_1237/*"0_B151"*/);
    sub_2213A60(&StringLiteral_1232/*"0_B081"*/);
    sub_2213A60(&StringLiteral_1242/*"0_B201"*/);
    sub_2213A60(&StringLiteral_1240/*"0_B181"*/);
    sub_2213A60(&StringLiteral_1227/*"0_"*/);
    sub_2213A60(&StringLiteral_1229/*"0_B021"*/);
    sub_2213A60(&StringLiteral_1239/*"0_B171"*/);
    sub_2213A60(&StringLiteral_1231/*"0_B041"*/);
    sub_2213A60(&StringLiteral_1235/*"0_B131"*/);
    sub_2213A60(&StringLiteral_1236/*"0_B141"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1241/*"0_B191"*/);
    sub_2213A60(&StringLiteral_1228/*"0_B011"*/);
    byte_596DDA7 = 1;
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213B20(int___TypeInfo, 2);
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
      v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !exceptionData )
        goto LABEL_114;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        (System_Collections_Generic_Dictionary_int__object__o *)exceptionData,
        v8,
        (Il2CppObject *)v10,
        (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      buckets = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1228/*"0_B011"*/;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !buckets )
        goto LABEL_114;
      entries_low = SLODWORD(Item->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = (__int64)buckets + 8 * entries_low;
        LODWORD(Item->fields._entries) = entries_low + 1;
        *(_QWORD *)(v20 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)v4, v11, v12, v13, v14, v15, v16);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v27 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1229/*"0_B021"*/;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v27 )
        goto LABEL_114;
      v29 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = (__int64)v27 + 8 * v29;
        LODWORD(Item->fields._entries) = v29 + 1;
        *(_QWORD *)(v30 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)v4, v21, v22, v23, v24, v25, v26);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v37 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1230/*"0_B031"*/;
      v38 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v37 )
        goto LABEL_114;
      v39 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = (__int64)v37 + 8 * v39;
        LODWORD(Item->fields._entries) = v39 + 1;
        *(_QWORD *)(v40 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 32), (int32_t)v4, v31, v32, v33, v34, v35, v36);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v47 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1231/*"0_B041"*/;
      v48 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v47 )
        goto LABEL_114;
      v49 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (__int64)v47 + 8 * v49;
        LODWORD(Item->fields._entries) = v49 + 1;
        *(_QWORD *)(v50 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)v4, v41, v42, v43, v44, v45, v46);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v57 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1232/*"0_B081"*/;
      v58 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v57 )
        goto LABEL_114;
      v59 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = (__int64)v57 + 8 * v59;
        LODWORD(Item->fields._entries) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 32), (int32_t)v4, v51, v52, v53, v54, v55, v56);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v67 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1233/*"0_B091"*/;
      v68 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v67 )
        goto LABEL_114;
      v69 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = (__int64)v67 + 8 * v69;
        LODWORD(Item->fields._entries) = v69 + 1;
        *(_QWORD *)(v70 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 32), (int32_t)v4, v61, v62, v63, v64, v65, v66);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v77 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1234/*"0_B121"*/;
      v78 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v77 )
        goto LABEL_114;
      v79 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = (__int64)v77 + 8 * v79;
        LODWORD(Item->fields._entries) = v79 + 1;
        *(_QWORD *)(v80 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 32), (int32_t)v4, v71, v72, v73, v74, v75, v76);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v87 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1235/*"0_B131"*/;
      v88 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v87 )
        goto LABEL_114;
      v89 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = (__int64)v87 + 8 * v89;
        LODWORD(Item->fields._entries) = v89 + 1;
        *(_QWORD *)(v90 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v90 + 32), (int32_t)v4, v81, v82, v83, v84, v85, v86);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v97 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1236/*"0_B141"*/;
      v98 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v97 )
        goto LABEL_114;
      v99 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = (__int64)v97 + 8 * v99;
        LODWORD(Item->fields._entries) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v100 + 32), (int32_t)v4, v91, v92, v93, v94, v95, v96);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v107 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1237/*"0_B151"*/;
      v108 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v107 )
        goto LABEL_114;
      v109 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = (__int64)v107 + 8 * v109;
        LODWORD(Item->fields._entries) = v109 + 1;
        *(_QWORD *)(v110 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v110 + 32), (int32_t)v4, v101, v102, v103, v104, v105, v106);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v117 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1238/*"0_B161"*/;
      v118 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v117 )
        goto LABEL_114;
      v119 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = (__int64)v117 + 8 * v119;
        LODWORD(Item->fields._entries) = v119 + 1;
        *(_QWORD *)(v120 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v120 + 32), (int32_t)v4, v111, v112, v113, v114, v115, v116);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v127 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1239/*"0_B171"*/;
      v128 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v127 )
        goto LABEL_114;
      v129 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = (__int64)v127 + 8 * v129;
        LODWORD(Item->fields._entries) = v129 + 1;
        *(_QWORD *)(v130 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v130 + 32), (int32_t)v4, v121, v122, v123, v124, v125, v126);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v137 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1240/*"0_B181"*/;
      v138 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v137 )
        goto LABEL_114;
      v139 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
      }
      else
      {
        v140 = (__int64)v137 + 8 * v139;
        LODWORD(Item->fields._entries) = v139 + 1;
        *(_QWORD *)(v140 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v140 + 32), (int32_t)v4, v131, v132, v133, v134, v135, v136);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v147 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1241/*"0_B191"*/;
      v148 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v147 )
        goto LABEL_114;
      v149 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v149 >= LODWORD(v147->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
      }
      else
      {
        v150 = (__int64)v147 + 8 * v149;
        LODWORD(Item->fields._entries) = v149 + 1;
        *(_QWORD *)(v150 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v150 + 32), (int32_t)v4, v141, v142, v143, v144, v145, v146);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v157 = Item->fields._buckets;
      v4 = (Il2CppObject *)StringLiteral_1242/*"0_B201"*/;
      v158 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !v157 )
        goto LABEL_114;
      v159 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
      }
      else
      {
        v160 = (__int64)v157 + 8 * v159;
        LODWORD(Item->fields._entries) = v159 + 1;
        *(_QWORD *)(v160 + 32) = v4;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v160 + 32), (int32_t)v4, v151, v152, v153, v154, v155, v156);
      }
      LODWORD(entries) = v6->fields._entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_101;
    }
LABEL_115:
    sub_2213CE4(Item);
  }
LABEL_101:
  v161 = this->fields.exceptionData;
  v162 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v162,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v161 )
    goto LABEL_114;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v161,
    602300,
    (Il2CppObject *)v162,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item )
    goto LABEL_114;
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                   Item,
                                                                   602300,
                                                                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
  if ( !Item )
    goto LABEL_114;
  v169 = Item->fields._buckets;
  v4 = (Il2CppObject *)StringLiteral_1227/*"0_"*/;
  v170 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Item->fields._entries);
  if ( !v169 )
    goto LABEL_114;
  v171 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
  }
  else
  {
    v172 = (__int64)v169 + 8 * v171;
    LODWORD(Item->fields._entries) = v171 + 1;
    *(_QWORD *)(v172 + 32) = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v172 + 32), (int32_t)v4, v163, v164, v165, v166, v167, v168);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         Item,
                                                                         602300,
                                                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__)) == 0
    || (v179 = Item,
        v180 = Item->fields._buckets,
        v4 = (Il2CppObject *)StringLiteral_1/*""*/,
        v181 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Item->fields._entries),
        !v180) )
  {
LABEL_114:
    sub_2213CDC(Item, v4);
  }
  v182 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v182 >= LODWORD(v180->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
  }
  else
  {
    v183 = (__int64)v180 + 8 * v182;
    LODWORD(v179->fields._entries) = v182 + 1;
    *(_QWORD *)(v183 + 32) = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v183 + 32), (int32_t)v4, v173, v174, v175, v176, v177, v178);
  }
}


System_Collections_IEnumerator_o *SoundCheckMenu__cueNameMstCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DD9C & 1) == 0 )
  {
    sub_2213A60(&SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
    byte_596DD9C = 1;
  }
  v3 = sub_2213CCC(SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_596DDA8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    byte_596DDA8 = 1;
  }
  exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !exceptionData )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         exceptionData,
         svtId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__) )
  {
    exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
    if ( exceptionData )
    {
      exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                exceptionData,
                                                                                svtId,
                                                                                (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( exceptionData )
        return System_Collections_Generic_List_object___Contains(
                 (System_Collections_Generic_List_object__o *)exceptionData,
                 (Il2CppObject *)voiceId,
                 (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
    }
LABEL_9:
    sub_2213CDC(exceptionData, *(_QWORD *)&svtId);
  }
  return 0;
}


System_Collections_IEnumerator_o *SoundCheckMenu__npCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DD9D & 1) == 0 )
  {
    sub_2213A60(&SoundCheckMenu__npCheck_d__20_TypeInfo);
    byte_596DD9D = 1;
  }
  v3 = sub_2213CCC(SoundCheckMenu__npCheck_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__svtVoiceCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DD9F & 1) == 0 )
  {
    sub_2213A60(&SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
    byte_596DD9F = 1;
  }
  v3 = sub_2213CCC(SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x2
  System_String_o *sequencePath; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596DDAA & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__);
    byte_596DDAA = 1;
  }
  sequencePath = this->fields.sequencePath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  if ( AssetManager__isExistAssetStorage(sequencePath, 0) )
  {
    _9__1 = this->fields.__9__1;
    v8 = this->fields.sequencePath;
    if ( !_9__1 )
    {
      _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__loadAssetStorage(v8, _9__1, 1, 0, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct AssetData_o **p_nobleAssetData; // x19

  this->fields.nobleAssetData = data;
  p_nobleAssetData = &this->fields.nobleAssetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nobleAssetData,
    (int32_t)data,
    (System_String_o *)method,
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
  __int64 v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo_47A29F8 *v21; // x0
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v23; // x20
  Il2CppObject *Item; // x21
  System_Action_o *v25; // x22

  if ( (byte_596DDAB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
    byte_596DDAB = 1;
  }
  v5 = sub_2213CCC(SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.nobleSequenceData = data;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)data, v15, v16, v17, v18, v19, v20);
  v21 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
  *(_DWORD *)(v5 + 16) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v21);
  CS___8__locals1 = p_fields->CS___8__locals1;
  if ( !CS___8__locals1
    || (v7 = *(unsigned int *)(v5 + 16),
        v23 = (SoundManager_o *)Instance,
        Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath,
        *(_DWORD *)(v5 + 16) = v7 + 1,
        !Instance)
    || (Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v7,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__),
        v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v25, (Il2CppObject *)v5, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__, 0),
        !v23) )
  {
LABEL_8:
    sub_2213CDC(Instance, v7);
  }
  SoundManager__LoadAudioAssetStorage(v23, (System_String_o *)Item, v25, 1, 0);
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
  System_String_o *v8; // x21
  System_Action_o *_9__2; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DDAC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__);
    byte_596DDAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = (System_String_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
LABEL_10:
    sub_2213CDC(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v8, _9__2, 1, 0);
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
  struct SoundCheckMenu___c__DisplayClass20_1_o *v8; // x21
  System_String_o *v9; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596DDAD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__);
    byte_596DDAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_11;
  v9 = (System_String_o *)Instance;
  _9__3 = v8->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v8, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__, 0);
    v8->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v7 )
LABEL_11:
    sub_2213CDC(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v9, _9__3, 1, 0);
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
  System_String_o *v7; // x21
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596DDAE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__);
    byte_596DDAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  v7 = (System_String_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_9:
    sub_2213CDC(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v7, _9__1, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__1(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  SoundManager_o *v6; // x20
  System_String_o *v7; // x21
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596DDAF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__);
    byte_596DDAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  v7 = (System_String_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_9:
    sub_2213CDC(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v7, _9__2, 1, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
        goto LABEL_7;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v11 = SoundCheckMenu__battleEffectCheck(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v11, 0);
LABEL_7:
        if ( _4__this->fields.nextCheck )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        _4__this->fields.checkCnt = 0;
        _4__this->fields.nextCheck = 1;
        v14 = SoundCheckMenu__npCheck(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v14, 0);
        goto LABEL_12;
      }
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
LABEL_12:
  if ( _4__this->fields.nextCheck )
  {
    this->fields.__2__current = 0;
    v15 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v15, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)v15 - 2) = 2;
    return result;
  }
  _4__this->fields.checkCnt = 0;
  _4__this->fields.nextCheck = 1;
  v16 = SoundCheckMenu__svtVoiceCheck(_4__this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundCheckMenu__allCheck_d__24_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundCheckMenu_o *_4__this; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t v27; // w8
  int32_t v28; // w20
  EffectEntity_o *v29; // x8
  DataManager_o *v30; // x21
  struct EffectEntity_array *_7__wrap2; // x9
  int32_t max_length; // w10
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x2

  if ( (byte_596DDB0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&StringLiteral_23420/*"not exist : "*/);
    sub_2213A60(&StringLiteral_81/*"\ntarget : Battle\n"*/);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_596DDB0 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v28 = -1;
LABEL_33:
    this->fields.__1__state = v28;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___),
          this->fields._effectMst_5__2 = (struct EffectMaster_o *)MasterData_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._effectMst_5__2,
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
                                        (const MethodInfo_3F0FEAC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__)) == 0
      || !_4__this )
    {
LABEL_35:
      sub_2213CDC(Instance, method);
    }
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    this->fields.__7__wrap2 = (struct EffectEntity_array *)Instance;
    _4__this->fields.checkMax = (int)m_CancellationTokenSource;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap2,
      (int32_t)Instance,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = 0;
    for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v27 )
    {
      Instance = (DataManager_o *)&this->fields.__7__wrap2;
      _7__wrap2 = this->fields.__7__wrap2;
      if ( !_7__wrap2 )
        goto LABEL_35;
      max_length = _7__wrap2->max_length;
      if ( v27 >= max_length )
      {
        Instance->klass = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, 0, v2, v3, v4, v5, v6, v7);
        if ( !_4__this )
          goto LABEL_35;
        _4__this->fields.nextCheck = 0;
        v28 = 2;
        goto LABEL_32;
      }
      if ( v27 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v29 = _7__wrap2->m_Items[v27];
      if ( !v29 )
        goto LABEL_35;
      Instance = (DataManager_o *)this->fields._effectMst_5__2;
      if ( !Instance )
        goto LABEL_35;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v29->fields.id,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_35;
      v30 = Instance;
      Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      if ( !_4__this )
        goto LABEL_35;
      ++_4__this->fields.checkCnt;
LABEL_20:
      v27 = this->fields.__7__wrap3 + 1;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)SoundManager__IsExistsSound(
                                  (SoundManager_o *)Instance,
                                  (System_String_o *)StringLiteral_3205/*"Battle"*/,
                                  *(System_String_o **)&v30->fields._DispLog,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      Instance = (DataManager_o *)System_String__Concat_75694928(
                                    (System_String_o *)StringLiteral_23420/*"not exist : "*/,
                                    *(System_String_o **)&v30->fields._DispLog,
                                    (System_String_o *)StringLiteral_81/*"\ntarget : Battle\n"*/,
                                    0);
      if ( !_4__this )
        goto LABEL_35;
      SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, v39);
    }
    ++_4__this->fields.checkCnt;
    v28 = 1;
LABEL_32:
    this->fields.__2__current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v33, v34, v35, v36, v37, v38);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundCheckMenu__battleEffectCheck_d__23_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct SoundCheckMenu_o *_4__this; // x20
  __int64 Instance; // x0
  int32_t v12; // w20
  Il2CppObject *MasterData_object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Object_array *Entitys; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Collections_Generic_List_string__o *cpkNameList; // x9
  int32_t v42; // w8
  Il2CppObject *v43; // x22
  struct SoundCheckMenu___c__DisplayClass19_0_o **v44; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *Item; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct SoundCheckMenu___c__DisplayClass19_0_o *v58; // x23
  Il2CppObject *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x0
  System_String_o *nameOrig_5__7; // x22
  Il2CppObject *v74; // x24
  SoundManager_o *v75; // x21
  System_Action_o *v76; // x23
  struct SoundCheckMenu___c__DisplayClass19_0_o *v77; // x8
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x8
  int v85; // w9
  int v86; // w11
  __int64 v87; // x21
  __int64 v88; // x2
  __int64 v89; // x8
  unsigned __int64 v90; // x20
  ServantVoiceEntity_o *v91; // x22
  int32_t i; // w23
  __int128 v93; // q0
  _BOOL8 v94; // x0
  __int64 v95; // x1
  Il2CppObject *current; // x27
  int monitor; // w8
  int j; // w28
  __int64 v99; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *svtVoiceListup_5__4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v101; // x0
  struct SoundCheckMenu___c__DisplayClass19_0_o *v102; // x8
  struct AssetData_o *nobleAssetData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v105; // w8
  UnityEngine_Object_o *v106; // x21
  __int64 v107; // x22
  int v108; // w8
  __int64 v109; // x21
  unsigned int v110; // w20
  __int64 v111; // x22
  struct CriAtomEx_CueInfo_array *CueInfoList; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  int32_t v119; // w8
  Il2CppObject *name; // x21
  __int64 v121; // x22
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  __int64 v123; // x23
  Il2CppObject *v124; // x22
  struct CriAtomEx_CueInfo_array *_7__wrap9; // x9
  int32_t max_length; // w10
  struct SoundCheckMenu___c__DisplayClass19_0_o *_8__1; // x8
  struct SoundCheckMenu___c__DisplayClass19_0_o **p__8__1; // x21
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  struct System_Collections_Generic_List_string__o *v147; // x9
  System_String_array *v148; // x22
  const MethodInfo *v149; // x2
  System_String_array *v150; // x22
  const MethodInfo *v151; // x2
  struct SoundCheckMenu_o *v153; // [xsp+8h] [xbp-A8h]
  __int64 v154; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v155; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v156; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596DDB1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_4594/*"ChrSequence1"*/);
    sub_2213A60(&StringLiteral_80/*"\ntarget : "*/);
    sub_2213A60(&StringLiteral_1227/*"0_"*/);
    sub_2213A60(&StringLiteral_20344/*"file only data : "*/);
    sub_2213A60(&StringLiteral_9909/*"NoblePhantasm/Sequence/"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596DDB1 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  memset(&v156, 0, sizeof(v156));
  v153 = _4__this;
  if ( _1__state <= 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        this->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)MasterData_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._svtVoiceMst_5__2,
          (int32_t)MasterData_object,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
          if ( Instance )
          {
            Entitys = DataMasterBase_object__object__object___getEntitys(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        (const MethodInfo_3F14B68 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
            this->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)Entitys;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._svtLimitAddEntitys_5__3,
              (int32_t)Entitys,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            v27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
            System_Collections_Generic_Dictionary_object__bool____ctor(
              v27,
              (const MethodInfo_3FE2E48 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
            this->fields._svtVoiceListup_5__4 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v27;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._svtVoiceListup_5__4,
              (int32_t)v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
            System_Collections_Generic_Dictionary_object__bool____ctor(
              v34,
              (const MethodInfo_3FE2E48 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
            this->fields._nobleListup_5__5 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v34;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._nobleListup_5__5,
              (int32_t)v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            if ( _4__this )
            {
              cpkNameList = _4__this->fields.cpkNameList;
              if ( cpkNameList )
              {
                v42 = 0;
                _4__this->fields.checkMax = cpkNameList->fields._size;
                this->fields._ii_5__6 = 0;
                goto LABEL_131;
              }
            }
          }
        }
      }
      goto LABEL_144;
    }
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      goto LABEL_28;
    }
  }
  else
  {
    if ( (unsigned int)(_1__state - 2) < 2 )
    {
      this->fields.__1__state = -1;
      while ( 1 )
      {
        v119 = this->fields.__7__wrap10 + 1;
        this->fields.__7__wrap10 = v119;
LABEL_120:
        Instance = (__int64)&this->fields.__7__wrap9;
        _7__wrap9 = this->fields.__7__wrap9;
        if ( !_7__wrap9 )
          goto LABEL_144;
        max_length = _7__wrap9->max_length;
        if ( v119 >= max_length )
        {
          *(_QWORD *)Instance = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, 0, v2, v3, v4, v5, v6, v7);
LABEL_123:
          p__8__1 = &this->fields.__8__1;
          _8__1 = this->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_144;
          if ( _8__1->fields.nobleAssetData )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( !*p__8__1 || !Instance )
              goto LABEL_144;
            AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, (*p__8__1)->fields.sequencePath, 0);
          }
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( !Instance )
            goto LABEL_144;
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields._nameOrig_5__7, 0);
          this->fields.__8__1 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, 0, v129, v130, v131, v132, v133, v134);
          this->fields._nameOrig_5__7 = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._nameOrig_5__7,
            0,
            v135,
            v136,
            v137,
            v138,
            v139,
            v140);
          this->fields._svtLimitAddEntity_5__9 = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._svtLimitAddEntity_5__9,
            0,
            v141,
            v142,
            v143,
            v144,
            v145,
            v146);
          while ( 1 )
          {
            v42 = this->fields._ii_5__6 + 1;
            this->fields._ii_5__6 = v42;
LABEL_131:
            if ( !_4__this )
              goto LABEL_144;
            v147 = _4__this->fields.cpkNameList;
            if ( !v147 )
              goto LABEL_144;
            if ( v42 >= v147->fields._size )
              break;
            v43 = (Il2CppObject *)sub_2213CCC(SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor(v43, 0);
            this->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass19_0_o *)v43;
            v44 = &this->fields.__8__1;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.__8__1,
              (int32_t)v43,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            Instance = (__int64)_4__this->fields.cpkNameList;
            if ( !Instance )
              goto LABEL_144;
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     this->fields._ii_5__6,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields._nameOrig_5__7 = (struct System_String_o *)Item;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._nameOrig_5__7,
              (int32_t)Item,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57);
            Instance = (__int64)this->fields._nameOrig_5__7;
            if ( !Instance )
              goto LABEL_144;
            Instance = (__int64)System_String__Split((System_String_o *)Instance, 0x5Fu, 0, 0);
            if ( !*v44 )
              goto LABEL_144;
            (*v44)->fields.isLoad = 1;
            ++_4__this->fields.checkCnt;
            if ( !Instance )
              goto LABEL_144;
            if ( *(_DWORD *)(Instance + 24) == 2 )
            {
              Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 40), &this->fields._voiceId_5__8, 0);
              if ( (Instance & 1) != 0 )
              {
                v58 = *v44;
                LODWORD(v155.fields._list) = this->fields._voiceId_5__8;
                v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v155);
                Instance = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_9909/*"NoblePhantasm/Sequence/"*/, v59, 0);
                if ( !v58 )
                  goto LABEL_144;
                v58->fields.sequencePath = (struct System_String_o *)Instance;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->fields, Instance, v60, v61, v62, v63, v64, v65);
                Instance = (__int64)this->fields._nobleListup_5__5;
                if ( !Instance )
                  goto LABEL_144;
                System_Collections_Generic_Dictionary_object__bool___Clear(
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                  (const MethodInfo_3FE397C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
                Instance = (__int64)*v44;
                if ( !*v44 )
                  goto LABEL_144;
                *(_QWORD *)(Instance + 32) = 0;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 32), 0, v66, v67, v68, v69, v70, v71);
                v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                nameOrig_5__7 = this->fields._nameOrig_5__7;
                v74 = (Il2CppObject *)*v44;
                v75 = (SoundManager_o *)v72;
                v76 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v76, v74, Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__, 0);
                if ( !v75 )
                  goto LABEL_144;
                SoundManager__LoadAudioAssetStorage(v75, nameOrig_5__7, v76, 1, 0);
LABEL_28:
                v77 = this->fields.__8__1;
                if ( !v77 )
                  goto LABEL_144;
                if ( v77->fields.isLoad )
                {
                  v12 = 1;
                  goto LABEL_138;
                }
                this->fields._svtLimitAddEntity_5__9 = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._svtLimitAddEntity_5__9,
                  0,
                  v2,
                  v3,
                  v4,
                  v5,
                  v6,
                  v7);
                svtLimitAddEntitys_5__3 = this->fields._svtLimitAddEntitys_5__3;
                if ( !svtLimitAddEntitys_5__3 )
                  goto LABEL_144;
                v85 = svtLimitAddEntitys_5__3->max_length;
                if ( v85 >= 1 )
                {
                  v86 = 0;
                  while ( 1 )
                  {
                    if ( v85 == v86 )
                      goto LABEL_145;
                    method = (const MethodInfo *)svtLimitAddEntitys_5__3->m_Items[v86];
                    if ( !method )
                      goto LABEL_144;
                    if ( LODWORD(method->invoker_method) == this->fields._voiceId_5__8 )
                      break;
                    if ( (v85 & ~(v85 >> 31)) == ++v86 )
                      goto LABEL_39;
                  }
                  this->fields._svtLimitAddEntity_5__9 = (struct ServantLimitAddEntity_o *)method;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._svtLimitAddEntity_5__9,
                    (int32_t)method,
                    v78,
                    v79,
                    v80,
                    v81,
                    v82,
                    v83);
                }
LABEL_39:
                Instance = (__int64)this->fields._svtVoiceMst_5__2;
                if ( !Instance )
                  goto LABEL_144;
                Instance = (__int64)ServantVoiceMaster__getEntity_49837844(
                                      (ServantVoiceMaster_o *)Instance,
                                      this->fields._voiceId_5__8,
                                      0,
                                      0);
                if ( !this->fields._svtVoiceListup_5__4 )
                  goto LABEL_144;
                v87 = Instance;
                System_Collections_Generic_Dictionary_object__bool___Clear(
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
                  (const MethodInfo_3FE397C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
                if ( !v87 )
                  goto LABEL_144;
                v89 = *(_QWORD *)(v87 + 24);
                if ( (int)v89 >= 1 )
                {
                  v90 = 0;
                  v154 = v87;
                  while ( v90 < (unsigned int)v89 )
                  {
                    v91 = *(ServantVoiceEntity_o **)(v87 + 8 * v90 + 32);
                    if ( v91 )
                    {
                      for ( i = 1; i != 25; ++i )
                      {
                        Instance = (__int64)ServantVoiceEntity__getVoiceList(v91, i, 0);
                        if ( Instance )
                        {
                          System_Collections_Generic_List_object___GetEnumerator(
                            &v155,
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
                          v93 = *(_OWORD *)&v155.fields._list;
                          v155.fields._list = 0;
                          *(_QWORD *)&v155.fields._index = &v156;
                          *(_OWORD *)&v156.fields._list = v93;
                          v156.fields._current = v155.fields._current;
                          while ( 1 )
                          {
                            v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v156,
                                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
                            if ( !v94 )
                              break;
                            current = v156.fields._current;
                            if ( !v156.fields._current )
                              sub_2213CDC(v94, v95);
                            monitor = (int)v156.fields._current[1].monitor;
                            if ( monitor >= 1 )
                            {
                              for ( j = 0; j < monitor; ++j )
                              {
                                if ( j >= (unsigned int)monitor )
                                  sub_2213CE4(v94);
                                v99 = *((_QWORD *)&current[2].klass + j);
                                if ( !v99 )
                                  sub_2213CDC(v94, v95);
                                svtVoiceListup_5__4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                                if ( !svtVoiceListup_5__4 )
                                  sub_2213CDC(0, v95);
                                v94 = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                                        svtVoiceListup_5__4,
                                        *(Il2CppObject **)(v99 + 16),
                                        (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
                                if ( !v94 )
                                {
                                  v101 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                                  if ( !v101 )
                                    sub_2213CDC(0, v95);
                                  System_Collections_Generic_Dictionary_object__bool___Add(
                                    v101,
                                    *(Il2CppObject **)(v99 + 16),
                                    1,
                                    (const MethodInfo_3FE37E4 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
                                }
                                monitor = (int)current[1].monitor;
                              }
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v156,
                            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
                        }
                      }
                    }
                    v87 = v154;
                    ++v90;
                    LODWORD(v89) = *(_DWORD *)(v154 + 24);
                    if ( (__int64)v90 >= (int)v89 )
                      goto LABEL_70;
                  }
LABEL_145:
                  sub_2213CE4(Instance);
                }
LABEL_70:
                v102 = this->fields.__8__1;
                if ( !v102 )
                  goto LABEL_144;
                nobleAssetData = v102->fields.nobleAssetData;
                if ( !nobleAssetData )
                  goto LABEL_97;
                objectList = nobleAssetData->fields.objectList;
                if ( !objectList )
                  goto LABEL_144;
                v105 = objectList->max_length;
                v106 = 0;
                if ( v105 >= 1 )
                {
                  v107 = 0;
                  while ( 1 )
                  {
                    if ( (unsigned int)v107 >= v105 )
                      goto LABEL_145;
                    v106 = objectList->m_Items[v107];
                    if ( !v106 )
                      goto LABEL_144;
                    Instance = (__int64)UnityEngine_Object__get_name(objectList->m_Items[v107], 0);
                    if ( !Instance )
                      goto LABEL_144;
                    Instance = System_String__Equals_75686512(
                                 (System_String_o *)Instance,
                                 (System_String_o *)StringLiteral_4594/*"ChrSequence1"*/,
                                 0);
                    if ( (Instance & 1) != 0 )
                      break;
                    v105 = objectList->max_length;
                    if ( (int)++v107 >= v105 )
                    {
                      v106 = 0;
                      goto LABEL_83;
                    }
                  }
                  if ( (UnityEngine_GameObject_c *)v106->klass != UnityEngine_GameObject_TypeInfo )
                    v106 = 0;
                }
LABEL_83:
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v88);
                Instance = UnityEngine_Object__op_Inequality(v106, 0, 0);
                if ( (Instance & 1) == 0 )
                  goto LABEL_97;
                if ( !v106 )
                  goto LABEL_144;
                Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                      (UnityEngine_GameObject_o *)v106,
                                      (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
                if ( !Instance )
                  goto LABEL_144;
                v108 = *(_DWORD *)(Instance + 24);
                v109 = Instance;
                if ( v108 >= 1 )
                {
                  v110 = 0;
                  while ( v110 < v108 )
                  {
                    v111 = *(_QWORD *)(v109 + 8LL * (int)v110 + 32);
                    if ( !v111 )
                      goto LABEL_144;
                    Instance = (__int64)this->fields._nobleListup_5__5;
                    if ( !Instance )
                      goto LABEL_144;
                    Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                                 *(Il2CppObject **)(v111 + 72),
                                 (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (__int64)this->fields._nobleListup_5__5;
                      if ( !Instance )
                        goto LABEL_144;
                      System_Collections_Generic_Dictionary_object__bool___Add(
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                        *(Il2CppObject **)(v111 + 72),
                        1,
                        (const MethodInfo_3FE37E4 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
                    }
                    v108 = *(_DWORD *)(v109 + 24);
                    if ( (int)++v110 >= v108 )
                      goto LABEL_97;
                  }
                  goto LABEL_145;
                }
LABEL_97:
                Instance = (__int64)CriAtom__GetAcb(this->fields._nameOrig_5__7, 0);
                _4__this = v153;
                if ( Instance )
                {
                  CueInfoList = CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)Instance, 0);
                  this->fields.__7__wrap9 = CueInfoList;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap9,
                    (int32_t)CueInfoList,
                    v113,
                    v114,
                    v115,
                    v116,
                    v117,
                    v118);
                  v119 = 0;
                  this->fields.__7__wrap10 = 0;
                  goto LABEL_120;
                }
                goto LABEL_123;
              }
            }
          }
          _4__this->fields.nextCheck = 0;
          v12 = 4;
          goto LABEL_138;
        }
        if ( v119 >= (unsigned int)max_length )
          goto LABEL_145;
        Instance = (__int64)this->fields._svtVoiceListup_5__4;
        if ( !Instance )
          goto LABEL_144;
        name = (Il2CppObject *)_7__wrap9->m_Items[v119].fields.name;
        if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                name,
                (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
        {
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_144;
          Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                       name,
                       (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
          if ( (Instance & 1) == 0 )
          {
            if ( !name )
              goto LABEL_144;
            Instance = (__int64)System_String__Split((System_String_o *)name, 0x5Fu, 0, 0);
            if ( !Instance )
              goto LABEL_144;
            v121 = Instance;
            if ( *(_DWORD *)(Instance + 24) != 2 )
              goto LABEL_135;
            Instance = *(_QWORD *)(Instance + 32);
            if ( !Instance )
              goto LABEL_144;
            Instance = System_String__Equals_75686512(
                         (System_String_o *)Instance,
                         (System_String_o *)StringLiteral_1198/*"0"*/,
                         0);
            if ( (Instance & 1) != 0 || (svtLimitAddEntity_5__9 = this->fields._svtLimitAddEntity_5__9) == 0 )
            {
LABEL_135:
              Instance = sub_2213B20(string___TypeInfo, 5);
              if ( Instance )
              {
                v148 = (System_String_array *)Instance;
                sub_1FFE2C4(Instance, 0, StringLiteral_20344/*"file only data : "*/);
                sub_1FFE2C4(v148, 1, name);
                sub_1FFE2C4(v148, 2, StringLiteral_80/*"\ntarget : "*/);
                sub_1FFE2C4(v148, 3, this->fields._nameOrig_5__7);
                sub_1FFE2C4(v148, 4, StringLiteral_43/*"\n"*/);
                Instance = (__int64)System_String__Concat_75697120(v148, 0);
                if ( _4__this )
                {
                  SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, v149);
                  v12 = 3;
                  goto LABEL_138;
                }
              }
LABEL_144:
              sub_2213CDC(Instance, method);
            }
            if ( !*(_DWORD *)(v121 + 24) )
              goto LABEL_145;
            v123 = *(_QWORD *)(v121 + 32);
            LODWORD(v155.fields._list) = svtLimitAddEntity_5__9->fields.voicePrefix;
            Instance = j_il2cpp_value_box_0(qword_5984348, &v155);
            if ( !v123 )
              goto LABEL_144;
            Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v123 + 312LL))(
                         v123,
                         Instance,
                         *(_QWORD *)(*(_QWORD *)v123 + 320LL));
            if ( (Instance & 1) != 0 )
            {
              if ( (*(_DWORD *)(v121 + 24) & 0xFFFFFFFE) == 0 )
                goto LABEL_145;
              Instance = (__int64)System_String__Concat_75651716(
                                    (System_String_o *)StringLiteral_1227/*"0_"*/,
                                    *(System_String_o **)(v121 + 40),
                                    0);
              if ( !this->fields._svtVoiceListup_5__4 )
                goto LABEL_144;
              v124 = (Il2CppObject *)Instance;
              if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
                      (Il2CppObject *)Instance,
                      (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
              {
                Instance = (__int64)this->fields._nobleListup_5__5;
                if ( !Instance )
                  goto LABEL_144;
                if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                        v124,
                        (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
                  break;
              }
            }
          }
        }
      }
      Instance = sub_2213B20(string___TypeInfo, 5);
      if ( !Instance )
        goto LABEL_144;
      v150 = (System_String_array *)Instance;
      sub_1FFE2C4(Instance, 0, StringLiteral_20344/*"file only data : "*/);
      sub_1FFE2C4(v150, 1, name);
      sub_1FFE2C4(v150, 2, StringLiteral_80/*"\ntarget : "*/);
      sub_1FFE2C4(v150, 3, this->fields._nameOrig_5__7);
      sub_1FFE2C4(v150, 4, StringLiteral_43/*"\n"*/);
      Instance = (__int64)System_String__Concat_75697120(v150, 0);
      if ( !_4__this )
        goto LABEL_144;
      SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, v151);
      v12 = 2;
LABEL_138:
      this->fields.__2__current = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      LOBYTE(Instance) = 1;
      goto LABEL_139;
    }
    if ( _1__state == 4 )
    {
      v12 = -1;
LABEL_139:
      this->fields.__1__state = v12;
    }
  }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundCheckMenu__cueNameMstCheck_d__19_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SoundCheckMenu__npCheck_d__20_o *v8; // x20
  AssetManager_c **v9; // x28
  const MethodInfo_40FBAD4 **v10; // x27
  int _1__state; // w8
  SoundCheckMenu_o *_4__this; // x19
  _BOOL8 IsExistsSound; // x0
  Il2CppObject *v14; // x20
  SoundCheckMenu__npCheck_d__20_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v28; // x20
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x1
  SoundCheckMenu__npCheck_d__20_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtLimitAddMst_5__2; // x0
  System_Object_array *v41; // x1
  SoundCheckMenu__npCheck_d__20_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  _BOOL8 IsServant; // x0
  __int64 v50; // x1
  int max_length; // w8
  int i; // w28
  Il2CppClass **v53; // x8
  Il2CppObject *v54; // x22
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Text_RegularExpressions_Regex_c *v65; // x0
  System_Text_RegularExpressions_Regex_o *v66; // x21
  SoundCheckMenu__npCheck_d__20_o *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Text_RegularExpressions_Regex_o *v74; // x21
  SoundCheckMenu__npCheck_d__20_o *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct SoundCheckMenu___c__DisplayClass20_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v83; // x22
  __int64 v84; // x0
  __int64 v85; // x1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  Il2CppObject *current; // x8
  SoundCheckMenu__npCheck_d__20_o *v93; // x9
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  __int64 v100; // x23
  struct ServantEntity_o *v101; // x1
  Il2CppObject *v102; // x20
  SoundCheckMenu__npCheck_d__20_o *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  __int64 v110; // x1
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct SoundCheckMenu___c__DisplayClass20_1_o *v117; // x0
  struct SoundCheckMenu___c__DisplayClass20_0_o *v118; // x1
  __int64 v119; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x2
  struct ServantEntity_o *v122; // x8
  System_String_o *v123; // x1
  struct System_String_o *v124; // x1
  SoundCheckMenu__npCheck_d__20_o *v125; // x0
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  __int64 v132; // x1
  __int64 v133; // x2
  System_String_o *v134; // x20
  _BOOL8 isExistAssetStorage; // x0
  __int64 v136; // x1
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  SoundCheckMenu__npCheck_d__20_o *v143; // x0
  __int64 v144; // x0
  __int64 v145; // x1
  System_String_o *v146; // x2
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x23
  int v148; // w8
  AssetManager_c **v149; // x25
  SoundCheckMenu_o *v150; // x26
  const MethodInfo_40FBAD4 **v151; // x19
  unsigned int v152; // w28
  struct ServantLimitAddEntity_o *v153; // x20
  struct ServantEntity_o *v154; // x8
  __int64 v155; // x21
  __int64 v156; // x22
  int32_t svtId; // w27
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  SoundCheckMenu__npCheck_d__20_o *v163; // x0
  struct ServantEntity_o *v164; // x8
  __int64 v165; // x21
  __int64 v166; // x22
  ServantLimitAddMaster_o *v167; // x20
  __int64 v168; // x0
  __int64 VoiceId; // x0
  __int64 v170; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v171; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v172; // x9
  struct System_Collections_Generic_List_string__o *v173; // x9
  int32_t v174; // w2
  int v175; // w10
  struct SoundCheckMenu___c__DisplayClass20_0_o *v176; // x8
  System_Collections_Generic_List_object__o *v177; // x20
  System_String_o *v178; // x1
  Il2CppObject *v179; // x0
  System_String_o *v180; // x2
  System_String_o *v181; // x3
  int32_t v182; // w4
  int32_t v183; // w5
  bool v184; // w6
  bool v185; // w7
  Il2CppObject *v186; // x1
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  __int64 v191; // x0
  __int64 v192; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v193; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v194; // x8
  System_Collections_Generic_List_object__o *v195; // x20
  System_String_o *v196; // x1
  Il2CppObject *v197; // x0
  System_String_o *v198; // x2
  System_String_o *v199; // x3
  int32_t v200; // w4
  int32_t v201; // w5
  bool v202; // w6
  bool v203; // w7
  Il2CppObject *v204; // x1
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  __int64 v209; // x0
  __int64 v210; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v211; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v212; // x8
  System_Collections_Generic_List_object__o *v213; // x20
  System_String_o *v214; // x1
  Il2CppObject *v215; // x0
  System_String_o *v216; // x2
  System_String_o *v217; // x3
  int32_t v218; // w4
  int32_t v219; // w5
  bool v220; // w6
  bool v221; // w7
  Il2CppObject *v222; // x1
  struct System_Object_array *v223; // x8
  _QWORD *v224; // x9
  __int64 v225; // x10
  Il2CppClass **v226; // x0
  __int64 v227; // x1
  System_String_o *v228; // x2
  System_String_o *v229; // x3
  int32_t v230; // w4
  int32_t v231; // w5
  bool v232; // w6
  bool v233; // w7
  struct SoundCheckMenu___c__DisplayClass20_1_o *v234; // x0
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x0
  System_String_o *v236; // x20
  Il2CppObject *v237; // x22
  AssetLoader_LoadEndDataHandler_o *v238; // x21
  __int64 v239; // x1
  __int64 v240; // x2
  struct SoundCheckMenu___c__DisplayClass20_1_o *v241; // x8
  struct AssetData_o *nobleSequenceData; // x8
  struct UnityEngine_Object_array *objectList; // x21
  int v244; // w8
  UnityEngine_Object_o *v245; // x20
  __int64 v246; // x22
  System_String_o *name; // x0
  __int64 v248; // x1
  _BOOL8 v249; // x0
  __int64 v250; // x1
  __int64 v251; // x2
  System_Object_array *ComponentsInChildren_object__59472212; // x1
  SoundCheckMenu__npCheck_d__20_o *v253; // x0
  System_String_o *v254; // x2
  System_String_o *v255; // x3
  int32_t v256; // w4
  int32_t v257; // w5
  bool v258; // w6
  bool v259; // w7
  int v260; // w8
  SoundCheckMenu__npCheck_d__20_o *v261; // x8
  int v262; // w9
  SoundCheckMenu__npCheck_d__20_o *v263; // x0
  WellFired_USFGOPlayAudioEvent_o *v264; // x23
  System_String_o *soundId; // x22
  _BOOL8 v266; // x0
  __int64 v267; // x1
  const MethodInfo *v268; // x2
  struct ServantEntity_o *svtEntity_5__7; // x20
  __int64 v270; // x1
  System_Text_RegularExpressions_Regex_o *rNpVoice_5__4; // x0
  __int64 v272; // x1
  System_Text_RegularExpressions_Regex_o *v273; // x0
  System_Text_RegularExpressions_Match_o *matched; // x21
  __int64 v275; // x0
  __int64 v276; // x1
  const MethodInfo *v277; // x2
  struct ServantEntity_o *v278; // x22
  __int64 v279; // x20
  System_String_o *v280; // x0
  System_String_o *v281; // x2
  System_String_o *v282; // x3
  int32_t v283; // w4
  int32_t v284; // w5
  bool v285; // w6
  bool v286; // w7
  __int64 v287; // x0
  System_String_o *v288; // x2
  System_String_o *v289; // x3
  int32_t v290; // w4
  int32_t v291; // w5
  bool v292; // w6
  bool v293; // w7
  int32_t v294; // w1
  __int64 v295; // x0
  __int64 v296; // x1
  System_Text_RegularExpressions_GroupCollection_o *v297; // x0
  __int64 v298; // x1
  System_Text_RegularExpressions_Group_o *Item; // x0
  System_String_o *v300; // x2
  System_String_o *v301; // x3
  int32_t v302; // w4
  int32_t v303; // w5
  bool v304; // w6
  bool v305; // w7
  System_Text_RegularExpressions_Group_o *v306; // x1
  __int64 v307; // x0
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  int32_t v314; // w1
  System_Text_RegularExpressions_GroupCollection_o *v315; // x0
  __int64 v316; // x1
  System_String_o *v317; // x2
  System_String_o *v318; // x3
  int32_t v319; // w4
  int32_t v320; // w5
  bool v321; // w6
  bool v322; // w7
  System_Text_RegularExpressions_Group_o *v323; // x1
  System_Text_RegularExpressions_Regex_o *rNpSE_5__5; // x0
  System_Text_RegularExpressions_Regex_o *v325; // x0
  System_Text_RegularExpressions_Match_o *v326; // x0
  __int64 v327; // x1
  const MethodInfo *v328; // x2
  struct ServantEntity_o *v329; // x20
  System_Text_RegularExpressions_Match_o *v330; // x21
  System_String_o *v331; // x0
  __int64 v332; // x1
  System_String_o *v333; // x20
  System_Text_RegularExpressions_GroupCollection_o *v334; // x0
  __int64 v335; // x1
  System_Text_RegularExpressions_Group_o *v336; // x0
  System_String_o *v337; // x3
  System_String_o *v338; // x21
  System_String_o *v339; // x22
  System_Text_RegularExpressions_Regex_o *v340; // x0
  System_String_o *IsMatch_82054976; // x0
  __int64 v342; // x1
  char v343; // w20
  System_Text_RegularExpressions_Regex_o *v344; // x0
  System_Text_RegularExpressions_Match_o *v345; // x0
  __int64 v346; // x1
  System_Text_RegularExpressions_Match_o *v347; // x22
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  System_String_o *v349; // x0
  __int64 v350; // x1
  System_String_o *v351; // x21
  System_Text_RegularExpressions_GroupCollection_o *v352; // x0
  __int64 v353; // x1
  System_Text_RegularExpressions_Group_o *v354; // x0
  System_String_o *v355; // x2
  System_String_o *v356; // x22
  System_Text_RegularExpressions_GroupCollection_o *v357; // x0
  __int64 v358; // x1
  System_Text_RegularExpressions_Group_o *v359; // x0
  System_String_o *v360; // x1
  System_String_o *v361; // x21
  int32_t audioType; // w8
  __int64 v363; // x0
  __int64 v364; // x1
  System_String_o *v365; // x2
  System_String_o *v366; // x3
  int32_t v367; // w4
  int32_t v368; // w5
  bool v369; // w6
  bool v370; // w7
  __int64 v371; // x20
  int32_t v372; // w1
  __int64 v373; // x0
  System_String_o *v374; // x2
  System_String_o *v375; // x3
  int32_t v376; // w4
  int32_t v377; // w5
  bool v378; // w6
  bool v379; // w7
  __int64 v380; // x0
  System_String_o *v381; // x2
  System_String_o *v382; // x3
  int32_t v383; // w4
  int32_t v384; // w5
  bool v385; // w6
  bool v386; // w7
  int32_t v387; // w1
  __int64 v388; // x0
  System_String_o *v389; // x2
  System_String_o *v390; // x3
  int32_t v391; // w4
  int32_t v392; // w5
  bool v393; // w6
  bool v394; // w7
  struct System_String_o *sequencePath_5__8; // x1
  __int64 v396; // x0
  System_String_o *v397; // x2
  System_String_o *v398; // x3
  int32_t v399; // w4
  int32_t v400; // w5
  bool v401; // w6
  bool v402; // w7
  __int64 v403; // x0
  __int64 v404; // x1
  System_String_o *v405; // x2
  System_String_o *v406; // x3
  int32_t v407; // w4
  int32_t v408; // w5
  bool v409; // w6
  bool v410; // w7
  int32_t v411; // w1
  __int64 v412; // x0
  System_String_o *v413; // x2
  System_String_o *v414; // x3
  int32_t v415; // w4
  int32_t v416; // w5
  bool v417; // w6
  bool v418; // w7
  __int64 v419; // x0
  System_String_o *v420; // x2
  System_String_o *v421; // x3
  int32_t v422; // w4
  int32_t v423; // w5
  bool v424; // w6
  bool v425; // w7
  int32_t v426; // w1
  __int64 v427; // x0
  System_String_o *v428; // x2
  System_String_o *v429; // x3
  int32_t v430; // w4
  int32_t v431; // w5
  bool v432; // w6
  bool v433; // w7
  struct System_String_o *v434; // x1
  __int64 v435; // x0
  int32_t v436; // w1
  System_String_o *v437; // x0
  const MethodInfo *v438; // x2
  struct SoundCheckMenu___c__DisplayClass20_1_o *_8__2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_object__o *voiceDataPath; // x0
  _BOOL4 v442; // w20
  Il2CppObject *v443; // x21
  Il2CppObject *v444; // x0
  __int64 v445; // x1
  Il2CppObject *v446; // x0
  __int64 v447; // x1
  struct WellFired_USFGOPlayAudioEvent_array *v448; // x9
  MissionNaviTransitionBoardItem_o *p__7__wrap9; // x20
  struct WellFired_USFGOPlayAudioEvent_array *_7__wrap9; // t1
  int v451; // w10
  System_String_o *v452; // x20
  __int64 v453; // x0
  __int64 v454; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v455; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v456; // x8
  System_Collections_Generic_List_object__o *v457; // x0
  Il2CppObject *v458; // x20
  Il2CppObject *v459; // x0
  __int64 v460; // x1
  __int64 v461; // x0
  __int64 v462; // x1
  System_String_o *v463; // x2
  System_String_o *v464; // x3
  int32_t v465; // w4
  int32_t v466; // w5
  bool v467; // w6
  bool v468; // w7
  __int64 v469; // x20
  int32_t v470; // w1
  __int64 v471; // x0
  System_String_o *v472; // x2
  System_String_o *v473; // x3
  int32_t v474; // w4
  int32_t v475; // w5
  bool v476; // w6
  bool v477; // w7
  __int64 v478; // x0
  System_String_o *v479; // x2
  System_String_o *v480; // x3
  int32_t v481; // w4
  int32_t v482; // w5
  bool v483; // w6
  bool v484; // w7
  int32_t v485; // w1
  __int64 v486; // x0
  System_String_o *v487; // x2
  System_String_o *v488; // x3
  int32_t v489; // w4
  int32_t v490; // w5
  bool v491; // w6
  bool v492; // w7
  struct System_String_o *v493; // x1
  __int64 v494; // x0
  System_String_o *v495; // x2
  System_String_o *v496; // x3
  int32_t v497; // w4
  int32_t v498; // w5
  bool v499; // w6
  bool v500; // w7
  int32_t v501; // w1
  System_String_o *v502; // x0
  const MethodInfo *v503; // x2
  SoundCheckMenu__npCheck_d__20_o *v504; // x0
  System_String_o *v505; // x2
  System_String_o *v506; // x3
  int32_t v507; // w4
  int32_t v508; // w5
  bool v509; // w6
  bool v510; // w7
  __int64 v511; // x0
  __int64 v512; // x1
  System_String_o *v513; // x2
  System_String_o *v514; // x3
  int32_t v515; // w4
  int32_t v516; // w5
  bool v517; // w6
  bool v518; // w7
  SoundCheckMenu__npCheck_d__20_o *v519; // x0
  SoundCheckMenu__npCheck_d__20_o *v520; // x0
  System_String_o *v521; // x2
  System_String_o *v522; // x3
  int32_t v523; // w4
  int32_t v524; // w5
  bool v525; // w6
  bool v526; // w7
  SoundCheckMenu__npCheck_d__20_o *v527; // x0
  System_String_o *v528; // x2
  System_String_o *v529; // x3
  int32_t v530; // w4
  int32_t v531; // w5
  bool v532; // w6
  bool v533; // w7
  SoundCheckMenu__npCheck_d__20_o *v534; // x0
  System_String_o *v535; // x2
  System_String_o *v536; // x3
  int32_t v537; // w4
  int32_t v538; // w5
  bool v539; // w6
  bool v540; // w7
  const MethodInfo *v541; // x1
  System_String_o *v542; // x2
  System_String_o *v543; // x3
  int32_t v544; // w4
  int32_t v545; // w5
  bool v546; // w6
  bool v547; // w7
  bool v548; // w8
  SoundCheckMenu__npCheck_d__20_o *v549; // x0
  __int64 v550; // x1
  System_String_o *v551; // x2
  System_String_o *v552; // x3
  int32_t v553; // w4
  int32_t v554; // w5
  bool v555; // w6
  bool v556; // w7
  SoundCheckMenu__npCheck_d__20_o *v557; // x0
  System_Collections_Generic_List_Enumerator_object__o v559; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v560; // [xsp+20h] [xbp-D0h] BYREF
  __int64 v561; // [xsp+40h] [xbp-B0h]
  SoundCheckMenu__npCheck_d__20_o **v562; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v563; // [xsp+50h] [xbp-A0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+70h] [xbp-80h] BYREF
  int v565; // [xsp+84h] [xbp-6Ch] BYREF
  SoundCheckMenu__npCheck_d__20_o *v566; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v567; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v568; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v569; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v570; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v571; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v572; // 0:x0.16

  v8 = this;
  v566 = this;
  if ( (byte_596DDB2 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_4594/*"ChrSequence1"*/);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    sub_2213A60(&StringLiteral_23420/*"not exist : "*/);
    sub_2213A60(&StringLiteral_9738/*"NP_"*/);
    sub_2213A60(&StringLiteral_80/*"\ntarget : "*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    sub_2213A60(&StringLiteral_1227/*"0_"*/);
    sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    sub_2213A60(&StringLiteral_764/*"(\\d+)_(\\d)_(.+)"*/);
    sub_2213A60(&StringLiteral_9739/*"NP_(\\d+)_(.+)"*/);
    sub_2213A60(&StringLiteral_17656/*"audio type error : "*/);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    sub_2213A60(&StringLiteral_9909/*"NoblePhantasm/Sequence/"*/);
    byte_596DDB2 = 1;
  }
  v9 = &AssetManager_TypeInfo;
  v10 = (const MethodInfo_40FBAD4 **)&Method_System_Collections_Generic_List_Enumerator_string__Dispose__;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  IsExistsSound = 0;
  v565 = 0;
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v563, 0, sizeof(v563));
  v561 = 0;
  v562 = &v566;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        goto LABEL_45;
    }
    else
    {
      v8->fields.__1__state = -1;
      v14 = (Il2CppObject *)sub_2213CCC(SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v14, 0);
      v15 = v566;
      v566->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass20_0_o *)v14;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.__8__1, (int32_t)v14, v16, v17, v18, v19, v20, v21);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v23);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !MasterData_object )
        sub_2213CDC(0, v25);
      DataMasterBase_object__object__int___getEntitys(
        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
        (const MethodInfo_3F0FEAC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  v26,
                  (const MethodInfo_3F0FEAC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v29 )
        sub_2213CDC(0, v30);
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)v29,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v32 = v566;
      v566->fields._svtLimitAddMst_5__2 = (struct ServantLimitAddMaster_o *)v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v32->fields._svtLimitAddMst_5__2,
        (int32_t)v31,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      svtLimitAddMst_5__2 = (DataMasterBase_TMaster__TEntity__PKType__o *)v566->fields._svtLimitAddMst_5__2;
      if ( !svtLimitAddMst_5__2 )
        sub_2213CDC(0, v39);
      v41 = DataMasterBase_object__object__object___getEntitys(
              svtLimitAddMst_5__2,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      v42 = v566;
      v566->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)v41;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v42->fields._svtLimitAddEntitys_5__3,
        (int32_t)v41,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      if ( !Entitys )
        sub_2213CDC(IsServant, v50);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_2213CE4(IsServant);
          v53 = &Entitys->obj.klass + i;
          v54 = (Il2CppObject *)v53[4];
          if ( !v54 )
            sub_2213CDC(IsServant, v50);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)v53[4], 0);
          if ( IsServant )
          {
            if ( !v28
              || (items = v28->fields._items,
                  v62 = Method_System_Collections_Generic_List_ServantEntity__Add__,
                  ++v28->fields._version,
                  !items) )
            {
              sub_2213CDC(IsServant, v50);
            }
            size = v28->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v28,
                v54,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + size;
              v28->fields._size = size + 1;
              v64[4] = (Il2CppClass *)v54;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v54, v55, v56, v57, v58, v59, v60);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v28 )
        sub_2213CDC(IsServant, v50);
      if ( !_4__this )
        sub_2213CDC(IsServant, v50);
      v9 = &AssetManager_TypeInfo;
      v65 = System_Text_RegularExpressions_Regex_TypeInfo;
      _4__this->fields.checkMax = v28->fields._size;
      v66 = (System_Text_RegularExpressions_Regex_o *)sub_2213CCC(v65);
      System_Text_RegularExpressions_Regex___ctor_82059952(v66, (System_String_o *)StringLiteral_764/*"(\\d+)_(\\d)_(.+)"*/, 1, 0);
      v67 = v566;
      v566->fields._rNpVoice_5__4 = v66;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v67->fields._rNpVoice_5__4,
        (int32_t)v66,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v74 = (System_Text_RegularExpressions_Regex_o *)sub_2213CCC(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_82059952(v74, (System_String_o *)StringLiteral_9739/*"NP_(\\d+)_(.+)"*/, 1, 0);
      v75 = v566;
      v566->fields._rNpSE_5__5 = v74;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v75->fields._rNpSE_5__5,
        (int32_t)v74,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      _8__1 = v566->fields.__8__1;
      v83 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v83,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_2213CDC(v84, v85);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v83;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&_8__1->fields, (int32_t)v83, v86, v87, v88, v89, v90, v91);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v559,
        v28,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      current = v559.fields._current;
      v93 = v566;
      v560 = v559;
      *(_OWORD *)&v566->fields.__7__wrap5.fields._list = *(_OWORD *)&v559.fields._list;
      v93->fields.__7__wrap5.fields._current = (struct ServantEntity_o *)current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v93->fields.__7__wrap5, 0, v94, v95, v96, v97, v98, v99);
      v8 = v566;
    }
    v8->fields.__1__state = -3;
    goto LABEL_309;
  }
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_99;
  }
  if ( _1__state != 3 )
  {
    if ( _1__state == 4 )
    {
      LOBYTE(IsExistsSound) = 0;
      v8->fields.__1__state = -1;
    }
    goto LABEL_45;
  }
  v8->fields.__1__state = -3;
  while ( 1 )
  {
    v260 = v8->fields.__7__wrap10 + 1;
    v8->fields.__7__wrap10 = v260;
LABEL_275:
    _7__wrap9 = v8->fields.__7__wrap9;
    p__7__wrap9 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap9;
    v448 = _7__wrap9;
    if ( !_7__wrap9 )
      sub_2213CDC(IsExistsSound, method);
    v451 = v448->max_length;
    if ( v260 >= v451 )
      break;
    if ( v260 >= (unsigned int)v451 )
      sub_2213CE4(IsExistsSound);
    v264 = v448->m_Items[v260];
    if ( !v264 )
      sub_2213CDC(IsExistsSound, method);
    if ( !_4__this )
      sub_2213CDC(IsExistsSound, method);
    soundId = v264->fields.soundId;
    v266 = SoundCheckMenu__IsReplaceable((SoundCheckMenu_o *)IsExistsSound, v264->fields.groupId, v2);
    if ( v266 )
    {
      svtEntity_5__7 = v566->fields._svtEntity_5__7;
      if ( !svtEntity_5__7 )
        sub_2213CDC(v266, v267);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v267, v268);
      *(_QWORD *)&v570.fields.currentCryptoKey = &svtEntity_5__7->fields;
      *(_QWORD *)&v570.fields.fakeValue = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v570, v268);
      rNpVoice_5__4 = v566->fields._rNpVoice_5__4;
      if ( !rNpVoice_5__4 )
        sub_2213CDC(0, v270);
      if ( System_Text_RegularExpressions_Regex__IsMatch_82054976(rNpVoice_5__4, soundId, 0) )
      {
        v273 = v566->fields._rNpVoice_5__4;
        if ( !v273 )
          sub_2213CDC(0, v272);
        matched = System_Text_RegularExpressions_Regex__Match_82055472(v273, soundId, 0);
        v275 = sub_2213B20(string___TypeInfo, 5);
        v278 = v566->fields._svtEntity_5__7;
        if ( !v278 )
          sub_2213CDC(v275, v276);
        v279 = v275;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v276, v277);
        *(_QWORD *)&v571.fields.currentCryptoKey = &v278->fields;
        *(_QWORD *)&v571.fields.fakeValue = 0;
        v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v571, v277);
        if ( !v279 )
          sub_2213CDC(v280, v280);
        if ( !*(_DWORD *)(v279 + 24) )
          sub_2213CE4(v280);
        *(_QWORD *)(v279 + 32) = v280;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v279 + 32), (int32_t)v280, v281, v282, v283, v284, v285, v286);
        if ( (*(_DWORD *)(v279 + 24) & 0xFFFFFFFE) == 0 )
          sub_2213CE4(v287);
        v294 = StringLiteral_16746/*"_"*/;
        *(_QWORD *)(v279 + 40) = StringLiteral_16746/*"_"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v279 + 40), v294, v288, v289, v290, v291, v292, v293);
        if ( !matched )
          sub_2213CDC(v295, v296);
        v297 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v297 )
          sub_2213CDC(0, v298);
        Item = System_Text_RegularExpressions_GroupCollection__get_Item(v297, 2, 0);
        v306 = 0;
        if ( Item )
        {
          Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                                                             Item,
                                                             Item->klass->vtable._3_ToString.method);
          v306 = Item;
        }
        if ( *(_DWORD *)(v279 + 24) < 3u )
          goto LABEL_240;
        *(_QWORD *)(v279 + 48) = v306;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v279 + 48), (int32_t)v306, v300, v301, v302, v303, v304, v305);
        if ( (*(_DWORD *)(v279 + 24) & 0xFFFFFFFC) == 0 )
          sub_2213CE4(v307);
        v314 = StringLiteral_16746/*"_"*/;
        *(_QWORD *)(v279 + 56) = StringLiteral_16746/*"_"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v279 + 56), v314, v308, v309, v310, v311, v312, v313);
        v315 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v315 )
          sub_2213CDC(0, v316);
        Item = System_Text_RegularExpressions_GroupCollection__get_Item(v315, 3, 0);
        v323 = 0;
        if ( Item )
        {
          Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                                                             Item,
                                                             Item->klass->vtable._3_ToString.method);
          v323 = Item;
        }
        if ( *(_DWORD *)(v279 + 24) <= 4u )
LABEL_240:
          sub_2213CE4(Item);
        *(_QWORD *)(v279 + 64) = v323;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v279 + 64), (int32_t)v323, v317, v318, v319, v320, v321, v322);
        soundId = System_String__Concat_75697120((System_String_array *)v279, 0);
      }
      rNpSE_5__5 = v566->fields._rNpSE_5__5;
      if ( !rNpSE_5__5 )
        sub_2213CDC(0, v272);
      if ( System_Text_RegularExpressions_Regex__IsMatch_82054976(rNpSE_5__5, soundId, 0) )
      {
        v325 = v566->fields._rNpSE_5__5;
        if ( !v325 )
          sub_2213CDC(0, v267);
        v326 = System_Text_RegularExpressions_Regex__Match_82055472(v325, soundId, 0);
        v329 = v566->fields._svtEntity_5__7;
        if ( !v329 )
          sub_2213CDC(v326, v327);
        v330 = v326;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v327, v328);
        *(_QWORD *)&v572.fields.currentCryptoKey = &v329->fields;
        *(_QWORD *)&v572.fields.fakeValue = 0;
        v331 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v572, v328);
        if ( !v330 )
          sub_2213CDC(v331, v332);
        v333 = v331;
        v334 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v330->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v330,
                                                                     v330->klass->vtable._5_get_Groups.method);
        if ( !v334 )
          sub_2213CDC(0, v335);
        v336 = System_Text_RegularExpressions_GroupCollection__get_Item(v334, 2, 0);
        v337 = 0;
        v338 = (System_String_o *)StringLiteral_16746/*"_"*/;
        v339 = (System_String_o *)StringLiteral_9738/*"NP_"*/;
        if ( v336 )
          v337 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v336->klass->vtable._3_ToString.methodPtr)(
                                      v336,
                                      v336->klass->vtable._3_ToString.method);
        soundId = System_String__Concat_75696856(v339, v333, v338, v337, 0);
      }
    }
    v340 = v566->fields._rNpVoice_5__4;
    if ( !v340 )
      sub_2213CDC(0, v267);
    IsMatch_82054976 = (System_String_o *)System_Text_RegularExpressions_Regex__IsMatch_82054976(v340, soundId, 0);
    v343 = (char)IsMatch_82054976;
    if ( ((unsigned __int8)IsMatch_82054976 & 1) != 0 )
    {
      v344 = v566->fields._rNpVoice_5__4;
      if ( !v344 )
        sub_2213CDC(0, v342);
      v345 = System_Text_RegularExpressions_Regex__Match_82055472(v344, soundId, 0);
      v347 = v345;
      svtLimitAddEntity_5__9 = v566->fields._svtLimitAddEntity_5__9;
      if ( svtLimitAddEntity_5__9 )
      {
        v349 = System_Int32__ToString((int)svtLimitAddEntity_5__9 + 52, 0);
        if ( !v347 )
          sub_2213CDC(v349, v350);
        v351 = v349;
        v352 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v347->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v347,
                                                                     v347->klass->vtable._5_get_Groups.method);
        if ( !v352 )
          sub_2213CDC(0, v353);
        v354 = System_Text_RegularExpressions_GroupCollection__get_Item(v352, 3, 0);
        v355 = 0;
        v356 = (System_String_o *)StringLiteral_16746/*"_"*/;
        if ( v354 )
          v355 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *, _QWORD))v354->klass->vtable._3_ToString.methodPtr)(
                                      v354,
                                      v354->klass->vtable._3_ToString.method,
                                      0);
        IsMatch_82054976 = System_String__Concat_75694928(v351, v356, v355, 0);
        soundId = IsMatch_82054976;
      }
      else
      {
        if ( !v345 )
          sub_2213CDC(0, v346);
        v357 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v345->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v345,
                                                                     v345->klass->vtable._5_get_Groups.method);
        if ( !v357 )
          sub_2213CDC(0, v358);
        v359 = System_Text_RegularExpressions_GroupCollection__get_Item(v357, 3, 0);
        v360 = 0;
        v361 = (System_String_o *)StringLiteral_1227/*"0_"*/;
        if ( v359 )
          v360 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v359->klass->vtable._3_ToString.methodPtr)(
                                      v359,
                                      v359->klass->vtable._3_ToString.method);
        IsMatch_82054976 = System_String__Concat_75651716(v361, v360, 0);
        soundId = IsMatch_82054976;
      }
    }
    audioType = v264->fields.audioType;
    if ( (unsigned int)(audioType - 2) < 2 )
    {
      if ( (v343 & 1) != 0 )
        goto LABEL_221;
      v363 = sub_2213B20(string___TypeInfo, 5);
      v371 = v363;
      if ( !v363 )
        sub_2213CDC(0, v364);
      if ( !*(_DWORD *)(v363 + 24) )
        sub_2213CE4(v363);
      v372 = StringLiteral_17656/*"audio type error : "*/;
      *(_QWORD *)(v363 + 32) = StringLiteral_17656/*"audio type error : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v363 + 32), v372, v365, v366, v367, v368, v369, v370);
      if ( (*(_DWORD *)(v371 + 24) & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v373);
      *(_QWORD *)(v371 + 40) = soundId;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 40), (int32_t)soundId, v374, v375, v376, v377, v378, v379);
      if ( *(_DWORD *)(v371 + 24) <= 2u )
        sub_2213CE4(v380);
      v387 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v371 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 48), v387, v381, v382, v383, v384, v385, v386);
      if ( (*(_DWORD *)(v371 + 24) & 0xFFFFFFFC) == 0 )
        sub_2213CE4(v388);
      sequencePath_5__8 = v566->fields._sequencePath_5__8;
      *(_QWORD *)(v371 + 56) = sequencePath_5__8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v371 + 56),
        (int32_t)sequencePath_5__8,
        v389,
        v390,
        v391,
        v392,
        v393,
        v394);
      if ( *(_DWORD *)(v371 + 24) <= 4u )
        sub_2213CE4(v396);
      goto LABEL_220;
    }
    if ( audioType == 1 && (v343 & 1) != 0 )
    {
      v403 = sub_2213B20(string___TypeInfo, 5);
      v371 = v403;
      if ( !v403 )
        sub_2213CDC(0, v404);
      if ( !*(_DWORD *)(v403 + 24) )
        sub_2213CE4(v403);
      v411 = StringLiteral_17656/*"audio type error : "*/;
      *(_QWORD *)(v403 + 32) = StringLiteral_17656/*"audio type error : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v403 + 32), v411, v405, v406, v407, v408, v409, v410);
      if ( (*(_DWORD *)(v371 + 24) & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v412);
      *(_QWORD *)(v371 + 40) = soundId;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 40), (int32_t)soundId, v413, v414, v415, v416, v417, v418);
      if ( *(_DWORD *)(v371 + 24) <= 2u )
        sub_2213CE4(v419);
      v426 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v371 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 48), v426, v420, v421, v422, v423, v424, v425);
      if ( (*(_DWORD *)(v371 + 24) & 0xFFFFFFFC) == 0 )
        sub_2213CE4(v427);
      v434 = v566->fields._sequencePath_5__8;
      *(_QWORD *)(v371 + 56) = v434;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 56), (int32_t)v434, v428, v429, v430, v431, v432, v433);
      if ( *(_DWORD *)(v371 + 24) <= 4u )
        sub_2213CE4(v435);
LABEL_220:
      v436 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v371 + 64) = StringLiteral_43/*"\n"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v371 + 64), v436, v397, v398, v399, v400, v401, v402);
      v437 = System_String__Concat_75697120((System_String_array *)v371, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v437, v438);
    }
LABEL_221:
    _8__2 = v566->fields.__8__2;
    if ( !_8__2 )
      sub_2213CDC(IsMatch_82054976, v342);
    CS___8__locals1 = _8__2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_2213CDC(IsMatch_82054976, v342);
    voiceDataPath = (System_Collections_Generic_List_object__o *)CS___8__locals1->fields.voiceDataPath;
    if ( !voiceDataPath )
      sub_2213CDC(0, v342);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v560,
      voiceDataPath,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v563 = v560;
    do
    {
      v442 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v563,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v442 )
        break;
      v443 = v563.fields._current;
      v444 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v444 )
        sub_2213CDC(0, v445);
    }
    while ( !SoundManager__IsExistsSound((SoundManager_o *)v444, (System_String_o *)v443, soundId, 0) );
    System_Collections_Generic_List_Enumerator_object___Dispose(&v563, *v10);
    v446 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v446 )
      sub_2213CDC(0, v447);
    IsExistsSound = SoundManager__IsExistsSound(
                      (SoundManager_o *)v446,
                      (System_String_o *)StringLiteral_3205/*"Battle"*/,
                      soundId,
                      0);
    if ( !v442 && !IsExistsSound )
    {
      v461 = sub_2213B20(string___TypeInfo, 5);
      v469 = v461;
      if ( !v461 )
        sub_2213CDC(0, v462);
      if ( !*(_DWORD *)(v461 + 24) )
        sub_2213CE4(v461);
      v470 = StringLiteral_23420/*"not exist : "*/;
      *(_QWORD *)(v461 + 32) = StringLiteral_23420/*"not exist : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v461 + 32), v470, v463, v464, v465, v466, v467, v468);
      if ( (*(_DWORD *)(v469 + 24) & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v471);
      *(_QWORD *)(v469 + 40) = soundId;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v469 + 40), (int32_t)soundId, v472, v473, v474, v475, v476, v477);
      if ( *(_DWORD *)(v469 + 24) <= 2u )
        sub_2213CE4(v478);
      v485 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v469 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v469 + 48), v485, v479, v480, v481, v482, v483, v484);
      if ( (*(_DWORD *)(v469 + 24) & 0xFFFFFFFC) == 0 )
        sub_2213CE4(v486);
      v493 = v566->fields._sequencePath_5__8;
      *(_QWORD *)(v469 + 56) = v493;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v469 + 56), (int32_t)v493, v487, v488, v489, v490, v491, v492);
      if ( *(_DWORD *)(v469 + 24) <= 4u )
        sub_2213CE4(v494);
      v501 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v469 + 64) = StringLiteral_43/*"\n"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v469 + 64), v501, v495, v496, v497, v498, v499, v500);
      v502 = System_String__Concat_75697120((System_String_array *)v469, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v502, v503);
      v504 = v566;
      v566->fields.__2__current = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v504->fields.__2__current, 0, v505, v506, v507, v508, v509, v510);
      v261 = v566;
      v262 = 3;
LABEL_150:
      v261->fields.__1__state = v262;
      LOBYTE(IsExistsSound) = 1;
      goto LABEL_45;
    }
    v8 = v566;
  }
  p__7__wrap9->klass = 0;
  sub_2213A04(p__7__wrap9, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
  while ( 1 )
  {
    v452 = v566->fields._sequencePath_5__8;
    if ( !*(&(*v9)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v9, v250, v251);
    AssetManager__releaseAssetStorage(v452, 0);
    v455 = v566->fields.__8__2;
    if ( !v455 )
      sub_2213CDC(v453, v454);
    v456 = v455->fields.CS___8__locals1;
    if ( !v456 )
      sub_2213CDC(v453, v454);
    v457 = (System_Collections_Generic_List_object__o *)v456->fields.voiceDataPath;
    if ( !v457 )
      sub_2213CDC(0, v454);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v560,
      v457,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v563 = v560;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v563,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v458 = v563.fields._current;
      v459 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v459 )
        sub_2213CDC(0, v460);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v459, (System_String_o *)v458, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(&v563, *v10);
    if ( !_4__this )
      sub_2213CDC(v511, v512);
    v519 = v566;
    ++_4__this->fields.checkCnt;
    v519->fields.__8__2 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v519->fields.__8__2, 0, v513, v514, v515, v516, v517, v518);
    v520 = v566;
    v566->fields._sequencePath_5__8 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v520->fields._sequencePath_5__8,
      0,
      v521,
      v522,
      v523,
      v524,
      v525,
      v526);
    v527 = v566;
    v566->fields._svtLimitAddEntity_5__9 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v527->fields._svtLimitAddEntity_5__9,
      0,
      v528,
      v529,
      v530,
      v531,
      v532,
      v533);
    v534 = v566;
    v566->fields._svtEntity_5__7 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v534->fields._svtEntity_5__7,
      0,
      v535,
      v536,
      v537,
      v538,
      v539,
      v540);
    v8 = v566;
LABEL_309:
    v548 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap5,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    v549 = v566;
    if ( !v548 )
    {
      SoundCheckMenu__npCheck_d__20____m__Finally1(v566, v541);
      v557 = v566;
      *(_QWORD *)&v566->fields.__7__wrap5.fields._index = 0;
      v557->fields.__7__wrap5.fields._current = 0;
      v557->fields.__7__wrap5.fields._list = 0;
      if ( !_4__this )
        sub_2213CDC(v557, v550);
      _4__this->fields.nextCheck = 0;
      v557->fields.__2__current = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v557->fields.__2__current, 0, v551, v552, v553, v554, v555, v556);
      v261 = v566;
      v262 = 4;
      goto LABEL_150;
    }
    v101 = v566->fields.__7__wrap5.fields._current;
    v566->fields._svtEntity_5__7 = v101;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v549->fields._svtEntity_5__7,
      (int32_t)v101,
      v542,
      v543,
      v544,
      v545,
      v546,
      v547);
    v102 = (Il2CppObject *)sub_2213CCC(SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    System_Object___ctor(v102, 0);
    v103 = v566;
    v566->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass20_1_o *)v102;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v103->fields.__8__2,
      (int32_t)v102,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v117 = v566->fields.__8__2;
    if ( !v117 )
      sub_2213CDC(0, v110);
    v118 = v566->fields.__8__1;
    v117->fields.CS___8__locals1 = v118;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v117->fields.CS___8__locals1,
      (int32_t)v118,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    v122 = v566->fields._svtEntity_5__7;
    if ( !v122 )
      sub_2213CDC(v119, v120);
    id = v122->fields.id;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v120, v121);
    *(_QWORD *)&v567.fields.currentCryptoKey = &id;
    *(_QWORD *)&v567.fields.fakeValue = 0;
    v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v567, v121);
    v124 = System_String__Concat_75651716((System_String_o *)StringLiteral_9909/*"NoblePhantasm/Sequence/"*/, v123, 0);
    v125 = v566;
    v566->fields._sequencePath_5__8 = v124;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v125->fields._sequencePath_5__8,
      (int32_t)v124,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131);
    v134 = v566->fields._sequencePath_5__8;
    if ( !*(&(*v9)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v9, v132, v133);
    isExistAssetStorage = AssetManager__isExistAssetStorage(v134, 0);
    if ( !isExistAssetStorage )
      break;
    v143 = v566;
    v566->fields._svtLimitAddEntity_5__9 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v143->fields._svtLimitAddEntity_5__9,
      0,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
    svtLimitAddEntitys_5__3 = v566->fields._svtLimitAddEntitys_5__3;
    if ( !svtLimitAddEntitys_5__3 )
      sub_2213CDC(v144, v145);
    v148 = svtLimitAddEntitys_5__3->max_length;
    v149 = v9;
    v150 = _4__this;
    v151 = v10;
    if ( v148 >= 1 )
    {
      v152 = 0;
      while ( 1 )
      {
        if ( v152 >= v148 )
          sub_2213CE4(v144);
        v153 = svtLimitAddEntitys_5__3->m_Items[v152];
        if ( !v153 )
          sub_2213CDC(v144, v145);
        v154 = v566->fields._svtEntity_5__7;
        if ( !v154 )
          sub_2213CDC(v144, v145);
        v155 = *(_QWORD *)&v154->fields.id.fields.currentCryptoKey;
        v156 = *(_QWORD *)&v154->fields.id.fields.fakeValue;
        svtId = v153->fields.svtId;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v145, v146);
        *(_QWORD *)&v568.fields.currentCryptoKey = v155;
        *(_QWORD *)&v568.fields.fakeValue = v156;
        v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v568, 0);
        if ( svtId == (_DWORD)v144 )
          break;
        v148 = svtLimitAddEntitys_5__3->max_length;
        if ( (int)++v152 >= v148 )
          goto LABEL_66;
      }
      v163 = v566;
      v566->fields._svtLimitAddEntity_5__9 = v153;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v163->fields._svtLimitAddEntity_5__9,
        (int32_t)v153,
        v146,
        v158,
        v159,
        v160,
        v161,
        v162);
    }
LABEL_66:
    v164 = v566->fields._svtEntity_5__7;
    if ( !v164 )
      sub_2213CDC(v144, v145);
    v165 = *(_QWORD *)&v164->fields.id.fields.currentCryptoKey;
    v166 = *(_QWORD *)&v164->fields.id.fields.fakeValue;
    v167 = v566->fields._svtLimitAddMst_5__2;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v145, v146);
    *(_QWORD *)&v569.fields.currentCryptoKey = v165;
    *(_QWORD *)&v569.fields.fakeValue = v166;
    v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v569, 0);
    if ( !v167 )
      sub_2213CDC(v168, (unsigned int)v168);
    v10 = v151;
    v9 = v149;
    VoiceId = ServantLimitAddMaster__getVoiceId(v167, v168, 0, 0);
    v565 = VoiceId;
    v171 = v566->fields.__8__2;
    if ( !v171 )
      sub_2213CDC(VoiceId, v170);
    v172 = v171->fields.CS___8__locals1;
    if ( !v172 )
      sub_2213CDC(VoiceId, v170);
    v173 = v172->fields.voiceDataPath;
    if ( !v173 )
      sub_2213CDC(VoiceId, v170);
    v174 = v173->fields._size;
    _4__this = v150;
    v175 = v173->fields._version + 1;
    v173->fields._size = 0;
    v173->fields._version = v175;
    if ( v174 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v173->fields._items, 0, v174, 0);
      v171 = v566->fields.__8__2;
      if ( !v171 )
        sub_2213CDC(VoiceId, v170);
    }
    v176 = v171->fields.CS___8__locals1;
    if ( !v176 )
      sub_2213CDC(VoiceId, v170);
    v177 = (System_Collections_Generic_List_object__o *)v176->fields.voiceDataPath;
    v178 = System_Int32__ToString((int32_t)&v565, 0);
    v179 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_4596/*"ChrVoice_"*/, v178, 0);
    v186 = v179;
    if ( !v177
      || (v187 = v177->fields._items,
          v188 = Method_System_Collections_Generic_List_string__Add__,
          ++v177->fields._version,
          !v187) )
    {
      sub_2213CDC(v179, v179);
    }
    v189 = v177->fields._size;
    if ( (unsigned int)v189 >= LODWORD(v187->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v177,
        v179,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
    }
    else
    {
      v190 = &v187->obj.klass + v189;
      v177->fields._size = v189 + 1;
      v190[4] = (Il2CppClass *)v186;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v190 + 4), (int32_t)v186, v180, v181, v182, v183, v184, v185);
    }
    v193 = v566->fields.__8__2;
    if ( !v193 )
      sub_2213CDC(v191, v192);
    v194 = v193->fields.CS___8__locals1;
    if ( !v194 )
      sub_2213CDC(v191, v192);
    v195 = (System_Collections_Generic_List_object__o *)v194->fields.voiceDataPath;
    v196 = System_Int32__ToString((int32_t)&v565, 0);
    v197 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13301/*"Servants_"*/, v196, 0);
    v204 = v197;
    if ( !v195
      || (v205 = v195->fields._items,
          v206 = Method_System_Collections_Generic_List_string__Add__,
          ++v195->fields._version,
          !v205) )
    {
      sub_2213CDC(v197, v197);
    }
    v207 = v195->fields._size;
    if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v195,
        v197,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
    }
    else
    {
      v208 = &v205->obj.klass + v207;
      v195->fields._size = v207 + 1;
      v208[4] = (Il2CppClass *)v204;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v208 + 4), (int32_t)v204, v198, v199, v200, v201, v202, v203);
    }
    v211 = v566->fields.__8__2;
    if ( !v211 )
      sub_2213CDC(v209, v210);
    v212 = v211->fields.CS___8__locals1;
    if ( !v212 )
      sub_2213CDC(v209, v210);
    v213 = (System_Collections_Generic_List_object__o *)v212->fields.voiceDataPath;
    v214 = System_Int32__ToString((int32_t)&v565, 0);
    v215 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_9911/*"NoblePhantasm_"*/, v214, 0);
    v222 = v215;
    if ( !v213
      || (v223 = v213->fields._items,
          v224 = Method_System_Collections_Generic_List_string__Add__,
          ++v213->fields._version,
          !v223) )
    {
      sub_2213CDC(v215, v215);
    }
    v225 = v213->fields._size;
    if ( (unsigned int)v225 >= LODWORD(v223->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v213,
        v215,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
    }
    else
    {
      v226 = &v223->obj.klass + v225;
      v213->fields._size = v225 + 1;
      v226[4] = (Il2CppClass *)v222;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v226 + 4), (int32_t)v222, v216, v217, v218, v219, v220, v221);
    }
    v234 = v566->fields.__8__2;
    if ( !v234 )
      sub_2213CDC(0, v227);
    v234->fields.nobleSequenceData = 0;
    p_fields = &v234->fields;
    p_fields->isLoadEnd = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_fields, 0, v228, v229, v230, v231, v232, v233);
    v236 = v566->fields._sequencePath_5__8;
    v237 = (Il2CppObject *)v566->fields.__8__2;
    v238 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v238, v237, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__, 0);
    if ( !*(&(*v149)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v149, v239, v240);
    IsExistsSound = AssetManager__loadAssetStorage(v236, v238, 1, 0, 0);
    v8 = v566;
LABEL_99:
    v241 = v8->fields.__8__2;
    if ( !v241 )
      sub_2213CDC(IsExistsSound, method);
    if ( !v241->fields.isLoadEnd )
    {
      v8->fields.__2__current = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current,
        0,
        (System_String_o *)v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v261 = v566;
      v262 = 2;
      goto LABEL_150;
    }
    nobleSequenceData = v241->fields.nobleSequenceData;
    if ( !nobleSequenceData )
      sub_2213CDC(IsExistsSound, method);
    objectList = nobleSequenceData->fields.objectList;
    if ( !objectList )
      sub_2213CDC(IsExistsSound, method);
    v244 = objectList->max_length;
    v245 = 0;
    if ( v244 >= 1 )
    {
      v246 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v246 >= v244 )
          sub_2213CE4(IsExistsSound);
        v245 = objectList->m_Items[v246];
        if ( !v245 )
          sub_2213CDC(IsExistsSound, method);
        name = UnityEngine_Object__get_name(objectList->m_Items[v246], 0);
        if ( !name )
          sub_2213CDC(0, v248);
        IsExistsSound = System_String__Equals_75686512(name, (System_String_o *)StringLiteral_4594/*"ChrSequence1"*/, 0);
        if ( IsExistsSound )
          break;
        v244 = objectList->max_length;
        if ( (int)++v246 >= v244 )
        {
          v245 = 0;
          goto LABEL_113;
        }
      }
      if ( (UnityEngine_GameObject_c *)v245->klass != UnityEngine_GameObject_TypeInfo )
        v245 = 0;
    }
LABEL_113:
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v249 = UnityEngine_Object__op_Inequality(v245, 0, 0);
    if ( v249 )
    {
      if ( !v245 )
        sub_2213CDC(v249, v250);
      ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                (UnityEngine_GameObject_o *)v245,
                                                (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      v253 = v566;
      v566->fields.__7__wrap9 = (struct WellFired_USFGOPlayAudioEvent_array *)ComponentsInChildren_object__59472212;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v253->fields.__7__wrap9,
        (int32_t)ComponentsInChildren_object__59472212,
        v254,
        v255,
        v256,
        v257,
        v258,
        v259);
      v8 = v566;
      v260 = 0;
      v566->fields.__7__wrap10 = 0;
      goto LABEL_275;
    }
  }
  if ( !_4__this )
    sub_2213CDC(isExistAssetStorage, v136);
  v263 = v566;
  ++_4__this->fields.checkCnt;
  v263->fields.__2__current = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v263->fields.__2__current, 0, v137, v138, v139, v140, v141, v142);
  LOBYTE(IsExistsSound) = 1;
  v566->fields.__1__state = 1;
LABEL_45:
  v100 = v561;
  if ( v561 )
  {
    sub_2009070(&v562, method);
    sub_2213CD4(v100);
  }
  return IsExistsSound;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundCheckMenu__npCheck_d__20_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  if ( (unsigned int)(this->fields.__1__state + 3) <= 6 && ((1 << (LOBYTE(this->fields.__1__state) + 3)) & 0x71) != 0 )
    SoundCheckMenu__npCheck_d__20____m__Finally1(this, method);
}


void SoundCheckMenu__npCheck_d__20____m__Finally1(SoundCheckMenu__npCheck_d__20_o *this, const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_596DDB3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_596DDB3 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    v3);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v8; // x20
  _BOOL8 v9; // x0
  int _1__state; // w8
  SoundCheckMenu_o *_4__this; // x19
  MissionNaviTransitionBoardItem_o *p__8__2; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v27; // x8
  Il2CppObject *v28; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x22
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v65; // x20
  __int64 v66; // x0
  __int64 v67; // x1
  System_Object_array *IsServant; // x0
  __int64 v69; // x1
  int max_length; // w8
  int i; // w26
  Il2CppClass **v72; // x8
  Il2CppObject *v73; // x22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v84; // x9
  struct SoundCheckMenu___c__DisplayClass22_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v86; // x22
  __int64 v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  Il2CppObject *current; // x8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v96; // x9
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  const MethodInfo *v103; // x1
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  bool v110; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v111; // x0
  struct ServantEntity_o *v112; // x1
  Il2CppObject *v113; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v114; // x0
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  __int64 v121; // x1
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  struct SoundCheckMenu___c__DisplayClass22_1_o *_8__2; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *v129; // x1
  __int64 v130; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  struct ServantEntity_o *svtEntity_5__5; // x8
  __int64 v134; // x21
  __int64 v135; // x22
  ServantVoiceMaster_o *svtVoiceMst_5__2; // x20
  __int64 v137; // x0
  struct ServantVoiceEntity_array *Entity_49837844; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  __int64 v146; // x0
  __int64 v147; // x1
  struct ServantEntity_o *v148; // x8
  ServantLimitAddMaster_o *svtLimitAddMst_5__3; // x20
  __int64 v150; // x0
  __int64 VoiceId; // x0
  __int64 v152; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v153; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x9
  struct System_Collections_Generic_List_string__o *voiceDataPath; // x9
  int32_t v156; // w2
  int v157; // w10
  struct SoundCheckMenu___c__DisplayClass22_0_o *v158; // x8
  System_Collections_Generic_List_object__o *v159; // x20
  System_String_o *v160; // x1
  Il2CppObject *v161; // x0
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  Il2CppObject *v168; // x1
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  Il2CppClass **v172; // x0
  __int64 v173; // x0
  __int64 v174; // x1
  int32_t _7__wrap12; // w8
  int32_t v176; // w8
  __int64 v177; // x0
  __int64 v178; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v179; // x8
  struct SoundCheckMenu___c__DisplayClass22_1_o *v180; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v181; // x8
  System_Collections_Generic_List_object__o *v182; // x20
  System_String_o *v183; // x1
  Il2CppObject *v184; // x0
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  Il2CppObject *v191; // x1
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  Il2CppClass **v195; // x0
  __int64 v196; // x0
  __int64 v197; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v198; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v199; // x8
  System_Collections_Generic_List_object__o *v200; // x20
  System_String_o *v201; // x1
  Il2CppObject *v202; // x0
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  Il2CppObject *v209; // x1
  struct System_Object_array *v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  Il2CppClass **v213; // x0
  __int64 v214; // x0
  __int64 v215; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v216; // x8
  Il2CppObject *v217; // x0
  __int64 v218; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v219; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v220; // x9
  __int64 DataCnt; // x1
  SoundManager_o *v222; // x20
  System_Collections_Generic_List_object__o *v223; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v225; // x23
  System_Action_o *v226; // x22
  __int64 v227; // x0
  __int64 v228; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v229; // x8
  struct ServantVoiceEntity_array *svtVoiceEntitys_5__6; // x1
  __int64 v231; // x1
  System_String_o *v232; // x2
  System_String_o *v233; // x3
  int32_t v234; // w4
  int32_t v235; // w5
  bool v236; // w6
  bool v237; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v238; // x0
  int v239; // w9
  struct ServantVoiceEntity_o *v240; // x1
  __int64 j; // x1
  ServantVoiceEntity_o *svtVoiceEntity_5__9; // x0
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  Il2CppObject *v244; // x8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v245; // x9
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v252; // x8
  struct ServantVoiceData_array *v253; // x1
  MissionNaviTransitionBoardItem_o *p__7__wrap11; // x0
  struct ServantVoiceData_array *_7__wrap11; // x9
  int32_t v256; // w10
  const MethodInfo *v257; // x1
  System_String_o *v258; // x2
  System_String_o *v259; // x3
  int32_t v260; // w4
  int32_t v261; // w5
  bool v262; // w6
  bool v263; // w7
  bool v264; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v265; // x0
  struct ServantVoiceEntity_array *_7__wrap6; // x10
  int v267; // w11
  __int64 v268; // x0
  __int64 v269; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v270; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v271; // x8
  System_Collections_Generic_List_object__o *v272; // x0
  Il2CppObject *v273; // x20
  Il2CppObject *v274; // x0
  __int64 v275; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v276; // x10
  struct SoundCheckMenu___c__DisplayClass22_0_o *v277; // x10
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
  __int64 v288; // x2
  struct ServantEntity_o *v289; // x8
  _BOOL4 v290; // w21
  __int64 v291; // x22
  __int64 v292; // x23
  __int64 v293; // x0
  const MethodInfo *v294; // x3
  System_String_o *v295; // x2
  System_String_o *v296; // x3
  int32_t v297; // w4
  int32_t v298; // w5
  bool v299; // w6
  bool v300; // w7
  __int64 v301; // x0
  __int64 v302; // x1
  System_String_o *v303; // x2
  System_String_o *v304; // x3
  int32_t v305; // w4
  int32_t v306; // w5
  bool v307; // w6
  bool v308; // w7
  __int64 v309; // x20
  int32_t v310; // w1
  __int64 v311; // x0
  System_String_o *v312; // x2
  System_String_o *v313; // x3
  int32_t v314; // w4
  int32_t v315; // w5
  bool v316; // w6
  bool v317; // w7
  struct System_String_o *id; // x1
  __int64 v319; // x0
  System_String_o *v320; // x2
  System_String_o *v321; // x3
  int32_t v322; // w4
  int32_t v323; // w5
  bool v324; // w6
  bool v325; // w7
  int32_t v326; // w1
  __int64 v327; // x0
  __int64 v328; // x1
  const MethodInfo *v329; // x2
  struct ServantEntity_o *v330; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // q0
  int v332; // w8
  System_String_o *v333; // x0
  System_String_o *v334; // x2
  System_String_o *v335; // x3
  int32_t v336; // w4
  int32_t v337; // w5
  bool v338; // w6
  bool v339; // w7
  __int64 v340; // x0
  System_String_o *v341; // x2
  System_String_o *v342; // x3
  int32_t v343; // w4
  int32_t v344; // w5
  bool v345; // w6
  bool v346; // w7
  int32_t v347; // w1
  System_String_o *v348; // x0
  const MethodInfo *v349; // x2
  SoundCheckMenu__svtVoiceCheck_d__22_o *v350; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v351; // x8
  int v352; // w9
  __int64 v353; // x0
  __int64 v354; // x1
  System_String_o *v355; // x2
  System_String_o *v356; // x3
  int32_t v357; // w4
  int32_t v358; // w5
  bool v359; // w6
  bool v360; // w7
  SoundCheckMenu__svtVoiceCheck_d__22_o *v361; // x0
  __int64 v362; // x19
  System_Collections_Generic_List_Enumerator_object__o v364; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v365; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v366; // [xsp+40h] [xbp-90h]
  SoundCheckMenu__svtVoiceCheck_d__22_o **v367; // [xsp+48h] [xbp-88h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v368; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v369; // [xsp+60h] [xbp-70h] BYREF
  int v370; // [xsp+7Ch] [xbp-54h] BYREF
  SoundCheckMenu__svtVoiceCheck_d__22_o *v371; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v372; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v373; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v374; // 0:x0.16

  v371 = this;
  v8 = this;
  if ( (byte_596DDB4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__);
    sub_2213A60(&SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    sub_2213A60(&StringLiteral_23420/*"not exist : "*/);
    sub_2213A60(&StringLiteral_80/*"\ntarget : "*/);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_596DDB4 = 1;
  }
  v370 = 0;
  v9 = 0;
  memset(&v369, 0, sizeof(v369));
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v368 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v366 = 0;
  v367 = &v371;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      _7__wrap12 = v8->fields.__7__wrap12;
      v8->fields.__1__state = -4;
      v176 = _7__wrap12 + 1;
      v8->fields.__7__wrap12 = v176;
      goto LABEL_125;
    }
    if ( _1__state != 3 )
      goto LABEL_173;
    v8->fields.__8__2 = 0;
    p__8__2 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__8__2;
    p__8__2[-1].fields._QuestId_k__BackingField = -3;
    sub_2213A04(p__8__2, 0, v2, v3, v4, v5, v6, v7);
    v13 = v371;
    v371->fields._svtVoiceEntitys_5__6 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields._svtVoiceEntitys_5__6, 0, v14, v15, v16, v17, v18, v19);
    v20 = v371;
    v371->fields._svtEntity_5__5 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields._svtEntity_5__5, 0, v21, v22, v23, v24, v25, v26);
    v27 = v371;
    goto LABEL_32;
  }
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v28 = (Il2CppObject *)sub_2213CCC(SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
    System_Object___ctor(v28, 0);
    v29 = v371;
    v371->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass22_0_o *)v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.__8__1, (int32_t)v28, v30, v31, v32, v33, v34, v35);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v37);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v39 )
      sub_2213CDC(0, v40);
    v41 = DataManager__GetMasterData_object_(
            (DataManager_o *)v39,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v42 = v371;
    v371->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)v41;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v42->fields._svtVoiceMst_5__2,
      (int32_t)v41,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v49 )
      sub_2213CDC(0, v50);
    v51 = DataManager__GetMasterData_object_(
            (DataManager_o *)v49,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v52 = v371;
    v371->fields._svtLimitAddMst_5__3 = (struct ServantLimitAddMaster_o *)v51;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v52->fields._svtLimitAddMst_5__3,
      (int32_t)v51,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v59 )
      sub_2213CDC(0, v60);
    v61 = DataManager__GetMasterData_object_(
            (DataManager_o *)v59,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___);
    if ( !MasterData_object )
      sub_2213CDC(v61, v62);
    v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (const MethodInfo_3F0FEAC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    v65 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v65,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
    if ( !v63 )
      sub_2213CDC(v66, v67);
    IsServant = DataMasterBase_object__object__object___getEntitys(
                  v63,
                  (const MethodInfo_3F14B68 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
    if ( !Entitys )
      sub_2213CDC(IsServant, v69);
    max_length = Entitys->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(IsServant);
        v72 = &Entitys->obj.klass + i;
        v73 = (Il2CppObject *)v72[4];
        if ( !v73 )
          sub_2213CDC(IsServant, v69);
        IsServant = (System_Object_array *)ServantEntity__get_IsServant((ServantEntity_o *)v72[4], 0);
        if ( ((unsigned __int8)IsServant & 1) != 0 )
        {
          if ( !v65
            || (items = v65->fields._items,
                v81 = Method_System_Collections_Generic_List_ServantEntity__Add__,
                ++v65->fields._version,
                !items) )
          {
            sub_2213CDC(IsServant, v69);
          }
          size = v65->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v65,
              v73,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = &items->obj.klass + size;
            v65->fields._size = size + 1;
            v83[4] = (Il2CppClass *)v73;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v83 + 4), (int32_t)v73, v74, v75, v76, v77, v78, v79);
          }
        }
        max_length = Entitys->max_length;
      }
    }
    if ( !v65 )
      sub_2213CDC(IsServant, v69);
    if ( !_4__this )
      sub_2213CDC(IsServant, v69);
    v84 = v371;
    _4__this->fields.checkMax = v65->fields._size;
    _8__1 = v84->fields.__8__1;
    v86 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v86,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !_8__1 )
      sub_2213CDC(v87, v88);
    _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v86;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_8__1->fields, (int32_t)v86, v89, v90, v91, v92, v93, v94);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v364,
      v65,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    current = v364.fields._current;
    v96 = v371;
    v365 = v364;
    *(_OWORD *)&v371->fields.__7__wrap3.fields._list = *(_OWORD *)&v364.fields._list;
    v96->fields.__7__wrap3.fields._current = (struct ServantEntity_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v96->fields.__7__wrap3, 0, v97, v98, v99, v100, v101, v102);
    v27 = v371;
    v371->fields.__1__state = -3;
LABEL_32:
    v110 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             (System_Collections_Generic_List_Enumerator_object__o *)&v27->fields.__7__wrap3,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    v111 = v371;
    if ( !v110 )
    {
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(v371, v103);
      v179 = v371;
      *(_QWORD *)&v371->fields.__7__wrap3.fields._index = 0;
      v179->fields.__7__wrap3.fields._current = 0;
      v179->fields.__7__wrap3.fields._list = 0;
      if ( !_4__this )
        sub_2213CDC(v177, v178);
      LOBYTE(v9) = 0;
      _4__this->fields.nextCheck = 0;
      goto LABEL_173;
    }
    v112 = v371->fields.__7__wrap3.fields._current;
    v371->fields._svtEntity_5__5 = v112;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v111->fields._svtEntity_5__5,
      (int32_t)v112,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v113 = (Il2CppObject *)sub_2213CCC(SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
    System_Object___ctor(v113, 0);
    v114 = v371;
    v371->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass22_1_o *)v113;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v114->fields.__8__2,
      (int32_t)v113,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
    _8__2 = v371->fields.__8__2;
    if ( !_8__2 )
      sub_2213CDC(0, v121);
    v129 = v371->fields.__8__1;
    _8__2->fields.CS___8__locals1 = v129;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_8__2->fields.CS___8__locals1,
      (int32_t)v129,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    svtEntity_5__5 = v371->fields._svtEntity_5__5;
    if ( !svtEntity_5__5 )
      sub_2213CDC(v130, v131);
    v134 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.currentCryptoKey;
    v135 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.fakeValue;
    svtVoiceMst_5__2 = v371->fields._svtVoiceMst_5__2;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v131, v132);
    *(_QWORD *)&v372.fields.currentCryptoKey = v134;
    *(_QWORD *)&v372.fields.fakeValue = v135;
    v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v372, 0);
    if ( !svtVoiceMst_5__2 )
      sub_2213CDC(v137, (unsigned int)v137);
    Entity_49837844 = ServantVoiceMaster__getEntity_49837844(svtVoiceMst_5__2, v137, 0, 0);
    v139 = v371;
    v371->fields._svtVoiceEntitys_5__6 = Entity_49837844;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v139->fields._svtVoiceEntitys_5__6,
      (int32_t)Entity_49837844,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145);
    v148 = v371->fields._svtEntity_5__5;
    if ( !v148 )
      sub_2213CDC(v146, v147);
    svtLimitAddMst_5__3 = v371->fields._svtLimitAddMst_5__3;
    v150 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v148->fields.id, 0);
    if ( !svtLimitAddMst_5__3 )
      sub_2213CDC(v150, (unsigned int)v150);
    VoiceId = ServantLimitAddMaster__getVoiceId(svtLimitAddMst_5__3, v150, 0, 0);
    v370 = VoiceId;
    v153 = v371->fields.__8__2;
    if ( !v153 )
      sub_2213CDC(VoiceId, v152);
    CS___8__locals1 = v153->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_2213CDC(VoiceId, v152);
    voiceDataPath = CS___8__locals1->fields.voiceDataPath;
    if ( !voiceDataPath )
      sub_2213CDC(VoiceId, v152);
    v156 = voiceDataPath->fields._size;
    v157 = voiceDataPath->fields._version + 1;
    voiceDataPath->fields._size = 0;
    voiceDataPath->fields._version = v157;
    if ( v156 >= 1 )
    {
      System_Array__Clear((System_Array_o *)voiceDataPath->fields._items, 0, v156, 0);
      v153 = v371->fields.__8__2;
      if ( !v153 )
        sub_2213CDC(VoiceId, v152);
    }
    v158 = v153->fields.CS___8__locals1;
    if ( !v158 )
      sub_2213CDC(VoiceId, v152);
    v159 = (System_Collections_Generic_List_object__o *)v158->fields.voiceDataPath;
    v160 = System_Int32__ToString((int32_t)&v370, 0);
    v161 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_4596/*"ChrVoice_"*/, v160, 0);
    v168 = v161;
    if ( !v159
      || (v169 = v159->fields._items,
          v170 = Method_System_Collections_Generic_List_string__Add__,
          ++v159->fields._version,
          !v169) )
    {
      sub_2213CDC(v161, v161);
    }
    v171 = v159->fields._size;
    if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v159,
        v161,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
    }
    else
    {
      v172 = &v169->obj.klass + v171;
      v159->fields._size = v171 + 1;
      v172[4] = (Il2CppClass *)v168;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v172 + 4), (int32_t)v168, v162, v163, v164, v165, v166, v167);
    }
    v180 = v371->fields.__8__2;
    if ( !v180 )
      sub_2213CDC(v173, v174);
    v181 = v180->fields.CS___8__locals1;
    if ( !v181 )
      sub_2213CDC(v173, v174);
    v182 = (System_Collections_Generic_List_object__o *)v181->fields.voiceDataPath;
    v183 = System_Int32__ToString((int32_t)&v370, 0);
    v184 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13301/*"Servants_"*/, v183, 0);
    v191 = v184;
    if ( !v182
      || (v192 = v182->fields._items,
          v193 = Method_System_Collections_Generic_List_string__Add__,
          ++v182->fields._version,
          !v192) )
    {
      sub_2213CDC(v184, v184);
    }
    v194 = v182->fields._size;
    if ( (unsigned int)v194 >= LODWORD(v192->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v182,
        v184,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
    }
    else
    {
      v195 = &v192->obj.klass + v194;
      v182->fields._size = v194 + 1;
      v195[4] = (Il2CppClass *)v191;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v195 + 4), (int32_t)v191, v185, v186, v187, v188, v189, v190);
    }
    v198 = v371->fields.__8__2;
    if ( !v198 )
      sub_2213CDC(v196, v197);
    v199 = v198->fields.CS___8__locals1;
    if ( !v199 )
      sub_2213CDC(v196, v197);
    v200 = (System_Collections_Generic_List_object__o *)v199->fields.voiceDataPath;
    v201 = System_Int32__ToString((int32_t)&v370, 0);
    v202 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_9911/*"NoblePhantasm_"*/, v201, 0);
    v209 = v202;
    if ( !v200
      || (v210 = v200->fields._items,
          v211 = Method_System_Collections_Generic_List_string__Add__,
          ++v200->fields._version,
          !v210) )
    {
      sub_2213CDC(v202, v202);
    }
    v212 = v200->fields._size;
    if ( (unsigned int)v212 >= LODWORD(v210->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v200,
        v202,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
    }
    else
    {
      v213 = &v210->obj.klass + v212;
      v200->fields._size = v212 + 1;
      v213[4] = (Il2CppClass *)v209;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v213 + 4), (int32_t)v209, v203, v204, v205, v206, v207, v208);
    }
    v216 = v371->fields.__8__2;
    if ( !v216 )
      sub_2213CDC(v214, v215);
    v216->fields.DataCnt = 0;
    v216->fields.isLoadEnd = 0;
    v217 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v219 = v371->fields.__8__2;
    if ( !v219 )
      sub_2213CDC(v217, v218);
    v220 = v219->fields.CS___8__locals1;
    if ( !v220 )
      sub_2213CDC(v217, v218);
    DataCnt = (unsigned int)v219->fields.DataCnt;
    v222 = (SoundManager_o *)v217;
    v223 = (System_Collections_Generic_List_object__o *)v220->fields.voiceDataPath;
    v219->fields.DataCnt = DataCnt + 1;
    if ( !v223 )
      sub_2213CDC(0, DataCnt);
    Item = System_Collections_Generic_List_object___get_Item(
             v223,
             DataCnt,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    v225 = (Il2CppObject *)v371->fields.__8__2;
    v226 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v226, v225, Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__, 0);
    if ( !v222 )
      sub_2213CDC(v227, v228);
    SoundManager__LoadAudioAssetStorage(v222, (System_String_o *)Item, v226, 1, 0);
    v8 = v371;
    goto LABEL_74;
  }
  if ( _1__state != 1 )
    goto LABEL_173;
  v8->fields.__1__state = -3;
LABEL_74:
  v229 = v8->fields.__8__2;
  if ( !v229 )
    sub_2213CDC(v9, method);
  if ( v229->fields.isLoadEnd )
  {
    svtVoiceEntitys_5__6 = v8->fields._svtVoiceEntitys_5__6;
    v8->fields.__7__wrap6 = svtVoiceEntitys_5__6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap6,
      (int32_t)svtVoiceEntitys_5__6,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v238 = v371;
    v239 = 0;
    v371->fields.__7__wrap7 = 0;
    while ( 1 )
    {
      _7__wrap6 = v238->fields.__7__wrap6;
      if ( !_7__wrap6 )
        sub_2213CDC(v238, v231);
      v267 = _7__wrap6->max_length;
      if ( v239 >= v267 )
      {
        v238->fields.__7__wrap6 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v238->fields.__7__wrap6, 0, v232, v233, v234, v235, v236, v237);
        v270 = v371->fields.__8__2;
        if ( !v270 )
          sub_2213CDC(v268, v269);
        v271 = v270->fields.CS___8__locals1;
        if ( !v271 )
          sub_2213CDC(v268, v269);
        v272 = (System_Collections_Generic_List_object__o *)v271->fields.voiceDataPath;
        if ( !v272 )
          sub_2213CDC(0, v269);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v365,
          v272,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v369 = v365;
        v365.fields._list = 0;
        *(_QWORD *)&v365.fields._index = &v369;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v369,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          v273 = v369.fields._current;
          v274 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( !v274 )
            sub_2213CDC(0, v275);
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v274, (System_String_o *)v273, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v369,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( !_4__this )
          sub_2213CDC(v353, v354);
        v361 = v371;
        ++_4__this->fields.checkCnt;
        v361->fields.__2__current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v361->fields.__2__current,
          0,
          v355,
          v356,
          v357,
          v358,
          v359,
          v360);
        v351 = v371;
        v352 = 3;
        goto LABEL_172;
      }
      if ( v239 >= (unsigned int)v267 )
        sub_2213CE4(v238);
      v240 = _7__wrap6->m_Items[v239];
      v238->fields._svtVoiceEntity_5__9 = v240;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v238->fields._svtVoiceEntity_5__9,
        (int32_t)v240,
        v232,
        v233,
        v234,
        v235,
        v236,
        v237);
      v238 = v371;
      if ( v371->fields._svtVoiceEntity_5__9 )
        break;
LABEL_133:
      v239 = v238->fields.__7__wrap7 + 1;
      v238->fields.__7__wrap7 = v239;
    }
    for ( j = 1; ; j = (unsigned int)(v238->fields._ii_5__10 + 1) )
    {
      v238->fields._ii_5__10 = j;
      if ( (int)j >= 25 )
      {
        v238->fields._svtVoiceEntity_5__9 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v238->fields._svtVoiceEntity_5__9,
          0,
          v232,
          v233,
          v234,
          v235,
          v236,
          v237);
        v238 = v371;
        goto LABEL_133;
      }
      svtVoiceEntity_5__9 = v238->fields._svtVoiceEntity_5__9;
      if ( !svtVoiceEntity_5__9 )
        sub_2213CDC(0, j);
      VoiceList = ServantVoiceEntity__getVoiceList(svtVoiceEntity_5__9, j, 0);
      if ( VoiceList )
        break;
      v238 = v371;
LABEL_130:
      ;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v364,
      (System_Collections_Generic_List_object__o *)VoiceList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v244 = v364.fields._current;
    v245 = v371;
    v365 = v364;
    *(_OWORD *)&v371->fields.__7__wrap10.fields._list = *(_OWORD *)&v364.fields._list;
    v245->fields.__7__wrap10.fields._current = (struct ServantVoiceData_array *)v244;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v245->fields.__7__wrap10, 0, v246, v247, v248, v249, v250, v251);
    v252 = v371;
    v371->fields.__1__state = -4;
    while ( 1 )
    {
      v264 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               (System_Collections_Generic_List_Enumerator_object__o *)&v252->fields.__7__wrap10,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      v265 = v371;
      if ( !v264 )
      {
        SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(v371, v257);
        v238 = v371;
        *(_QWORD *)&v371->fields.__7__wrap10.fields._index = 0;
        v238->fields.__7__wrap10.fields._current = 0;
        v238->fields.__7__wrap10.fields._list = 0;
        goto LABEL_130;
      }
      v253 = v371->fields.__7__wrap10.fields._current;
      v371->fields.__7__wrap11 = v253;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v265->fields.__7__wrap11,
        (int32_t)v253,
        v258,
        v259,
        v260,
        v261,
        v262,
        v263);
      v8 = v371;
      v176 = 0;
      v371->fields.__7__wrap12 = 0;
LABEL_125:
      p__7__wrap11 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap11;
      _7__wrap11 = v8->fields.__7__wrap11;
      if ( !_7__wrap11 )
        sub_2213CDC(p__7__wrap11, method);
      v256 = _7__wrap11->max_length;
      if ( v176 < v256 )
        break;
      p__7__wrap11->klass = 0;
      sub_2213A04(p__7__wrap11, 0, v2, v3, v4, v5, v6, v7);
      v252 = v371;
    }
    if ( v176 >= (unsigned int)v256 )
      sub_2213CE4(p__7__wrap11);
    v276 = v8->fields.__8__2;
    if ( !v276 )
      sub_2213CDC(p__7__wrap11, method);
    v277 = v276->fields.CS___8__locals1;
    if ( !v277 )
      sub_2213CDC(p__7__wrap11, method);
    v278 = (System_Collections_Generic_List_object__o *)v277->fields.voiceDataPath;
    if ( !v278 )
      sub_2213CDC(0, method);
    v279 = _7__wrap11->m_Items[v176];
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v365,
      v278,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v369 = v365;
    v365.fields._list = 0;
    *(_QWORD *)&v365.fields._index = &v369;
    do
    {
      v280 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v369,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v280 )
        break;
      v281 = v369.fields._current;
      v282 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v279 )
        sub_2213CDC(v282, v283);
      if ( !v282 )
        sub_2213CDC(0, v283);
    }
    while ( !SoundManager__IsExistsSound((SoundManager_o *)v282, (System_String_o *)v281, v279->fields.id, 0) );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v369,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v284 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v279 )
      sub_2213CDC(v284, v285);
    if ( !v284 )
      sub_2213CDC(0, v285);
    IsExistsSound = SoundManager__IsExistsSound(
                      (SoundManager_o *)v284,
                      (System_String_o *)StringLiteral_3205/*"Battle"*/,
                      v279->fields.id,
                      0);
    v289 = v371->fields._svtEntity_5__5;
    if ( !v289 )
      sub_2213CDC(IsExistsSound, v287);
    v290 = IsExistsSound;
    v291 = *(_QWORD *)&v289->fields.id.fields.currentCryptoKey;
    v292 = *(_QWORD *)&v289->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v287, v288);
    *(_QWORD *)&v373.fields.currentCryptoKey = v291;
    *(_QWORD *)&v373.fields.fakeValue = v292;
    v293 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v373, 0);
    if ( !_4__this )
      sub_2213CDC(v293, (unsigned int)v293);
    if ( !SoundCheckMenu__isExceptionCheck(_4__this, v293, v279->fields.id, v294) && !v280 && !v290 )
    {
      v301 = sub_2213B20(string___TypeInfo, 5);
      v309 = v301;
      if ( !v301 )
        sub_2213CDC(0, v302);
      if ( !*(_DWORD *)(v301 + 24) )
        sub_2213CE4(v301);
      v310 = StringLiteral_23420/*"not exist : "*/;
      *(_QWORD *)(v301 + 32) = StringLiteral_23420/*"not exist : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v301 + 32), v310, v303, v304, v305, v306, v307, v308);
      if ( (*(_DWORD *)(v309 + 24) & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v311);
      id = v279->fields.id;
      *(_QWORD *)(v309 + 40) = id;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v309 + 40), (int32_t)id, v312, v313, v314, v315, v316, v317);
      if ( *(_DWORD *)(v309 + 24) <= 2u )
        sub_2213CE4(v319);
      v326 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v309 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v309 + 48), v326, v320, v321, v322, v323, v324, v325);
      v330 = v371->fields._svtEntity_5__5;
      if ( !v330 )
        sub_2213CDC(v327, v328);
      v331 = v330->fields.id;
      v332 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
      v368 = v331;
      if ( !v332 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v328, v329);
      *(_QWORD *)&v374.fields.currentCryptoKey = &v368;
      *(_QWORD *)&v374.fields.fakeValue = 0;
      v333 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v374, v329);
      if ( (*(_DWORD *)(v309 + 24) & 0xFFFFFFFC) == 0 )
        sub_2213CE4(v333);
      *(_QWORD *)(v309 + 56) = v333;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v309 + 56), (int32_t)v333, v334, v335, v336, v337, v338, v339);
      if ( *(_DWORD *)(v309 + 24) <= 4u )
        sub_2213CE4(v340);
      v347 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v309 + 64) = StringLiteral_43/*"\n"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v309 + 64), v347, v341, v342, v343, v344, v345, v346);
      v348 = System_String__Concat_75697120((System_String_array *)v309, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v348, v349);
    }
    v350 = v371;
    v371->fields.__2__current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v350->fields.__2__current, 0, v295, v296, v297, v298, v299, v300);
    v351 = v371;
    v352 = 2;
LABEL_172:
    v351->fields.__1__state = v352;
    LOBYTE(v9) = 1;
  }
  else
  {
    v8->fields.__2__current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    LOBYTE(v9) = 1;
    v371->fields.__1__state = 1;
  }
LABEL_173:
  v362 = v366;
  if ( v366 )
  {
    sub_20090A4(&v367);
    sub_2213CD4(v362);
  }
  return v9;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundCheckMenu__svtVoiceCheck_d__22_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state + 4) <= 7 && ((1 << (_1__state + 4)) & 0xE3) != 0 )
  {
    if ( _1__state == 2 || _1__state == -4 )
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(this, method);
    SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(this, method);
  }
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_596DDB5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_596DDB5 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    v3);
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_596DDB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    byte_596DDB6 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap10,
    v3);
}