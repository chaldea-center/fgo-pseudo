void SoundCheckMenu___ctor(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C35042 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C35042 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.cpkNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cpkNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
  this->fields.exceptionData = (struct System_Collections_Generic_Dictionary_int__List_string___o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exceptionData, (int32_t)v6, v7, v8);
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void SoundCheckMenu__CheckNumDispWrite(SoundCheckMenu_o *this, int32_t num, int32_t max, const MethodInfo *method)
{
  UILabel_o *checkNumDisp; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v9 = max;
  v10 = num;
  if ( (byte_4C3503E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&StringLiteral_4398/*"CheckNum : "*/);
    byte_4C3503E = 1;
  }
  checkNumDisp = this->fields.checkNumDisp;
  v6 = System_Int32__ToString((int32_t)&v10, 0);
  v7 = System_Int32__ToString((int32_t)&v9, 0);
  v8 = System_String__Concat_63558796(
         (System_String_o *)StringLiteral_4398/*"CheckNum : "*/,
         v6,
         (System_String_o *)StringLiteral_1048/*"/"*/,
         v7,
         0);
  if ( !checkNumDisp )
    sub_1C32E7C(v8);
  UILabel__set_text(checkNumDisp, v8, 0);
}


void SoundCheckMenu__Close(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  SoundCheckMenu_o *v4; // x0
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C35033 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3084/*"Battle"*/);
    byte_4C35033 = 1;
  }
  if ( this->fields.sceneStart && !this->fields.nextCheck )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    if ( SoundCheckMenu__CueSheetCheck(v4, (System_String_o *)StringLiteral_3084/*"Battle"*/, v5) )
    {
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_16;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)gameObject, (System_String_o *)StringLiteral_3084/*"Battle"*/, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0);
        TransformHelper__DestroyChildren(transform, 0);
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
    sub_1C32E7C(gameObject);
  }
}


bool SoundCheckMenu__CueSheetCheck(SoundCheckMenu_o *this, System_String_o *SheetName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  bool v8; // w21
  int v9; // w22
  __int64 v10; // x8

  if ( (byte_4C3503F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C3503F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  klass = Instance[2].klass;
  if ( !klass )
    goto LABEL_13;
  element_class = klass->_1.element_class;
  if ( !element_class )
    goto LABEL_13;
  namespaze = (int)element_class->_1.namespaze;
  v8 = namespaze > 0;
  if ( namespaze >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)namespaze )
        sub_1C32E84(Instance);
      v10 = *((_QWORD *)&element_class->_1.byval_arg.data + v9);
      if ( !v10 )
        break;
      Instance = (Il2CppObject *)System_String__op_Equality(*(System_String_o **)(v10 + 16), SheetName, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        namespaze = (int)element_class->_1.namespaze;
        v8 = ++v9 < namespaze;
        if ( v9 < namespaze )
          continue;
      }
      return v8;
    }
LABEL_13:
    sub_1C32E7C(Instance);
  }
  return v8;
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
  const MethodInfo *v15; // x3
  UILabel_o *resultLabel; // x22
  System_String_o *v17; // x0
  UILabel_o *errorCntLabel; // x20
  System_String_o *v19; // x0

  v4 = this;
  if ( (byte_4C3503D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    this = (SoundCheckMenu_o *)sub_1C32C20(&StringLiteral_6182/*"ErrorCount : "*/);
    byte_4C3503D = 1;
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
                                 (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_UILabel___);
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
      sub_1C32E7C(this);
    }
    GameObjectExtensions__SetLocalPositionY(
      (UnityEngine_GameObject_o *)v11,
      (float)(LocalPositionY - (float)(*p_resultLabel)->fields.mHeight) + (float)(*p_resultLabel)->fields.mFontSize,
      0);
    *p_resultLabel = (struct UILabel_o *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.resultLabel, (int32_t)v8, v14, v15);
  }
  resultLabel = v4->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_14;
  v17 = System_String__Concat_63556792(resultLabel->fields.mText, text, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(resultLabel, v17, 0);
  errorCntLabel = v4->fields.errorCntLabel;
  v19 = System_Int32__ToString((int)v4 + 108, 0);
  this = (SoundCheckMenu_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_6182/*"ErrorCount : "*/, v19, 0);
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

  if ( (byte_4C35037 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8538/*"MASHU_SVT_ID1"*/);
    sub_1C32C20(&StringLiteral_8539/*"MASHU_SVT_ID2"*/);
    byte_4C35037 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8538/*"MASHU_SVT_ID1"*/, 0);
  v4 = System_Int32__ToString((int32_t)&Value, 0);
  if ( System_String__op_Equality(groupId, v4, 0) )
  {
    return 1;
  }
  else
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8539/*"MASHU_SVT_ID2"*/, 0);
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
  System_String_o *name; // x20
  const MethodInfo *v7; // x1
  System_Collections_IEnumerator_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4C3503C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23869/*"svtVoiceButton"*/);
    sub_1C32C20(&StringLiteral_9340/*"NPButton"*/);
    sub_1C32C20(&StringLiteral_16737/*"allCpkVoiceButton"*/);
    sub_1C32C20(&StringLiteral_3117/*"BattleEffectButton"*/);
    sub_1C32C20(&StringLiteral_2192/*"AllButton"*/);
    byte_4C3503C = 1;
  }
  if ( !this->fields.nextCheck && this->fields.sceneStart )
  {
    SoundCheckMenu__ValueReset(this, (const MethodInfo *)ButtonObj);
    if ( !ButtonObj )
      sub_1C32E7C(v5);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ButtonObj, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_2192/*"AllButton"*/, 0) )
    {
      v8 = SoundCheckMenu__allCheck(this, v7);
LABEL_17:
      UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v8, 0);
      return;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3117/*"BattleEffectButton"*/, 0) )
    {
      v8 = SoundCheckMenu__battleEffectCheck(this, v9);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9340/*"NPButton"*/, 0) )
    {
      v8 = SoundCheckMenu__npCheck(this, v10);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_23869/*"svtVoiceButton"*/, 0) )
    {
      v8 = SoundCheckMenu__svtVoiceCheck(this, v11);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_16737/*"allCpkVoiceButton"*/, 0) )
    {
      v8 = SoundCheckMenu__cueNameMstCheck(this, v12);
      goto LABEL_17;
    }
  }
}


void SoundCheckMenu__Open(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  SoundCheckMenu_o *v4; // x0
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4C35032 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu__Open_b__16_0__);
    sub_1C32C20(&StringLiteral_3084/*"Battle"*/);
    byte_4C35032 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( SoundCheckMenu__CueSheetCheck(v4, (System_String_o *)StringLiteral_3084/*"Battle"*/, v5) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundCheckMenu__Open_b__16_0__, 0);
  if ( !Instance )
LABEL_7:
    sub_1C32E7C(gameObject);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)StringLiteral_3084/*"Battle"*/, v7, 1, 0);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C3503B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6183/*"ErrorCount : 0"*/);
    byte_4C3503B = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0);
  if ( !scrollView )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  TransformHelper__DestroyChildren(transform, 0);
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
                                            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !scrollView )
    goto LABEL_14;
  v6 = (struct UILabel_o *)scrollView;
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.scrollView, 0);
  this->fields.resultLabel = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resultLabel, (int32_t)v6, v8, v9);
  scrollView = (UnityEngine_Component_o *)this->fields.errorCntLabel;
  this->fields.nextCheck = 1;
  this->fields.checkCnt = 0;
  this->fields.errorCnt = 0;
  if ( !scrollView
    || (UILabel__set_text((UILabel_o *)scrollView, (System_String_o *)StringLiteral_6183/*"ErrorCount : 0"*/, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
LABEL_14:
    sub_1C32E7C(scrollView);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3503A & 1) == 0 )
  {
    sub_1C32C20(&SoundCheckMenu__allCheck_d__24_TypeInfo);
    byte_4C3503A = 1;
  }
  v3 = sub_1C32E6C(SoundCheckMenu__allCheck_d__24_TypeInfo);
  SoundCheckMenu__allCheck_d__24___ctor((SoundCheckMenu__allCheck_d__24_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__battleEffectCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35039 & 1) == 0 )
  {
    sub_1C32C20(&SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
    byte_4C35039 = 1;
  }
  v3 = sub_1C32E6C(SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
  SoundCheckMenu__battleEffectCheck_d__23___ctor((SoundCheckMenu__battleEffectCheck_d__23_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu__cpkNameListup(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_String_o *CpkPath; // x0
  Il2CppObject *Files_64380432; // x0
  struct System_Collections_Generic_List_string__o *cpkNameList; // x8
  int32_t size; // w2
  Il2CppObject *v7; // x20
  int v8; // w9
  void *monitor; // x8
  unsigned __int64 v10; // x22
  System_String_o *v11; // x21
  System_String_o *FileNameWithoutExtension; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4C35034 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_795/*"*.cpk.bytes"*/);
    byte_4C35034 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  CpkPath = SoundManager__getCpkPath(0);
  Files_64380432 = (Il2CppObject *)System_IO_Directory__GetFiles_64380432(
                                     CpkPath,
                                     (System_String_o *)StringLiteral_795/*"*.cpk.bytes"*/,
                                     1,
                                     0);
  cpkNameList = this->fields.cpkNameList;
  if ( !cpkNameList )
    goto LABEL_21;
  size = cpkNameList->fields._size;
  v7 = Files_64380432;
  v8 = cpkNameList->fields._version + 1;
  cpkNameList->fields._size = 0;
  cpkNameList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)cpkNameList->fields._items, 0, size, 0);
  if ( !v7 )
    goto LABEL_21;
  monitor = v7[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)monitor )
        sub_1C32E84(Files_64380432);
      v11 = (System_String_o *)*((_QWORD *)&v7[2].klass + v10);
      if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
      FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v11, 0);
      Files_64380432 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(FileNameWithoutExtension, 0);
      v15 = (System_Collections_Generic_List_object__o *)this->fields.cpkNameList;
      if ( !v15 )
        break;
      items = v15->fields._items;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      v18 = v15->fields._size;
      v19 = Files_64380432;
      if ( (unsigned int)v18 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          Files_64380432,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v18;
        v15->fields._size = v18 + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v13, v14);
      }
      LODWORD(monitor) = v7[1].monitor;
      if ( (__int64)++v10 >= (int)monitor )
        return;
    }
LABEL_21:
    sub_1C32E7C(Files_64380432);
  }
}


void SoundCheckMenu__createExceptionList(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  unsigned __int64 v6; // x29
  int32_t v7; // w21
  struct System_Collections_Generic_Dictionary_int__List_string___o *exceptionData; // x22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _QWORD *v12; // x9
  Il2CppObject *v13; // x1
  struct System_Int32_array *buckets; // x8
  __int64 entries_low; // x10
  __int64 v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x9
  Il2CppObject *v20; // x1
  struct System_Int32_array *v21; // x8
  __int64 v22; // x10
  __int64 v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  _QWORD *v26; // x9
  Il2CppObject *v27; // x1
  struct System_Int32_array *v28; // x8
  __int64 v29; // x10
  __int64 v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _QWORD *v33; // x9
  Il2CppObject *v34; // x1
  struct System_Int32_array *v35; // x8
  __int64 v36; // x10
  __int64 v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _QWORD *v40; // x9
  Il2CppObject *v41; // x1
  struct System_Int32_array *v42; // x8
  __int64 v43; // x10
  __int64 v44; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  _QWORD *v47; // x9
  Il2CppObject *v48; // x1
  struct System_Int32_array *v49; // x8
  __int64 v50; // x10
  __int64 v51; // x8
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  _QWORD *v54; // x9
  Il2CppObject *v55; // x1
  struct System_Int32_array *v56; // x8
  __int64 v57; // x10
  __int64 v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  _QWORD *v61; // x9
  Il2CppObject *v62; // x1
  struct System_Int32_array *v63; // x8
  __int64 v64; // x10
  __int64 v65; // x8
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  _QWORD *v68; // x9
  Il2CppObject *v69; // x1
  struct System_Int32_array *v70; // x8
  __int64 v71; // x10
  __int64 v72; // x8
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  _QWORD *v75; // x9
  Il2CppObject *v76; // x1
  struct System_Int32_array *v77; // x8
  __int64 v78; // x10
  __int64 v79; // x8
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  _QWORD *v82; // x9
  Il2CppObject *v83; // x1
  struct System_Int32_array *v84; // x8
  __int64 v85; // x10
  __int64 v86; // x8
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  _QWORD *v89; // x9
  Il2CppObject *v90; // x1
  struct System_Int32_array *v91; // x8
  __int64 v92; // x10
  __int64 v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  _QWORD *v96; // x9
  Il2CppObject *v97; // x1
  struct System_Int32_array *v98; // x8
  __int64 v99; // x10
  __int64 v100; // x8
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  _QWORD *v103; // x9
  Il2CppObject *v104; // x1
  struct System_Int32_array *v105; // x8
  __int64 v106; // x10
  __int64 v107; // x8
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  _QWORD *v110; // x9
  Il2CppObject *v111; // x1
  struct System_Int32_array *v112; // x8
  __int64 v113; // x10
  __int64 v114; // x8
  struct System_Collections_Generic_Dictionary_int__List_string___o *v115; // x20
  System_Collections_Generic_List_object__o *v116; // x21
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  _QWORD *v119; // x9
  Il2CppObject *v120; // x1
  struct System_Int32_array *v121; // x8
  __int64 v122; // x10
  __int64 v123; // x8
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  _QWORD *v126; // x9
  Il2CppObject *v127; // x1
  struct System_Int32_array *v128; // x8
  __int64 v129; // x10
  __int64 v130; // x8

  if ( (byte_4C35040 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_1157/*"0_B091"*/);
    sub_1C32C20(&StringLiteral_1154/*"0_B031"*/);
    sub_1C32C20(&StringLiteral_1162/*"0_B161"*/);
    sub_1C32C20(&StringLiteral_1158/*"0_B121"*/);
    sub_1C32C20(&StringLiteral_1161/*"0_B151"*/);
    sub_1C32C20(&StringLiteral_1156/*"0_B081"*/);
    sub_1C32C20(&StringLiteral_1166/*"0_B201"*/);
    sub_1C32C20(&StringLiteral_1164/*"0_B181"*/);
    sub_1C32C20(&StringLiteral_1151/*"0_"*/);
    sub_1C32C20(&StringLiteral_1153/*"0_B021"*/);
    sub_1C32C20(&StringLiteral_1163/*"0_B171"*/);
    sub_1C32C20(&StringLiteral_1155/*"0_B041"*/);
    sub_1C32C20(&StringLiteral_1159/*"0_B131"*/);
    sub_1C32C20(&StringLiteral_1160/*"0_B141"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1165/*"0_B191"*/);
    sub_1C32C20(&StringLiteral_1152/*"0_B011"*/);
    byte_4C35040 = 1;
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !Item )
    goto LABEL_114;
  entries = Item->fields._entries;
  v5 = Item;
  if ( !(_DWORD)entries )
    goto LABEL_115;
  Item->fields._count = 600700;
  if ( (_DWORD)entries == 1 )
    goto LABEL_115;
  Item->fields._freeList = 600710;
  if ( (int)entries >= 1 )
  {
    v6 = 0;
    while ( v6 < (unsigned int)entries )
    {
      v7 = *(&v5->fields._count + v6);
      exceptionData = this->fields.exceptionData;
      v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !exceptionData )
        goto LABEL_114;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        (System_Collections_Generic_Dictionary_int__object__o *)exceptionData,
        v7,
        (Il2CppObject *)v9,
        (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v12 = Method_System_Collections_Generic_List_string__Add__;
      v13 = (Il2CppObject *)StringLiteral_1152/*"0_B011"*/;
      buckets = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !buckets )
        goto LABEL_114;
      entries_low = SLODWORD(Item->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v13,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = (__int64)buckets + 8 * entries_low;
        LODWORD(Item->fields._entries) = entries_low + 1;
        *(_QWORD *)(v16 + 32) = v13;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v13, v10, v11);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      v20 = (Il2CppObject *)StringLiteral_1153/*"0_B021"*/;
      v21 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v21 )
        goto LABEL_114;
      v22 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v22 >= LODWORD(v21->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v20,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = (__int64)v21 + 8 * v22;
        LODWORD(Item->fields._entries) = v22 + 1;
        *(_QWORD *)(v23 + 32) = v20;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v20, v17, v18);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      v27 = (Il2CppObject *)StringLiteral_1154/*"0_B031"*/;
      v28 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v28 )
        goto LABEL_114;
      v29 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v27,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = (__int64)v28 + 8 * v29;
        LODWORD(Item->fields._entries) = v29 + 1;
        *(_QWORD *)(v30 + 32) = v27;
        sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v27, v24, v25);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v33 = Method_System_Collections_Generic_List_string__Add__;
      v34 = (Il2CppObject *)StringLiteral_1155/*"0_B041"*/;
      v35 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v35 )
        goto LABEL_114;
      v36 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v36 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v34,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = (__int64)v35 + 8 * v36;
        LODWORD(Item->fields._entries) = v36 + 1;
        *(_QWORD *)(v37 + 32) = v34;
        sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v34, v31, v32);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v40 = Method_System_Collections_Generic_List_string__Add__;
      v41 = (Il2CppObject *)StringLiteral_1156/*"0_B081"*/;
      v42 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v42 )
        goto LABEL_114;
      v43 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v43 >= LODWORD(v42->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v41,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = (__int64)v42 + 8 * v43;
        LODWORD(Item->fields._entries) = v43 + 1;
        *(_QWORD *)(v44 + 32) = v41;
        sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v41, v38, v39);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v47 = Method_System_Collections_Generic_List_string__Add__;
      v48 = (Il2CppObject *)StringLiteral_1157/*"0_B091"*/;
      v49 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v49 )
        goto LABEL_114;
      v50 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v50 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v48,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = (__int64)v49 + 8 * v50;
        LODWORD(Item->fields._entries) = v50 + 1;
        *(_QWORD *)(v51 + 32) = v48;
        sub_1C32BC4((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v48, v45, v46);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v54 = Method_System_Collections_Generic_List_string__Add__;
      v55 = (Il2CppObject *)StringLiteral_1158/*"0_B121"*/;
      v56 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v56 )
        goto LABEL_114;
      v57 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v57 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v55,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = (__int64)v56 + 8 * v57;
        LODWORD(Item->fields._entries) = v57 + 1;
        *(_QWORD *)(v58 + 32) = v55;
        sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v55, v52, v53);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v61 = Method_System_Collections_Generic_List_string__Add__;
      v62 = (Il2CppObject *)StringLiteral_1159/*"0_B131"*/;
      v63 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v63 )
        goto LABEL_114;
      v64 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v64 >= LODWORD(v63->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v62,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = (__int64)v63 + 8 * v64;
        LODWORD(Item->fields._entries) = v64 + 1;
        *(_QWORD *)(v65 + 32) = v62;
        sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 32), (int32_t)v62, v59, v60);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v68 = Method_System_Collections_Generic_List_string__Add__;
      v69 = (Il2CppObject *)StringLiteral_1160/*"0_B141"*/;
      v70 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v70 )
        goto LABEL_114;
      v71 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v71 >= LODWORD(v70->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v69,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = (__int64)v70 + 8 * v71;
        LODWORD(Item->fields._entries) = v71 + 1;
        *(_QWORD *)(v72 + 32) = v69;
        sub_1C32BC4((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v69, v66, v67);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v75 = Method_System_Collections_Generic_List_string__Add__;
      v76 = (Il2CppObject *)StringLiteral_1161/*"0_B151"*/;
      v77 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v77 )
        goto LABEL_114;
      v78 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v78 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v76,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v79 = (__int64)v77 + 8 * v78;
        LODWORD(Item->fields._entries) = v78 + 1;
        *(_QWORD *)(v79 + 32) = v76;
        sub_1C32BC4((CGThumbnailListItem_o *)(v79 + 32), (int32_t)v76, v73, v74);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v82 = Method_System_Collections_Generic_List_string__Add__;
      v83 = (Il2CppObject *)StringLiteral_1162/*"0_B161"*/;
      v84 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v84 )
        goto LABEL_114;
      v85 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v85 >= LODWORD(v84->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v83,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = (__int64)v84 + 8 * v85;
        LODWORD(Item->fields._entries) = v85 + 1;
        *(_QWORD *)(v86 + 32) = v83;
        sub_1C32BC4((CGThumbnailListItem_o *)(v86 + 32), (int32_t)v83, v80, v81);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v89 = Method_System_Collections_Generic_List_string__Add__;
      v90 = (Il2CppObject *)StringLiteral_1163/*"0_B171"*/;
      v91 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v91 )
        goto LABEL_114;
      v92 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v92 >= LODWORD(v91->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v90,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = (__int64)v91 + 8 * v92;
        LODWORD(Item->fields._entries) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v90;
        sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 32), (int32_t)v90, v87, v88);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v96 = Method_System_Collections_Generic_List_string__Add__;
      v97 = (Il2CppObject *)StringLiteral_1164/*"0_B181"*/;
      v98 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v98 )
        goto LABEL_114;
      v99 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v99 >= LODWORD(v98->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v97,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = (__int64)v98 + 8 * v99;
        LODWORD(Item->fields._entries) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v97;
        sub_1C32BC4((CGThumbnailListItem_o *)(v100 + 32), (int32_t)v97, v94, v95);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v103 = Method_System_Collections_Generic_List_string__Add__;
      v104 = (Il2CppObject *)StringLiteral_1165/*"0_B191"*/;
      v105 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v105 )
        goto LABEL_114;
      v106 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v106 >= LODWORD(v105->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v104,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v107 = (__int64)v105 + 8 * v106;
        LODWORD(Item->fields._entries) = v106 + 1;
        *(_QWORD *)(v107 + 32) = v104;
        sub_1C32BC4((CGThumbnailListItem_o *)(v107 + 32), (int32_t)v104, v101, v102);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v7,
                                                                       (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v110 = Method_System_Collections_Generic_List_string__Add__;
      v111 = (Il2CppObject *)StringLiteral_1166/*"0_B201"*/;
      v112 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v112 )
        goto LABEL_114;
      v113 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v113 >= LODWORD(v112->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v111,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = (__int64)v112 + 8 * v113;
        LODWORD(Item->fields._entries) = v113 + 1;
        *(_QWORD *)(v114 + 32) = v111;
        sub_1C32BC4((CGThumbnailListItem_o *)(v114 + 32), (int32_t)v111, v108, v109);
      }
      LODWORD(entries) = v5->fields._entries;
      if ( (__int64)++v6 >= (int)entries )
        goto LABEL_101;
    }
LABEL_115:
    sub_1C32E84(Item);
  }
LABEL_101:
  v115 = this->fields.exceptionData;
  v116 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v116,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v115 )
    goto LABEL_114;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v115,
    602300,
    (Il2CppObject *)v116,
    (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item )
    goto LABEL_114;
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                   Item,
                                                                   602300,
                                                                   (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
  if ( !Item )
    goto LABEL_114;
  v119 = Method_System_Collections_Generic_List_string__Add__;
  v120 = (Il2CppObject *)StringLiteral_1151/*"0_"*/;
  v121 = Item->fields._buckets;
  ++HIDWORD(Item->fields._entries);
  if ( !v121 )
    goto LABEL_114;
  v122 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v122 >= LODWORD(v121->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v120,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v123 = (__int64)v121 + 8 * v122;
    LODWORD(Item->fields._entries) = v122 + 1;
    *(_QWORD *)(v123 + 32) = v120;
    sub_1C32BC4((CGThumbnailListItem_o *)(v123 + 32), (int32_t)v120, v117, v118);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         Item,
                                                                         602300,
                                                                         (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__)) == 0
    || (v126 = Method_System_Collections_Generic_List_string__Add__,
        v127 = (Il2CppObject *)StringLiteral_1/*""*/,
        v128 = Item->fields._buckets,
        ++HIDWORD(Item->fields._entries),
        !v128) )
  {
LABEL_114:
    sub_1C32E7C(Item);
  }
  v129 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v129 >= LODWORD(v128->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v127,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = (__int64)v128 + 8 * v129;
    LODWORD(Item->fields._entries) = v129 + 1;
    *(_QWORD *)(v130 + 32) = v127;
    sub_1C32BC4((CGThumbnailListItem_o *)(v130 + 32), (int32_t)v127, v124, v125);
  }
}


System_Collections_IEnumerator_o *SoundCheckMenu__cueNameMstCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35035 & 1) == 0 )
  {
    sub_1C32C20(&SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
    byte_4C35035 = 1;
  }
  v3 = sub_1C32E6C(SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
  SoundCheckMenu__cueNameMstCheck_d__19___ctor((SoundCheckMenu__cueNameMstCheck_d__19_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


bool SoundCheckMenu__isExceptionCheck(
        SoundCheckMenu_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *exceptionData; // x0

  if ( (byte_4C35041 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C35041 = 1;
  }
  exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !exceptionData )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         exceptionData,
         svtId,
         (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__) )
  {
    exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
    if ( exceptionData )
    {
      exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                exceptionData,
                                                                                svtId,
                                                                                (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( exceptionData )
        return System_Collections_Generic_List_object___Contains(
                 (System_Collections_Generic_List_object__o *)exceptionData,
                 (Il2CppObject *)voiceId,
                 (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__);
    }
LABEL_9:
    sub_1C32E7C(exceptionData);
  }
  return 0;
}


System_Collections_IEnumerator_o *SoundCheckMenu__npCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35036 & 1) == 0 )
  {
    sub_1C32C20(&SoundCheckMenu__npCheck_d__20_TypeInfo);
    byte_4C35036 = 1;
  }
  v3 = sub_1C32E6C(SoundCheckMenu__npCheck_d__20_TypeInfo);
  SoundCheckMenu__npCheck_d__20___ctor((SoundCheckMenu__npCheck_d__20_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__svtVoiceCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35038 & 1) == 0 )
  {
    sub_1C32C20(&SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
    byte_4C35038 = 1;
  }
  v3 = sub_1C32E6C(SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
  SoundCheckMenu__svtVoiceCheck_d__22___ctor((SoundCheckMenu__svtVoiceCheck_d__22_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C3504F & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__);
    byte_4C3504F = 1;
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
      _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
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
  const MethodInfo *v3; // x3
  struct AssetData_o **p_nobleAssetData; // x19

  this->fields.nobleAssetData = data;
  p_nobleAssetData = &this->fields.nobleAssetData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nobleAssetData, (int32_t)data, (int32_t)method, v3);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  int32_t v13; // w1
  SoundManager_o *v14; // x19
  Il2CppObject *Item; // x21
  System_Action_o *v16; // x22

  if ( (byte_4C35050 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
    byte_4C35050 = 1;
  }
  v5 = sub_1C32E6C(SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  this->fields.nobleSequenceData = data;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)p_fields, (int32_t)data, v10, v11);
  *(_DWORD *)(v5 + 16) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = p_fields->CS___8__locals1;
  if ( !CS___8__locals1
    || (v13 = *(_DWORD *)(v5 + 16),
        v14 = (SoundManager_o *)Instance,
        Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath,
        *(_DWORD *)(v5 + 16) = v13 + 1,
        !Instance)
    || (Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v13,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__),
        v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)v5, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__, 0),
        !v14) )
  {
LABEL_8:
    sub_1C32E7C(Instance);
  }
  SoundManager__LoadAudioAssetStorage(v14, (System_String_o *)Item, v16, 1, 0);
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
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  int32_t DataCnt; // w1
  SoundManager_o *v7; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C35051 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__);
    byte_4C35051 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  DataCnt = this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_10;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v9 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v7 )
LABEL_10:
    sub_1C32E7C(Instance);
  SoundManager__LoadAudioAssetStorage(v7, v9, _9__2, 1, 0);
}


void SoundCheckMenu___c__DisplayClass20_2___npCheck_b__2(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  int32_t DataCnt; // w1
  SoundManager_o *v7; // x19
  struct SoundCheckMenu___c__DisplayClass20_1_o *v8; // x22
  System_Action_o *_9__3; // x21
  System_String_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C35052 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__);
    byte_4C35052 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_11;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  DataCnt = this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_11;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_11;
  _9__3 = v8->fields.__9__3;
  v10 = (System_String_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v8, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__, 0);
    v8->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12);
  }
  if ( !v7 )
LABEL_11:
    sub_1C32E7C(Instance);
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
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  int32_t DataCnt; // w1
  SoundManager_o *v6; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C35053 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__);
    byte_4C35053 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__1 = this->fields.__9__1;
  v8 = (System_String_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v6 )
LABEL_9:
    sub_1C32E7C(Instance);
  SoundManager__LoadAudioAssetStorage(v6, v8, _9__1, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__1(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  int32_t DataCnt; // w1
  SoundManager_o *v6; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C35054 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__);
    byte_4C35054 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v8 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v6 )
LABEL_9:
    sub_1C32E7C(Instance);
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
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct SoundCheckMenu_o *_4__this; // x20
  System_Collections_IEnumerator_o *v7; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v10; // x0
  Il2CppObject **v11; // x19
  System_Collections_IEnumerator_o *v12; // x0

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
        v7 = SoundCheckMenu__battleEffectCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, v7, 0);
LABEL_9:
        if ( _4__this->fields.nextCheck )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        _4__this->fields.nextCheck = 1;
        _4__this->fields.checkCnt = 0;
        v10 = SoundCheckMenu__npCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, v10, 0);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1C32E7C(this);
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
LABEL_12:
  if ( _4__this->fields.nextCheck )
  {
    this->fields.__2__current = 0;
    v11 = &this->fields.__2__current;
    sub_1C32BC4((CGThumbnailListItem_o *)v11, 0, v2, v3);
    *((_DWORD *)v11 - 2) = 2;
    return 1;
  }
  _4__this->fields.nextCheck = 1;
  _4__this->fields.checkCnt = 0;
  v12 = SoundCheckMenu__svtVoiceCheck(_4__this, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SoundCheckMenu__allCheck_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundCheckMenu_o *_4__this; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w8
  int32_t v15; // w20
  EffectEntity_o *v16; // x8
  DataManager_o *v17; // x21
  struct EffectEntity_array *_7__wrap2; // x9
  int32_t max_length; // w10
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C35055 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C32C20(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22290/*"not exist : "*/);
    sub_1C32C20(&StringLiteral_81/*"\ntarget : Battle\n"*/);
    sub_1C32C20(&StringLiteral_3084/*"Battle"*/);
    byte_4C35055 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v15 = -1;
LABEL_33:
    this->fields.__1__state = v15;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EffectMaster___),
          this->fields._effectMst_5__2 = (struct EffectMaster_o *)MasterData_object,
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._effectMst_5__2, (int32_t)MasterData_object, v10, v11),
          (Instance = (DataManager_o *)this->fields._effectMst_5__2) == 0)
      || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (const MethodInfo_3395ABC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__)) == 0
      || !_4__this )
    {
LABEL_35:
      sub_1C32E7C(Instance);
    }
    _4__this->fields.checkMax = (int32_t)Instance->fields.m_CancellationTokenSource;
    this->fields.__7__wrap2 = (struct EffectEntity_array *)Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__7__wrap2, (int32_t)Instance, v12, v13);
    v14 = 0;
    for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v14 )
    {
      Instance = (DataManager_o *)&this->fields.__7__wrap2;
      _7__wrap2 = this->fields.__7__wrap2;
      if ( !_7__wrap2 )
        goto LABEL_35;
      max_length = _7__wrap2->max_length;
      if ( v14 >= max_length )
      {
        Instance->klass = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)Instance, 0, v2, v3);
        if ( !_4__this )
          goto LABEL_35;
        _4__this->fields.nextCheck = 0;
        v15 = 2;
        goto LABEL_32;
      }
      if ( v14 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      v16 = _7__wrap2->m_Items[v14];
      if ( !v16 )
        goto LABEL_35;
      Instance = (DataManager_o *)this->fields._effectMst_5__2;
      if ( !Instance )
        goto LABEL_35;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v16->fields.id,
                                    (const MethodInfo_3396838 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_35;
      v17 = Instance;
      Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      if ( !_4__this )
        goto LABEL_35;
      ++_4__this->fields.checkCnt;
LABEL_20:
      v14 = this->fields.__7__wrap3 + 1;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)SoundManager__IsExistsSound(
                                  (SoundManager_o *)Instance,
                                  (System_String_o *)StringLiteral_3084/*"Battle"*/,
                                  *(System_String_o **)&v17->fields._DispLog,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      Instance = (DataManager_o *)System_String__Concat_63556792(
                                    (System_String_o *)StringLiteral_22290/*"not exist : "*/,
                                    *(System_String_o **)&v17->fields._DispLog,
                                    (System_String_o *)StringLiteral_81/*"\ntarget : Battle\n"*/,
                                    0);
      if ( !_4__this )
        goto LABEL_35;
      SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, 0);
    }
    ++_4__this->fields.checkCnt;
    v15 = 1;
LABEL_32:
    this->fields.__2__current = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v20, v21);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SoundCheckMenu__battleEffectCheck_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 Instance; // x0
  int32_t v6; // w20
  struct SoundCheckMenu_o *v7; // x20
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *Entitys; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_string__o *cpkNameList; // x9
  int32_t v21; // w8
  Il2CppObject *v22; // x22
  struct SoundCheckMenu___c__DisplayClass19_0_o **p__8__1; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Item; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  struct SoundCheckMenu___c__DisplayClass19_0_o *v33; // x23
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  System_String_o *nameOrig_5__7; // x22
  Il2CppObject *v41; // x24
  SoundManager_o *v42; // x21
  System_Action_o *v43; // x23
  struct SoundCheckMenu___c__DisplayClass19_0_o *_8__1; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x8
  int max_length; // w9
  int v49; // w10
  struct ServantLimitAddEntity_o *v50; // x1
  __int64 v51; // x21
  __int64 v52; // x8
  unsigned __int64 v53; // x28
  ServantVoiceEntity_o *v54; // x22
  int32_t i; // w23
  _BOOL8 v56; // x0
  Il2CppObject *current; // x24
  int monitor; // w8
  int j; // w21
  __int64 v60; // x26
  System_Collections_Generic_Dictionary_TKey__TValue__o *svtVoiceListup_5__4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v62; // x0
  struct SoundCheckMenu___c__DisplayClass19_0_o *v63; // x8
  struct AssetData_o *nobleAssetData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v66; // w8
  unsigned int v67; // w22
  __int64 v68; // x8
  UnityEngine_Object_o *v69; // x21
  int v70; // w8
  __int64 v71; // x21
  int k; // w20
  __int64 v73; // x22
  struct CriAtomEx_CueInfo_array *CueInfoList; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w8
  Il2CppObject *name; // x21
  __int64 v79; // x22
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x5
  __int64 v84; // x6
  __int64 v85; // x7
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  __int64 v87; // x23
  Il2CppObject *v88; // x22
  struct CriAtomEx_CueInfo_array *_7__wrap9; // x9
  int32_t v90; // w10
  struct SoundCheckMenu___c__DisplayClass19_0_o *v91; // x8
  struct SoundCheckMenu___c__DisplayClass19_0_o **v92; // x21
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Collections_Generic_List_string__o *v99; // x9
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  __int64 v102; // x22
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_String_o *v111; // x1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w1
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  __int64 v117; // x22
  int32_t v118; // w1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int32_t v123; // w1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_String_o *v126; // x1
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  struct SoundCheckMenu_o *_4__this; // [xsp+8h] [xbp-A8h]
  __int64 v132; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C35056 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__bool__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_4422/*"ChrSequence1"*/);
    sub_1C32C20(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C32C20(&StringLiteral_1151/*"0_"*/);
    sub_1C32C20(&StringLiteral_19433/*"file only data : "*/);
    sub_1C32C20(&StringLiteral_9516/*"NoblePhantasm/Sequence/"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C35056 = 1;
  }
  memset(&v134, 0, sizeof(v134));
  Instance = 0;
  v6 = -1;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      this->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)MasterData_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtVoiceMst_5__2, (int32_t)MasterData_object, v9, v10);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !Instance )
        goto LABEL_148;
      Entitys = DataMasterBase_object__object__object___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  (const MethodInfo_339A574 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      this->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)Entitys;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntitys_5__3, (int32_t)Entitys, v12, v13);
      v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v14,
        (const MethodInfo_34433AC *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._svtVoiceListup_5__4 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v14;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtVoiceListup_5__4, (int32_t)v14, v15, v16);
      v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v17,
        (const MethodInfo_34433AC *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._nobleListup_5__5 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v17;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._nobleListup_5__5, (int32_t)v17, v18, v19);
      v7 = _4__this;
      if ( !_4__this )
        goto LABEL_148;
      cpkNameList = _4__this->fields.cpkNameList;
      if ( !cpkNameList )
        goto LABEL_148;
      v21 = 0;
      _4__this->fields.checkMax = cpkNameList->fields._size;
      this->fields._ii_5__6 = 0;
      break;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_23;
    case 2:
    case 3:
      v7 = this->fields.__4__this;
      this->fields.__1__state = -1;
      goto LABEL_114;
    case 4:
      goto LABEL_139;
    default:
      return Instance;
  }
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_148;
    v99 = v7->fields.cpkNameList;
    if ( !v99 )
      goto LABEL_148;
    if ( v21 >= v99->fields._size )
    {
      v7->fields.nextCheck = 0;
      v6 = 4;
      goto LABEL_138;
    }
    v22 = (Il2CppObject *)sub_1C32E6C(SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor(v22, 0);
    this->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass19_0_o *)v22;
    p__8__1 = &this->fields.__8__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v22, v24, v25);
    Instance = (__int64)v7->fields.cpkNameList;
    if ( !Instance )
      goto LABEL_148;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             this->fields._ii_5__6,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
    this->fields._nameOrig_5__7 = (struct System_String_o *)Item;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._nameOrig_5__7, (int32_t)Item, v27, v28);
    Instance = (__int64)this->fields._nameOrig_5__7;
    if ( !Instance )
      goto LABEL_148;
    Instance = (__int64)System_String__Split((System_String_o *)Instance, 0x5Fu, 0, 0);
    if ( !*p__8__1 )
      goto LABEL_148;
    (*p__8__1)->fields.isLoad = 1;
    ++v7->fields.checkCnt;
    if ( !Instance )
      goto LABEL_148;
    if ( *(_DWORD *)(Instance + 24) == 2 )
    {
      Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 40), &this->fields._voiceId_5__8, 0);
      if ( (Instance & 1) != 0 )
        break;
    }
LABEL_125:
    v21 = this->fields._ii_5__6 + 1;
    this->fields._ii_5__6 = v21;
  }
  v33 = *p__8__1;
  LODWORD(v133.fields._list) = this->fields._voiceId_5__8;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v2, v3, v29, v30, v31, v32);
  Instance = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_9516/*"NoblePhantasm/Sequence/"*/, v34, 0);
  if ( !v33 )
    goto LABEL_148;
  v33->fields.sequencePath = (struct System_String_o *)Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields, Instance, v35, v36);
  Instance = (__int64)this->fields._nobleListup_5__5;
  if ( !Instance )
    goto LABEL_148;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
    (const MethodInfo_3443F08 *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  Instance = (__int64)*p__8__1;
  if ( !*p__8__1 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 32) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 32), 0, v37, v38);
  v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  nameOrig_5__7 = this->fields._nameOrig_5__7;
  v41 = (Il2CppObject *)*p__8__1;
  v42 = (SoundManager_o *)v39;
  v43 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v43, v41, Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__, 0);
  if ( !v42 )
    goto LABEL_148;
  SoundManager__LoadAudioAssetStorage(v42, nameOrig_5__7, v43, 1, 0);
LABEL_23:
  _8__1 = this->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_148;
  if ( _8__1->fields.isLoad )
  {
    v6 = 1;
    goto LABEL_138;
  }
  this->fields._svtLimitAddEntity_5__9 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, 0, v2, v3);
  svtLimitAddEntitys_5__3 = this->fields._svtLimitAddEntitys_5__3;
  if ( !svtLimitAddEntitys_5__3 )
    goto LABEL_148;
  max_length = svtLimitAddEntitys_5__3->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( max_length == v49 )
        goto LABEL_149;
      v50 = svtLimitAddEntitys_5__3->m_Items[v49];
      if ( !v50 )
        goto LABEL_148;
      if ( v50->fields.svtId == this->fields._voiceId_5__8 )
        break;
      if ( max_length == ++v49 )
        goto LABEL_34;
    }
    this->fields._svtLimitAddEntity_5__9 = v50;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, (int32_t)v50, v45, v46);
  }
LABEL_34:
  Instance = (__int64)this->fields._svtVoiceMst_5__2;
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)ServantVoiceMaster__getEntity_42714556(
                        (ServantVoiceMaster_o *)Instance,
                        this->fields._voiceId_5__8,
                        0,
                        0);
  if ( !this->fields._svtVoiceListup_5__4 )
    goto LABEL_148;
  v51 = Instance;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
    (const MethodInfo_3443F08 *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  if ( !v51 )
    goto LABEL_148;
  v52 = *(_QWORD *)(v51 + 24);
  if ( (int)v52 >= 1 )
  {
    v53 = 0;
    v132 = v51;
    do
    {
      if ( v53 >= (unsigned int)v52 )
        goto LABEL_149;
      v54 = *(ServantVoiceEntity_o **)(v51 + 8 * v53 + 32);
      if ( v54 )
      {
        for ( i = 1; i != 25; ++i )
        {
          Instance = (__int64)ServantVoiceEntity__getVoiceList(v54, i, 0);
          if ( Instance )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v133,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
            v134 = v133;
            while ( 1 )
            {
              v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v134,
                      (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
              if ( !v56 )
                break;
              current = v134.fields._current;
              if ( !v134.fields._current )
                sub_1C32E7C(v56);
              monitor = (int)v134.fields._current[1].monitor;
              if ( monitor >= 1 )
              {
                for ( j = 0; j < monitor; ++j )
                {
                  if ( j >= (unsigned int)monitor )
                    sub_1C32E84(v56);
                  v60 = *((_QWORD *)&current[2].klass + j);
                  if ( !v60 )
                    sub_1C32E7C(v56);
                  svtVoiceListup_5__4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                  if ( !svtVoiceListup_5__4 )
                    sub_1C32E7C(0);
                  v56 = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                          svtVoiceListup_5__4,
                          *(Il2CppObject **)(v60 + 16),
                          (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
                  if ( !v56 )
                  {
                    v62 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                    if ( !v62 )
                      sub_1C32E7C(0);
                    System_Collections_Generic_Dictionary_object__bool___Add(
                      v62,
                      *(Il2CppObject **)(v60 + 16),
                      1,
                      (const MethodInfo_3443D6C *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
                  }
                  monitor = (int)current[1].monitor;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v134,
              (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          }
        }
      }
      v51 = v132;
      ++v53;
      LODWORD(v52) = *(_DWORD *)(v132 + 24);
    }
    while ( (__int64)v53 < (int)v52 );
  }
  v63 = this->fields.__8__1;
  if ( !v63 )
    goto LABEL_148;
  nobleAssetData = v63->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    objectList = nobleAssetData->fields.objectList;
    if ( !objectList )
      goto LABEL_148;
    v66 = objectList->max_length;
    if ( v66 < 1 )
    {
LABEL_75:
      v69 = 0;
    }
    else
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= v66 )
          goto LABEL_149;
        v68 = (__int64)objectList + 8 * (int)v67;
        v69 = *(UnityEngine_Object_o **)(v68 + 32);
        if ( !v69 )
          goto LABEL_148;
        Instance = (__int64)UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v68 + 32), 0);
        if ( !Instance )
          goto LABEL_148;
        Instance = System_String__Equals_63553848((System_String_o *)Instance, (System_String_o *)StringLiteral_4422/*"ChrSequence1"*/, 0);
        if ( (Instance & 1) != 0 )
          break;
        v66 = objectList->max_length;
        if ( (int)++v67 >= v66 )
          goto LABEL_75;
      }
      if ( (UnityEngine_GameObject_c *)v69->klass != UnityEngine_GameObject_TypeInfo )
        v69 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(v69, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v69 )
        goto LABEL_148;
      Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                            (UnityEngine_GameObject_o *)v69,
                            (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      if ( !Instance )
        goto LABEL_148;
      v70 = *(_DWORD *)(Instance + 24);
      v71 = Instance;
      if ( v70 >= 1 )
      {
        for ( k = 0; k < v70; ++k )
        {
          if ( k >= (unsigned int)v70 )
            goto LABEL_149;
          v73 = *(_QWORD *)(v71 + 8LL * k + 32);
          if ( !v73 )
            goto LABEL_148;
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                       *(Il2CppObject **)(v73 + 72),
                       (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)this->fields._nobleListup_5__5;
            if ( !Instance )
              goto LABEL_148;
            System_Collections_Generic_Dictionary_object__bool___Add(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
              *(Il2CppObject **)(v73 + 72),
              1,
              (const MethodInfo_3443D6C *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
          }
          v70 = *(_DWORD *)(v71 + 24);
        }
      }
    }
  }
  Instance = (__int64)CriAtom__GetAcb(this->fields._nameOrig_5__7, 0);
  v7 = _4__this;
  if ( !Instance )
  {
LABEL_118:
    v92 = &this->fields.__8__1;
    v91 = this->fields.__8__1;
    if ( !v91 )
      goto LABEL_148;
    if ( v91->fields.nobleAssetData )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !*v92 || !Instance )
        goto LABEL_148;
      AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, (*v92)->fields.sequencePath, 0);
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields._nameOrig_5__7, 0);
    this->fields.__8__1 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__8__1, 0, v93, v94);
    this->fields._nameOrig_5__7 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._nameOrig_5__7, 0, v95, v96);
    this->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, 0, v97, v98);
    goto LABEL_125;
  }
  CueInfoList = CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)Instance, 0);
  this->fields.__7__wrap9 = CueInfoList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__7__wrap9, (int32_t)CueInfoList, v75, v76);
  v77 = 0;
  for ( this->fields.__7__wrap10 = 0; ; this->fields.__7__wrap10 = v77 )
  {
    Instance = (__int64)&this->fields.__7__wrap9;
    _7__wrap9 = this->fields.__7__wrap9;
    if ( !_7__wrap9 )
      goto LABEL_148;
    v90 = _7__wrap9->max_length;
    if ( v77 >= v90 )
    {
      *(_QWORD *)Instance = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)Instance, 0, v2, v3);
      goto LABEL_118;
    }
    if ( v77 >= (unsigned int)v90 )
      goto LABEL_149;
    Instance = (__int64)this->fields._svtVoiceListup_5__4;
    if ( !Instance )
      goto LABEL_148;
    name = (Il2CppObject *)_7__wrap9->m_Items[v77].fields.name;
    if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
            name,
            (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      Instance = (__int64)this->fields._nobleListup_5__5;
      if ( !Instance )
        goto LABEL_148;
      Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                   name,
                   (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
      if ( (Instance & 1) == 0 )
        break;
    }
LABEL_114:
    v77 = this->fields.__7__wrap10 + 1;
  }
  if ( !name )
    goto LABEL_148;
  Instance = (__int64)System_String__Split((System_String_o *)name, 0x5Fu, 0, 0);
  if ( !Instance )
    goto LABEL_148;
  v79 = Instance;
  if ( *(_DWORD *)(Instance + 24) != 2 )
    goto LABEL_130;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_148;
  Instance = System_String__Equals_63553848((System_String_o *)Instance, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
  if ( (Instance & 1) == 0 )
  {
    svtLimitAddEntity_5__9 = this->fields._svtLimitAddEntity_5__9;
    if ( svtLimitAddEntity_5__9 )
    {
      if ( !*(_DWORD *)(v79 + 24) )
        goto LABEL_149;
      v87 = *(_QWORD *)(v79 + 32);
      LODWORD(v133.fields._list) = svtLimitAddEntity_5__9->fields.voicePrefix;
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &v133, v80, v81, v82, v83, v84, v85);
      if ( !v87 )
        goto LABEL_148;
      Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v87 + 312LL))(
                   v87,
                   Instance,
                   *(_QWORD *)(*(_QWORD *)v87 + 320LL));
      if ( (Instance & 1) != 0 )
      {
        if ( *(_DWORD *)(v79 + 24) <= 1u )
          goto LABEL_149;
        Instance = (__int64)System_String__Concat_63518544(
                              (System_String_o *)StringLiteral_1151/*"0_"*/,
                              *(System_String_o **)(v79 + 40),
                              0);
        if ( !this->fields._svtVoiceListup_5__4 )
          goto LABEL_148;
        v88 = (Il2CppObject *)Instance;
        if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
                (Il2CppObject *)Instance,
                (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
        {
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                  v88,
                  (const MethodInfo_3443F74 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
          {
            Instance = sub_1C32CC8(string___TypeInfo, 5);
            if ( !Instance )
              goto LABEL_148;
            v117 = Instance;
            if ( *(_DWORD *)(Instance + 24) )
            {
              v118 = StringLiteral_19433/*"file only data : "*/;
              *(_QWORD *)(Instance + 32) = StringLiteral_19433/*"file only data : "*/;
              sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 32), v118, v115, v116);
              if ( *(_DWORD *)(v117 + 24) > 1u )
              {
                *(_QWORD *)(v117 + 40) = name;
                sub_1C32BC4((CGThumbnailListItem_o *)(v117 + 40), (int32_t)name, v119, v120);
                if ( *(_DWORD *)(v117 + 24) > 2u )
                {
                  v123 = StringLiteral_80/*"\ntarget : "*/;
                  *(_QWORD *)(v117 + 48) = StringLiteral_80/*"\ntarget : "*/;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v117 + 48), v123, v121, v122);
                  if ( *(_DWORD *)(v117 + 24) > 3u )
                  {
                    v126 = this->fields._nameOrig_5__7;
                    *(_QWORD *)(v117 + 56) = v126;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v117 + 56), (int32_t)v126, v124, v125);
                    if ( *(_DWORD *)(v117 + 24) > 4u )
                    {
                      v129 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v117 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v117 + 64), v129, v127, v128);
                      Instance = (__int64)System_String__Concat_63559060((System_String_array *)v117, 0);
                      if ( v7 )
                      {
                        SoundCheckMenu__ErrorOutput(v7, (System_String_o *)Instance, 0);
                        v6 = 2;
                        goto LABEL_138;
                      }
LABEL_148:
                      sub_1C32E7C(Instance);
                    }
                  }
                }
              }
            }
LABEL_149:
            sub_1C32E84(Instance);
          }
        }
      }
      goto LABEL_114;
    }
  }
LABEL_130:
  Instance = sub_1C32CC8(string___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_148;
  v102 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_149;
  v103 = StringLiteral_19433/*"file only data : "*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_19433/*"file only data : "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 32), v103, v100, v101);
  if ( *(_DWORD *)(v102 + 24) <= 1u )
    goto LABEL_149;
  *(_QWORD *)(v102 + 40) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 40), (int32_t)name, v104, v105);
  if ( *(_DWORD *)(v102 + 24) <= 2u )
    goto LABEL_149;
  v108 = StringLiteral_80/*"\ntarget : "*/;
  *(_QWORD *)(v102 + 48) = StringLiteral_80/*"\ntarget : "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 48), v108, v106, v107);
  if ( *(_DWORD *)(v102 + 24) <= 3u )
    goto LABEL_149;
  v111 = this->fields._nameOrig_5__7;
  *(_QWORD *)(v102 + 56) = v111;
  sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 56), (int32_t)v111, v109, v110);
  if ( *(_DWORD *)(v102 + 24) <= 4u )
    goto LABEL_149;
  v114 = StringLiteral_43/*"\n"*/;
  *(_QWORD *)(v102 + 64) = StringLiteral_43/*"\n"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 64), v114, v112, v113);
  Instance = (__int64)System_String__Concat_63559060((System_String_array *)v102, 0);
  if ( !v7 )
    goto LABEL_148;
  SoundCheckMenu__ErrorOutput(v7, (System_String_o *)Instance, 0);
  v6 = 3;
LABEL_138:
  this->fields.__2__current = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
  LOBYTE(Instance) = 1;
LABEL_139:
  this->fields.__1__state = v6;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SoundCheckMenu__cueNameMstCheck_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3
  SoundCheckMenu__npCheck_d__20_o *v4; // x25
  Il2CppObject *v5; // x20
  SoundCheckMenu__npCheck_d__20_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x1
  SoundCheckMenu__npCheck_d__20_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *svtLimitAddMst_5__2; // x0
  System_Object_array *v20; // x1
  SoundCheckMenu__npCheck_d__20_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 IsServant; // x0
  int max_length; // w8
  int i; // w25
  Il2CppClass **v27; // x8
  Il2CppObject *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Text_RegularExpressions_Regex_o *v35; // x21
  SoundCheckMenu__npCheck_d__20_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Text_RegularExpressions_Regex_o *v39; // x21
  SoundCheckMenu__npCheck_d__20_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct SoundCheckMenu___c__DisplayClass20_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v44; // x22
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  SoundCheckMenu__npCheck_d__20_o *v48; // x9
  __int128 v49; // q0
  CGThumbnailListItem_o *p__7__wrap5; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Text_RegularExpressions_Group_o *v53; // x19
  bool result; // w0
  System_Text_RegularExpressions_Group_o *v55; // x20
  struct ServantEntity_o *v56; // x1
  Il2CppObject *v57; // x25
  SoundCheckMenu__npCheck_d__20_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct SoundCheckMenu___c__DisplayClass20_1_o *v63; // x0
  struct SoundCheckMenu___c__DisplayClass20_0_o *v64; // x1
  __int64 v65; // x0
  const MethodInfo *v66; // x2
  struct ServantEntity_o *v67; // x8
  System_String_o *v68; // x1
  struct System_String_o *v69; // x1
  SoundCheckMenu__npCheck_d__20_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_String_o *v73; // x25
  _BOOL8 isExistAssetStorage; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  SoundCheckMenu__npCheck_d__20_o *v77; // x0
  __int64 v78; // x0
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x20
  int v80; // w8
  unsigned int v81; // w21
  struct ServantLimitAddEntity_o *v82; // x25
  struct ServantEntity_o *v83; // x8
  int32_t svtId; // w22
  __int64 v85; // x26
  __int64 v86; // x27
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  SoundCheckMenu__npCheck_d__20_o *v89; // x0
  struct ServantEntity_o *v90; // x9
  ServantLimitAddMaster_o *v91; // x25
  __int64 v92; // x26
  __int64 v93; // x27
  __int64 v94; // x0
  __int64 VoiceId; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *v96; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v97; // x9
  struct System_Collections_Generic_List_string__o *v98; // x9
  int32_t v99; // w2
  int v100; // w10
  struct SoundCheckMenu___c__DisplayClass20_0_o *v101; // x8
  System_Collections_Generic_List_object__o *v102; // x25
  System_String_o *v103; // x1
  Il2CppObject *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  Il2CppObject *v107; // x1
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *v113; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v114; // x8
  System_Collections_Generic_List_object__o *v115; // x25
  System_String_o *v116; // x1
  Il2CppObject *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x1
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  __int64 v125; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *v126; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v127; // x8
  System_Collections_Generic_List_object__o *v128; // x25
  System_String_o *v129; // x1
  Il2CppObject *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  Il2CppObject *v133; // x1
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct SoundCheckMenu___c__DisplayClass20_1_o *v140; // x0
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x0
  System_String_o *v142; // x25
  Il2CppObject *v143; // x27
  AssetLoader_LoadEndDataHandler_o *v144; // x26
  struct SoundCheckMenu___c__DisplayClass20_1_o *v145; // x8
  struct AssetData_o *nobleSequenceData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v148; // w8
  unsigned int v149; // w21
  __int64 v150; // x8
  UnityEngine_Object_o *v151; // x25
  System_String_o *name; // x0
  _BOOL8 v153; // x0
  System_Object_array *ComponentsInChildren_object__51598740; // x1
  SoundCheckMenu__npCheck_d__20_o *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int v158; // w8
  SoundCheckMenu__npCheck_d__20_o *v159; // x8
  int v160; // w9
  SoundCheckMenu__npCheck_d__20_o *v161; // x0
  WellFired_USFGOPlayAudioEvent_o *v162; // x22
  System_String_o *soundId; // x26
  _BOOL8 v164; // x0
  const MethodInfo *v165; // x2
  System_Text_RegularExpressions_Group_o *v166; // x19
  struct ServantEntity_o *svtEntity_5__7; // x20
  System_Text_RegularExpressions_Regex_o *rNpVoice_5__4; // x0
  System_Text_RegularExpressions_Regex_o *v169; // x0
  System_Text_RegularExpressions_Match_o *matched; // x26
  __int64 v171; // x0
  const MethodInfo *v172; // x2
  struct ServantEntity_o *v173; // x20
  __int64 v174; // x25
  System_String_o *v175; // x0
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  __int64 v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  int32_t v181; // w1
  __int64 v182; // x0
  System_Text_RegularExpressions_GroupCollection_o *v183; // x0
  System_Text_RegularExpressions_Group_o *Item; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  System_Text_RegularExpressions_Group_o *v187; // x10
  System_Text_RegularExpressions_Group_o *v188; // x1
  __int64 v189; // x0
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  int32_t v192; // w1
  System_Text_RegularExpressions_GroupCollection_o *v193; // x0
  System_Text_RegularExpressions_Group_o *v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  System_Text_RegularExpressions_Group_o *v197; // x10
  System_Text_RegularExpressions_Group_o *v198; // x1
  System_Text_RegularExpressions_Regex_o *rNpSE_5__5; // x0
  System_Text_RegularExpressions_Regex_o *v200; // x0
  System_Text_RegularExpressions_Match_o *v201; // x0
  const MethodInfo *v202; // x2
  struct ServantEntity_o *v203; // x20
  System_Text_RegularExpressions_Match_o *v204; // x26
  System_String_o *v205; // x0
  System_String_o *v206; // x25
  System_Text_RegularExpressions_GroupCollection_o *v207; // x0
  System_Text_RegularExpressions_Group_o *v208; // x0
  System_Text_RegularExpressions_Group_o *v209; // x10
  System_String_o *v210; // x26
  System_String_o *v211; // x27
  System_String_o *v212; // x3
  System_Text_RegularExpressions_Regex_o *v213; // x0
  System_String_o *IsMatch_70053540; // x0
  System_Text_RegularExpressions_Regex_o *v215; // x0
  System_Text_RegularExpressions_Match_o *v216; // x0
  System_Text_RegularExpressions_Match_o *v217; // x26
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  System_String_o *v219; // x0
  System_String_o *v220; // x25
  System_Text_RegularExpressions_GroupCollection_o *v221; // x0
  System_Text_RegularExpressions_Group_o *v222; // x0
  System_Text_RegularExpressions_Group_o *v223; // x10
  System_String_o *v224; // x26
  System_String_o *v225; // x2
  int v226; // w8
  System_Text_RegularExpressions_GroupCollection_o *v227; // x0
  System_Text_RegularExpressions_Group_o *v228; // x0
  System_String_o *v229; // x25
  System_String_o *v230; // x1
  int32_t audioType; // w9
  __int64 v232; // x0
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  __int64 v235; // x25
  int32_t v236; // w1
  __int64 v237; // x0
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  __int64 v240; // x0
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  int32_t v243; // w1
  __int64 v244; // x0
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  struct System_String_o *sequencePath_5__8; // x1
  __int64 v248; // x0
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  __int64 v251; // x0
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  int32_t v254; // w1
  __int64 v255; // x0
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  __int64 v258; // x0
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  int32_t v261; // w1
  __int64 v262; // x0
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  struct System_String_o *v265; // x1
  __int64 v266; // x0
  int32_t v267; // w1
  System_String_o *v268; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *_8__2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_object__o *voiceDataPath; // x0
  _BOOL4 v272; // w25
  Il2CppObject *current; // x27
  Il2CppObject *v274; // x0
  Il2CppObject *v275; // x0
  struct WellFired_USFGOPlayAudioEvent_array *v276; // x9
  CGThumbnailListItem_o *p__7__wrap9; // x25
  struct WellFired_USFGOPlayAudioEvent_array *_7__wrap9; // t1
  int v279; // w10
  System_String_o *v280; // x25
  __int64 v281; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *v282; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v283; // x8
  System_Collections_Generic_List_object__o *v284; // x0
  Il2CppObject *v285; // x25
  Il2CppObject *v286; // x0
  __int64 v287; // x0
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  __int64 v290; // x20
  int32_t v291; // w1
  __int64 v292; // x0
  int32_t v293; // w2
  const MethodInfo *v294; // x3
  __int64 v295; // x0
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  int32_t v298; // w1
  __int64 v299; // x0
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  struct System_String_o *v302; // x1
  __int64 v303; // x0
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  int32_t v306; // w1
  System_String_o *v307; // x0
  SoundCheckMenu__npCheck_d__20_o *v308; // x0
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  __int64 v311; // x0
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  SoundCheckMenu__npCheck_d__20_o *v314; // x0
  SoundCheckMenu__npCheck_d__20_o *v315; // x0
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  SoundCheckMenu__npCheck_d__20_o *v318; // x0
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  SoundCheckMenu__npCheck_d__20_o *v321; // x0
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  const MethodInfo *v324; // x1
  int32_t v325; // w2
  const MethodInfo *v326; // x3
  bool v327; // w8
  SoundCheckMenu__npCheck_d__20_o *v328; // x0
  int32_t v329; // w2
  const MethodInfo *v330; // x3
  SoundCheckMenu__npCheck_d__20_o *v331; // x0
  System_Text_RegularExpressions_Group_o *v332; // [xsp+10h] [xbp-110h]
  System_Text_RegularExpressions_Group_o *v333; // [xsp+18h] [xbp-108h]
  System_Text_RegularExpressions_Group_o *v334; // [xsp+20h] [xbp-100h]
  System_Text_RegularExpressions_Group_o *v335; // [xsp+28h] [xbp-F8h]
  SoundCheckMenu_o *_4__this; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v337; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v338; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v339; // [xsp+70h] [xbp-B0h]
  SoundCheckMenu__npCheck_d__20_o **v340; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v341; // [xsp+80h] [xbp-A0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+A0h] [xbp-80h] BYREF
  int v343; // [xsp+B4h] [xbp-6Ch] BYREF
  SoundCheckMenu__npCheck_d__20_o *v344; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v348; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v349; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v350; // 0:x0.16

  v4 = this;
  v344 = this;
  if ( (byte_4C35057 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_4422/*"ChrSequence1"*/);
    sub_1C32C20(&StringLiteral_9518/*"NoblePhantasm_"*/);
    sub_1C32C20(&StringLiteral_22290/*"not exist : "*/);
    sub_1C32C20(&StringLiteral_9351/*"NP_"*/);
    sub_1C32C20(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_4424/*"ChrVoice_"*/);
    sub_1C32C20(&StringLiteral_1151/*"0_"*/);
    sub_1C32C20(&StringLiteral_12760/*"Servants_"*/);
    sub_1C32C20(&StringLiteral_736/*"(\\d+)_(\\d)_(.+)"*/);
    sub_1C32C20(&StringLiteral_9352/*"NP_(\\d+)_(.+)"*/);
    sub_1C32C20(&StringLiteral_16938/*"audio type error : "*/);
    sub_1C32C20(&StringLiteral_3084/*"Battle"*/);
    this = (SoundCheckMenu__npCheck_d__20_o *)sub_1C32C20(&StringLiteral_9516/*"NoblePhantasm/Sequence/"*/);
    byte_4C35057 = 1;
  }
  v343 = 0;
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v341, 0, sizeof(v341));
  v339 = 0;
  v340 = &v344;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C32E6C(SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v5, 0);
      v6 = v344;
      v344->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass20_0_o *)v5;
      sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.__8__1, (int32_t)v5, v7, v8);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C32E7C(0);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !MasterData_object )
        sub_1C32E7C(0);
      DataMasterBase_object__object__int___getEntitys(
        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
        (const MethodInfo_3395ABC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  v11,
                  (const MethodInfo_3395ABC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v14 )
        sub_1C32E7C(0);
      v15 = DataManager__GetMasterData_object_(
              (DataManager_o *)v14,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = v344;
      v344->fields._svtLimitAddMst_5__2 = (struct ServantLimitAddMaster_o *)v15;
      sub_1C32BC4((CGThumbnailListItem_o *)&v16->fields._svtLimitAddMst_5__2, (int32_t)v15, v17, v18);
      svtLimitAddMst_5__2 = (DataMasterBase_TMaster__TEntity__PKType__o *)v344->fields._svtLimitAddMst_5__2;
      if ( !svtLimitAddMst_5__2 )
        sub_1C32E7C(0);
      v20 = DataMasterBase_object__object__object___getEntitys(
              svtLimitAddMst_5__2,
              (const MethodInfo_339A574 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      v21 = v344;
      v344->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)v20;
      sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields._svtLimitAddEntitys_5__3, (int32_t)v20, v22, v23);
      if ( !Entitys )
        sub_1C32E7C(IsServant);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C32E84(IsServant);
          v27 = &Entitys->obj.klass + i;
          v28 = (Il2CppObject *)v27[4];
          if ( !v28 )
            sub_1C32E7C(IsServant);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)v27[4], 0);
          if ( IsServant )
          {
            if ( !v13 )
              sub_1C32E7C(IsServant);
            items = v13->fields._items;
            v32 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1C32E7C(IsServant);
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                v28,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v28;
              sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v13 )
        sub_1C32E7C(IsServant);
      if ( !_4__this )
        sub_1C32E7C(IsServant);
      _4__this->fields.checkMax = v13->fields._size;
      v35 = (System_Text_RegularExpressions_Regex_o *)sub_1C32E6C(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70058432(v35, (System_String_o *)StringLiteral_736/*"(\\d+)_(\\d)_(.+)"*/, 1, 0);
      v36 = v344;
      v344->fields._rNpVoice_5__4 = v35;
      sub_1C32BC4((CGThumbnailListItem_o *)&v36->fields._rNpVoice_5__4, (int32_t)v35, v37, v38);
      v39 = (System_Text_RegularExpressions_Regex_o *)sub_1C32E6C(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70058432(v39, (System_String_o *)StringLiteral_9352/*"NP_(\\d+)_(.+)"*/, 1, 0);
      v40 = v344;
      v344->fields._rNpSE_5__5 = v39;
      sub_1C32BC4((CGThumbnailListItem_o *)&v40->fields._rNpSE_5__5, (int32_t)v39, v41, v42);
      _8__1 = v344->fields.__8__1;
      v44 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C32E7C(v45);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v44;
      sub_1C32BC4((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v44, v46, v47);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v337,
        v13,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v48 = v344;
      v49 = *(_OWORD *)&v337.fields._list;
      p__7__wrap5 = (CGThumbnailListItem_o *)&v344->fields.__7__wrap5;
      v338 = v337;
      v344->fields.__7__wrap5.fields._current = (struct ServantEntity_o *)v337.fields._current;
      *(_OWORD *)&v48->fields.__7__wrap5.fields._list = v49;
      sub_1C32BC4(p__7__wrap5, 0, v51, v52);
      v4 = v344;
      goto LABEL_24;
    case 1:
LABEL_24:
      v53 = 0;
      v334 = 0;
      v335 = 0;
      v332 = 0;
      v333 = 0;
      v4->fields.__1__state = -3;
      goto LABEL_334;
    case 2:
      v53 = 0;
      v334 = 0;
      v335 = 0;
      v332 = 0;
      v333 = 0;
      v4->fields.__1__state = -3;
      goto LABEL_93;
    case 3:
      v55 = 0;
      v334 = 0;
      v335 = 0;
      v332 = 0;
      v333 = 0;
      v4->fields.__1__state = -3;
      break;
    case 4:
      result = 0;
      v4->fields.__1__state = -1;
      return result;
    default:
      return 0;
  }
  while ( 1 )
  {
    v158 = v4->fields.__7__wrap10 + 1;
    v4->fields.__7__wrap10 = v158;
LABEL_300:
    _7__wrap9 = v4->fields.__7__wrap9;
    p__7__wrap9 = (CGThumbnailListItem_o *)&v4->fields.__7__wrap9;
    v276 = _7__wrap9;
    if ( !_7__wrap9 )
      sub_1C32E7C(this);
    v279 = v276->max_length;
    if ( v158 >= v279 )
      break;
    if ( v158 >= (unsigned int)v279 )
      sub_1C32E84(this);
    v162 = v276->m_Items[v158];
    if ( !v162 )
      sub_1C32E7C(this);
    if ( !_4__this )
      sub_1C32E7C(0);
    soundId = v162->fields.soundId;
    v164 = SoundCheckMenu__IsReplaceable(_4__this, v162->fields.groupId, 0);
    v166 = v55;
    if ( v164 )
    {
      svtEntity_5__7 = v344->fields._svtEntity_5__7;
      if ( !svtEntity_5__7 )
        sub_1C32E7C(v164);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v348.fields.currentCryptoKey = &svtEntity_5__7->fields;
      *(_QWORD *)&v348.fields.fakeValue = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v348, v165);
      rNpVoice_5__4 = v344->fields._rNpVoice_5__4;
      if ( !rNpVoice_5__4 )
        sub_1C32E7C(0);
      v55 = v166;
      if ( System_Text_RegularExpressions_Regex__IsMatch_70053540(rNpVoice_5__4, soundId, 0) )
      {
        v169 = v344->fields._rNpVoice_5__4;
        if ( !v169 )
          sub_1C32E7C(0);
        matched = System_Text_RegularExpressions_Regex__Match_70054040(v169, soundId, 0);
        v171 = sub_1C32CC8(string___TypeInfo, 5);
        v173 = v344->fields._svtEntity_5__7;
        if ( !v173 )
          sub_1C32E7C(v171);
        v174 = v171;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v349.fields.currentCryptoKey = &v173->fields;
        *(_QWORD *)&v349.fields.fakeValue = 0;
        v175 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v349, v172);
        if ( !v174 )
          sub_1C32E7C(v175);
        if ( !*(_DWORD *)(v174 + 24) )
          sub_1C32E84(v175);
        v55 = v166;
        *(_QWORD *)(v174 + 32) = v175;
        sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 32), (int32_t)v175, v176, v177);
        if ( *(_DWORD *)(v174 + 24) <= 1u )
          sub_1C32E84(v178);
        v181 = StringLiteral_16107/*"_"*/;
        *(_QWORD *)(v174 + 40) = StringLiteral_16107/*"_"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 40), v181, v179, v180);
        if ( !matched )
          sub_1C32E7C(v182);
        v183 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v183 )
          sub_1C32E7C(0);
        Item = System_Text_RegularExpressions_GroupCollection__get_Item(v183, 2, 0);
        v187 = v334;
        if ( Item )
          v187 = Item;
        v334 = v187;
        if ( Item )
        {
          if ( !v187 )
            sub_1C32E7C(Item);
          Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v187->klass->vtable._3_ToString.methodPtr)(
                                                             v187,
                                                             v187->klass->vtable._3_ToString.method);
          v188 = Item;
        }
        else
        {
          v188 = 0;
        }
        if ( *(_DWORD *)(v174 + 24) <= 2u )
          sub_1C32E84(Item);
        *(_QWORD *)(v174 + 48) = v188;
        sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 48), (int32_t)v188, v185, v186);
        if ( *(_DWORD *)(v174 + 24) <= 3u )
          sub_1C32E84(v189);
        v192 = StringLiteral_16107/*"_"*/;
        *(_QWORD *)(v174 + 56) = StringLiteral_16107/*"_"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 56), v192, v190, v191);
        v193 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v193 )
          sub_1C32E7C(0);
        v194 = System_Text_RegularExpressions_GroupCollection__get_Item(v193, 3, 0);
        v197 = v333;
        if ( v194 )
          v197 = v194;
        v333 = v197;
        if ( v194 )
        {
          if ( !v197 )
            sub_1C32E7C(v194);
          v194 = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v197->klass->vtable._3_ToString.methodPtr)(
                                                             v197,
                                                             v197->klass->vtable._3_ToString.method);
          v198 = v194;
        }
        else
        {
          v198 = 0;
        }
        if ( *(_DWORD *)(v174 + 24) <= 4u )
          sub_1C32E84(v194);
        *(_QWORD *)(v174 + 64) = v198;
        sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 64), (int32_t)v198, v195, v196);
        soundId = System_String__Concat_63559060((System_String_array *)v174, 0);
      }
      rNpSE_5__5 = v344->fields._rNpSE_5__5;
      if ( !rNpSE_5__5 )
        sub_1C32E7C(0);
      if ( System_Text_RegularExpressions_Regex__IsMatch_70053540(rNpSE_5__5, soundId, 0) )
      {
        v200 = v344->fields._rNpSE_5__5;
        if ( !v200 )
          sub_1C32E7C(0);
        v201 = System_Text_RegularExpressions_Regex__Match_70054040(v200, soundId, 0);
        v203 = v344->fields._svtEntity_5__7;
        if ( !v203 )
          sub_1C32E7C(v201);
        v204 = v201;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v350.fields.currentCryptoKey = &v203->fields;
        *(_QWORD *)&v350.fields.fakeValue = 0;
        v205 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v350, v202);
        if ( !v204 )
          sub_1C32E7C(v205);
        v206 = v205;
        v55 = v166;
        v207 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v204->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v204,
                                                                     v204->klass->vtable._5_get_Groups.method);
        if ( !v207 )
          sub_1C32E7C(0);
        v208 = System_Text_RegularExpressions_GroupCollection__get_Item(v207, 2, 0);
        v209 = v332;
        v210 = (System_String_o *)StringLiteral_16107/*"_"*/;
        v211 = (System_String_o *)StringLiteral_9351/*"NP_"*/;
        if ( v208 )
          v209 = v208;
        v332 = v209;
        if ( v208 )
        {
          if ( !v209 )
            sub_1C32E7C(v208);
          v212 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v209->klass->vtable._3_ToString.methodPtr)(
                                      v209,
                                      v209->klass->vtable._3_ToString.method);
        }
        else
        {
          v212 = 0;
        }
        soundId = System_String__Concat_63558796(v211, v206, v210, v212, 0);
      }
    }
    v213 = v344->fields._rNpVoice_5__4;
    if ( !v213 )
      sub_1C32E7C(0);
    IsMatch_70053540 = (System_String_o *)System_Text_RegularExpressions_Regex__IsMatch_70053540(v213, soundId, 0);
    if ( ((unsigned __int8)IsMatch_70053540 & 1) != 0 )
    {
      v215 = v344->fields._rNpVoice_5__4;
      if ( !v215 )
        sub_1C32E7C(0);
      v216 = System_Text_RegularExpressions_Regex__Match_70054040(v215, soundId, 0);
      v217 = v216;
      svtLimitAddEntity_5__9 = v344->fields._svtLimitAddEntity_5__9;
      if ( svtLimitAddEntity_5__9 )
      {
        v219 = System_Int32__ToString((int)svtLimitAddEntity_5__9 + 52, 0);
        if ( !v217 )
          sub_1C32E7C(v219);
        v220 = v219;
        v221 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v217->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v217,
                                                                     v217->klass->vtable._5_get_Groups.method);
        if ( !v221 )
          sub_1C32E7C(0);
        v222 = System_Text_RegularExpressions_GroupCollection__get_Item(v221, 3, 0);
        v223 = v335;
        v224 = (System_String_o *)StringLiteral_16107/*"_"*/;
        if ( v222 )
          v223 = v222;
        v335 = v223;
        if ( v222 )
        {
          if ( !v223 )
            sub_1C32E7C(v222);
          v225 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v223->klass->vtable._3_ToString.methodPtr)(
                                      v223,
                                      v223->klass->vtable._3_ToString.method);
        }
        else
        {
          v225 = 0;
        }
        IsMatch_70053540 = System_String__Concat_63556792(v220, v224, v225, 0);
      }
      else
      {
        if ( !v216 )
          sub_1C32E7C(0);
        v227 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v216->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v216,
                                                                     v216->klass->vtable._5_get_Groups.method);
        if ( !v227 )
          sub_1C32E7C(0);
        v228 = System_Text_RegularExpressions_GroupCollection__get_Item(v227, 3, 0);
        if ( v228 )
          v55 = v228;
        v229 = (System_String_o *)StringLiteral_1151/*"0_"*/;
        if ( v228 )
        {
          if ( !v55 )
            sub_1C32E7C(v228);
          v230 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v55->klass->vtable._3_ToString.methodPtr)(
                                      v55,
                                      v55->klass->vtable._3_ToString.method);
        }
        else
        {
          v230 = 0;
        }
        v166 = v55;
        IsMatch_70053540 = System_String__Concat_63518544(v229, v230, 0);
      }
      soundId = IsMatch_70053540;
      v226 = 1;
    }
    else
    {
      v226 = 0;
    }
    audioType = v162->fields.audioType;
    if ( (unsigned int)(audioType - 2) < 2 )
    {
      if ( (v226 & 1) != 0 )
        goto LABEL_240;
      v232 = sub_1C32CC8(string___TypeInfo, 5);
      v235 = v232;
      if ( !v232 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v232 + 24) )
        sub_1C32E84(v232);
      v236 = StringLiteral_16938/*"audio type error : "*/;
      *(_QWORD *)(v232 + 32) = StringLiteral_16938/*"audio type error : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v232 + 32), v236, v233, v234);
      if ( *(_DWORD *)(v235 + 24) <= 1u )
        sub_1C32E84(v237);
      *(_QWORD *)(v235 + 40) = soundId;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 40), (int32_t)soundId, v238, v239);
      if ( *(_DWORD *)(v235 + 24) <= 2u )
        sub_1C32E84(v240);
      v243 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v235 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 48), v243, v241, v242);
      if ( *(_DWORD *)(v235 + 24) <= 3u )
        sub_1C32E84(v244);
      sequencePath_5__8 = v344->fields._sequencePath_5__8;
      *(_QWORD *)(v235 + 56) = sequencePath_5__8;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 56), (int32_t)sequencePath_5__8, v245, v246);
      if ( *(_DWORD *)(v235 + 24) <= 4u )
        sub_1C32E84(v248);
      goto LABEL_239;
    }
    if ( audioType == 1 && v226 )
    {
      v251 = sub_1C32CC8(string___TypeInfo, 5);
      v235 = v251;
      if ( !v251 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v251 + 24) )
        sub_1C32E84(v251);
      v254 = StringLiteral_16938/*"audio type error : "*/;
      *(_QWORD *)(v251 + 32) = StringLiteral_16938/*"audio type error : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v251 + 32), v254, v252, v253);
      if ( *(_DWORD *)(v235 + 24) <= 1u )
        sub_1C32E84(v255);
      *(_QWORD *)(v235 + 40) = soundId;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 40), (int32_t)soundId, v256, v257);
      if ( *(_DWORD *)(v235 + 24) <= 2u )
        sub_1C32E84(v258);
      v261 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v235 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 48), v261, v259, v260);
      if ( *(_DWORD *)(v235 + 24) <= 3u )
        sub_1C32E84(v262);
      v265 = v344->fields._sequencePath_5__8;
      *(_QWORD *)(v235 + 56) = v265;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 56), (int32_t)v265, v263, v264);
      if ( *(_DWORD *)(v235 + 24) <= 4u )
        sub_1C32E84(v266);
LABEL_239:
      v267 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v235 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v235 + 64), v267, v249, v250);
      v268 = System_String__Concat_63559060((System_String_array *)v235, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v268, 0);
    }
LABEL_240:
    _8__2 = v344->fields.__8__2;
    if ( !_8__2 )
      sub_1C32E7C(IsMatch_70053540);
    CS___8__locals1 = _8__2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_1C32E7C(IsMatch_70053540);
    voiceDataPath = (System_Collections_Generic_List_object__o *)CS___8__locals1->fields.voiceDataPath;
    if ( !voiceDataPath )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v338,
      voiceDataPath,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v341 = v338;
    do
    {
      v272 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v341,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v272 )
        break;
      current = v341.fields._current;
      v274 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v274 )
        sub_1C32E7C(0);
    }
    while ( !SoundManager__IsExistsSound((SoundManager_o *)v274, (System_String_o *)current, soundId, 0) );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v341,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v275 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v275 )
      sub_1C32E7C(0);
    this = (SoundCheckMenu__npCheck_d__20_o *)SoundManager__IsExistsSound(
                                                (SoundManager_o *)v275,
                                                (System_String_o *)StringLiteral_3084/*"Battle"*/,
                                                soundId,
                                                0);
    if ( ((v272 | (unsigned int)this) & 1) == 0 )
    {
      v287 = sub_1C32CC8(string___TypeInfo, 5);
      v290 = v287;
      if ( !v287 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v287 + 24) )
        sub_1C32E84(v287);
      v291 = StringLiteral_22290/*"not exist : "*/;
      *(_QWORD *)(v287 + 32) = StringLiteral_22290/*"not exist : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v287 + 32), v291, v288, v289);
      if ( *(_DWORD *)(v290 + 24) <= 1u )
        sub_1C32E84(v292);
      *(_QWORD *)(v290 + 40) = soundId;
      sub_1C32BC4((CGThumbnailListItem_o *)(v290 + 40), (int32_t)soundId, v293, v294);
      if ( *(_DWORD *)(v290 + 24) <= 2u )
        sub_1C32E84(v295);
      v298 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v290 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v290 + 48), v298, v296, v297);
      if ( *(_DWORD *)(v290 + 24) <= 3u )
        sub_1C32E84(v299);
      v302 = v344->fields._sequencePath_5__8;
      *(_QWORD *)(v290 + 56) = v302;
      sub_1C32BC4((CGThumbnailListItem_o *)(v290 + 56), (int32_t)v302, v300, v301);
      if ( *(_DWORD *)(v290 + 24) <= 4u )
        sub_1C32E84(v303);
      v306 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v290 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v290 + 64), v306, v304, v305);
      v307 = System_String__Concat_63559060((System_String_array *)v290, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v307, 0);
      v308 = v344;
      v344->fields.__2__current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v308->fields.__2__current, 0, v309, v310);
      v159 = v344;
      v160 = 3;
LABEL_147:
      v159->fields.__1__state = v160;
      return 1;
    }
    v4 = v344;
    v55 = v166;
  }
  p__7__wrap9->klass = 0;
  sub_1C32BC4(p__7__wrap9, 0, v2, v3);
  while ( 1 )
  {
    v280 = v344->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v280, 0);
    v282 = v344->fields.__8__2;
    if ( !v282 )
      sub_1C32E7C(v281);
    v283 = v282->fields.CS___8__locals1;
    if ( !v283 )
      sub_1C32E7C(v281);
    v284 = (System_Collections_Generic_List_object__o *)v283->fields.voiceDataPath;
    if ( !v284 )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v338,
      v284,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v341 = v338;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v341,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v285 = v341.fields._current;
      v286 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v286 )
        sub_1C32E7C(0);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v286, (System_String_o *)v285, 0);
    }
    v53 = v55;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v341,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !_4__this )
      sub_1C32E7C(v311);
    ++_4__this->fields.checkCnt;
    v314 = v344;
    v344->fields.__8__2 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v314->fields.__8__2, 0, v312, v313);
    v315 = v344;
    v344->fields._sequencePath_5__8 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v315->fields._sequencePath_5__8, 0, v316, v317);
    v318 = v344;
    v344->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v318->fields._svtLimitAddEntity_5__9, 0, v319, v320);
    v321 = v344;
    v344->fields._svtEntity_5__7 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v321->fields._svtEntity_5__7, 0, v322, v323);
    v4 = v344;
LABEL_334:
    v327 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap5,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    v328 = v344;
    if ( !v327 )
    {
      SoundCheckMenu__npCheck_d__20____m__Finally1(v344, v324);
      v331 = v344;
      v344->fields.__7__wrap5.fields._list = 0;
      *(_QWORD *)&v331->fields.__7__wrap5.fields._index = 0;
      v331->fields.__7__wrap5.fields._current = 0;
      if ( !_4__this )
        sub_1C32E7C(v331);
      _4__this->fields.nextCheck = 0;
      v331->fields.__2__current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v331->fields.__2__current, 0, v329, v330);
      v159 = v344;
      v160 = 4;
      goto LABEL_147;
    }
    v56 = v344->fields.__7__wrap5.fields._current;
    v344->fields._svtEntity_5__7 = v56;
    sub_1C32BC4((CGThumbnailListItem_o *)&v328->fields._svtEntity_5__7, (int32_t)v56, v325, v326);
    v57 = (Il2CppObject *)sub_1C32E6C(SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    System_Object___ctor(v57, 0);
    v58 = v344;
    v344->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass20_1_o *)v57;
    sub_1C32BC4((CGThumbnailListItem_o *)&v58->fields.__8__2, (int32_t)v57, v59, v60);
    v63 = v344->fields.__8__2;
    if ( !v63 )
      sub_1C32E7C(0);
    v64 = v344->fields.__8__1;
    v63->fields.CS___8__locals1 = v64;
    sub_1C32BC4((CGThumbnailListItem_o *)&v63->fields.CS___8__locals1, (int32_t)v64, v61, v62);
    v67 = v344->fields._svtEntity_5__7;
    if ( !v67 )
      sub_1C32E7C(v65);
    id = v67->fields.id;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v345.fields.currentCryptoKey = &id;
    *(_QWORD *)&v345.fields.fakeValue = 0;
    v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v345, v66);
    v69 = System_String__Concat_63518544((System_String_o *)StringLiteral_9516/*"NoblePhantasm/Sequence/"*/, v68, 0);
    v70 = v344;
    v344->fields._sequencePath_5__8 = v69;
    sub_1C32BC4((CGThumbnailListItem_o *)&v70->fields._sequencePath_5__8, (int32_t)v69, v71, v72);
    v73 = v344->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    isExistAssetStorage = AssetManager__isExistAssetStorage(v73, 0);
    if ( !isExistAssetStorage )
      break;
    v77 = v344;
    v344->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v77->fields._svtLimitAddEntity_5__9, 0, v75, v76);
    svtLimitAddEntitys_5__3 = v344->fields._svtLimitAddEntitys_5__3;
    if ( !svtLimitAddEntitys_5__3 )
      sub_1C32E7C(v78);
    v80 = svtLimitAddEntitys_5__3->max_length;
    if ( v80 >= 1 )
    {
      v81 = 0;
      while ( 1 )
      {
        if ( v81 >= v80 )
          sub_1C32E84(v78);
        v82 = svtLimitAddEntitys_5__3->m_Items[v81];
        if ( !v82 )
          sub_1C32E7C(v78);
        v83 = v344->fields._svtEntity_5__7;
        if ( !v83 )
          sub_1C32E7C(v78);
        svtId = v82->fields.svtId;
        v86 = *(_QWORD *)&v83->fields.id.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v83->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v346.fields.currentCryptoKey = v86;
        *(_QWORD *)&v346.fields.fakeValue = v85;
        v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v346, 0);
        if ( svtId == (_DWORD)v78 )
          break;
        v80 = svtLimitAddEntitys_5__3->max_length;
        if ( (int)++v81 >= v80 )
          goto LABEL_60;
      }
      v89 = v344;
      v344->fields._svtLimitAddEntity_5__9 = v82;
      sub_1C32BC4((CGThumbnailListItem_o *)&v89->fields._svtLimitAddEntity_5__9, (int32_t)v82, v87, v88);
    }
LABEL_60:
    v90 = v344->fields._svtEntity_5__7;
    if ( !v90 )
      sub_1C32E7C(v78);
    v91 = v344->fields._svtLimitAddMst_5__2;
    v93 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
    v92 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v347.fields.currentCryptoKey = v93;
    *(_QWORD *)&v347.fields.fakeValue = v92;
    v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v347, 0);
    if ( !v91 )
      sub_1C32E7C(v94);
    VoiceId = ServantLimitAddMaster__getVoiceId(v91, v94, 0, 0);
    v343 = VoiceId;
    v96 = v344->fields.__8__2;
    if ( !v96 )
      sub_1C32E7C(VoiceId);
    v97 = v96->fields.CS___8__locals1;
    if ( !v97 )
      sub_1C32E7C(VoiceId);
    v98 = v97->fields.voiceDataPath;
    if ( !v98 )
      sub_1C32E7C(VoiceId);
    v99 = v98->fields._size;
    v100 = v98->fields._version + 1;
    v98->fields._size = 0;
    v98->fields._version = v100;
    if ( v99 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v98->fields._items, 0, v99, 0);
      v96 = v344->fields.__8__2;
      if ( !v96 )
        sub_1C32E7C(VoiceId);
    }
    v101 = v96->fields.CS___8__locals1;
    if ( !v101 )
      sub_1C32E7C(VoiceId);
    v102 = (System_Collections_Generic_List_object__o *)v101->fields.voiceDataPath;
    v103 = System_Int32__ToString((int32_t)&v343, 0);
    v104 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_4424/*"ChrVoice_"*/, v103, 0);
    v107 = v104;
    if ( !v102 )
      sub_1C32E7C(v104);
    v108 = v102->fields._items;
    v109 = Method_System_Collections_Generic_List_string__Add__;
    ++v102->fields._version;
    if ( !v108 )
      sub_1C32E7C(v104);
    v110 = v102->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v102,
        v104,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v102->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v107;
      sub_1C32BC4((CGThumbnailListItem_o *)(v111 + 4), (int32_t)v107, v105, v106);
    }
    v113 = v344->fields.__8__2;
    if ( !v113 )
      sub_1C32E7C(v112);
    v114 = v113->fields.CS___8__locals1;
    if ( !v114 )
      sub_1C32E7C(v112);
    v115 = (System_Collections_Generic_List_object__o *)v114->fields.voiceDataPath;
    v116 = System_Int32__ToString((int32_t)&v343, 0);
    v117 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_12760/*"Servants_"*/, v116, 0);
    v120 = v117;
    if ( !v115 )
      sub_1C32E7C(v117);
    v121 = v115->fields._items;
    v122 = Method_System_Collections_Generic_List_string__Add__;
    ++v115->fields._version;
    if ( !v121 )
      sub_1C32E7C(v117);
    v123 = v115->fields._size;
    if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v115,
        v117,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
    }
    else
    {
      v124 = &v121->obj.klass + v123;
      v115->fields._size = v123 + 1;
      v124[4] = (Il2CppClass *)v120;
      sub_1C32BC4((CGThumbnailListItem_o *)(v124 + 4), (int32_t)v120, v118, v119);
    }
    v126 = v344->fields.__8__2;
    if ( !v126 )
      sub_1C32E7C(v125);
    v127 = v126->fields.CS___8__locals1;
    if ( !v127 )
      sub_1C32E7C(v125);
    v128 = (System_Collections_Generic_List_object__o *)v127->fields.voiceDataPath;
    v129 = System_Int32__ToString((int32_t)&v343, 0);
    v130 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_9518/*"NoblePhantasm_"*/, v129, 0);
    v133 = v130;
    if ( !v128 )
      sub_1C32E7C(v130);
    v134 = v128->fields._items;
    v135 = Method_System_Collections_Generic_List_string__Add__;
    ++v128->fields._version;
    if ( !v134 )
      sub_1C32E7C(v130);
    v136 = v128->fields._size;
    if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v128,
        v130,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
    }
    else
    {
      v137 = &v134->obj.klass + v136;
      v128->fields._size = v136 + 1;
      v137[4] = (Il2CppClass *)v133;
      sub_1C32BC4((CGThumbnailListItem_o *)(v137 + 4), (int32_t)v133, v131, v132);
    }
    v140 = v344->fields.__8__2;
    if ( !v140 )
      sub_1C32E7C(0);
    v140->fields.nobleSequenceData = 0;
    p_fields = &v140->fields;
    p_fields->isLoadEnd = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_fields, 0, v138, v139);
    v142 = v344->fields._sequencePath_5__8;
    v143 = (Il2CppObject *)v344->fields.__8__2;
    v144 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v144, v143, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (SoundCheckMenu__npCheck_d__20_o *)AssetManager__loadAssetStorage(v142, v144, 1, 0);
    v4 = v344;
LABEL_93:
    v145 = v4->fields.__8__2;
    if ( !v145 )
      sub_1C32E7C(this);
    if ( !v145->fields.isLoadEnd )
    {
      v4->fields.__2__current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
      v159 = v344;
      v160 = 2;
      goto LABEL_147;
    }
    nobleSequenceData = v145->fields.nobleSequenceData;
    if ( !nobleSequenceData )
      sub_1C32E7C(this);
    objectList = nobleSequenceData->fields.objectList;
    if ( !objectList )
      sub_1C32E7C(this);
    v148 = objectList->max_length;
    if ( v148 < 1 )
    {
LABEL_104:
      v151 = 0;
    }
    else
    {
      v149 = 0;
      while ( 1 )
      {
        if ( v149 >= v148 )
          sub_1C32E84(this);
        v150 = (__int64)objectList + 8 * (int)v149;
        v151 = *(UnityEngine_Object_o **)(v150 + 32);
        if ( !v151 )
          sub_1C32E7C(this);
        name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v150 + 32), 0);
        if ( !name )
          sub_1C32E7C(0);
        this = (SoundCheckMenu__npCheck_d__20_o *)System_String__Equals_63553848(
                                                    name,
                                                    (System_String_o *)StringLiteral_4422/*"ChrSequence1"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        v148 = objectList->max_length;
        if ( (int)++v149 >= v148 )
          goto LABEL_104;
      }
      if ( (UnityEngine_GameObject_c *)v151->klass != UnityEngine_GameObject_TypeInfo )
        v151 = 0;
    }
    v55 = v53;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v153 = UnityEngine_Object__op_Inequality(v151, 0, 0);
    if ( v153 )
    {
      if ( !v151 )
        sub_1C32E7C(v153);
      ComponentsInChildren_object__51598740 = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                (UnityEngine_GameObject_o *)v151,
                                                (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      v155 = v344;
      v344->fields.__7__wrap9 = (struct WellFired_USFGOPlayAudioEvent_array *)ComponentsInChildren_object__51598740;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&v155->fields.__7__wrap9,
        (int32_t)ComponentsInChildren_object__51598740,
        v156,
        v157);
      v4 = v344;
      v158 = 0;
      v344->fields.__7__wrap10 = 0;
      goto LABEL_300;
    }
  }
  if ( !_4__this )
    sub_1C32E7C(isExistAssetStorage);
  ++_4__this->fields.checkCnt;
  v161 = v344;
  v344->fields.__2__current = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v161->fields.__2__current, 0, v75, v76);
  result = 1;
  v344->fields.__1__state = 1;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SoundCheckMenu__npCheck_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  if ( (byte_4C35058 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4C35058 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
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
  const MethodInfo *v3; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v4; // x20
  SoundCheckMenu_o *_4__this; // x19
  Il2CppObject *v6; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x22
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x0
  System_Object_array *IsServant; // x0
  int max_length; // w8
  int i; // w23
  Il2CppClass **v31; // x8
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v40; // x22
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v44; // x9
  __int128 v45; // q0
  CGThumbnailListItem_o *p__7__wrap3; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v49; // x8
  int32_t _7__wrap12; // w8
  int v51; // w9
  CGThumbnailListItem_o *p__8__2; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  bool v62; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v63; // x0
  struct ServantEntity_o *current; // x1
  Il2CppObject *v65; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct SoundCheckMenu___c__DisplayClass22_1_o *_8__2; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *v72; // x1
  __int64 v73; // x0
  struct ServantEntity_o *svtEntity_5__5; // x9
  ServantVoiceMaster_o *svtVoiceMst_5__2; // x20
  __int64 v76; // x21
  __int64 v77; // x22
  __int64 v78; // x0
  struct ServantVoiceEntity_array *Entity_42714556; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x0
  struct ServantEntity_o *v84; // x8
  ServantLimitAddMaster_o *svtLimitAddMst_5__3; // x20
  __int64 v86; // x0
  __int64 VoiceId; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v88; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x9
  struct System_Collections_Generic_List_string__o *voiceDataPath; // x9
  int32_t v91; // w2
  int v92; // w10
  struct SoundCheckMenu___c__DisplayClass22_0_o *v93; // x8
  System_Collections_Generic_List_object__o *v94; // x20
  System_String_o *v95; // x1
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *v99; // x1
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v106; // x8
  bool result; // w0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v108; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v109; // x8
  System_Collections_Generic_List_object__o *v110; // x20
  System_String_o *v111; // x1
  Il2CppObject *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  Il2CppObject *v115; // x1
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  __int64 v120; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v121; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v122; // x8
  System_Collections_Generic_List_object__o *v123; // x20
  System_String_o *v124; // x1
  Il2CppObject *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  Il2CppObject *v128; // x1
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  __int64 v133; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v134; // x8
  Il2CppObject *v135; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v136; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v137; // x9
  int32_t DataCnt; // w1
  SoundManager_o *v139; // x20
  System_Collections_Generic_List_object__o *v140; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v142; // x23
  System_Action_o *v143; // x22
  __int64 v144; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v145; // x8
  struct ServantVoiceEntity_array *svtVoiceEntitys_5__6; // x1
  __int64 v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v150; // x8
  int v151; // w10
  struct ServantVoiceEntity_o *v152; // x1
  int32_t j; // w1
  ServantVoiceEntity_o *klass; // x0
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v156; // x9
  __int128 v157; // q0
  CGThumbnailListItem_o *p__7__wrap10; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v161; // x8
  struct ServantVoiceData_array *v162; // x1
  struct ServantVoiceData_array *_7__wrap11; // x10
  unsigned int v164; // w11
  const MethodInfo *v165; // x1
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  bool v168; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v169; // x0
  CGThumbnailListItem_o *p_svtVoiceEntity_5__9; // x0
  struct ServantVoiceEntity_array *_7__wrap6; // x11
  int v172; // w12
  __int64 v173; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v174; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v175; // x8
  System_Collections_Generic_List_object__o *v176; // x0
  Il2CppObject *v177; // x20
  Il2CppObject *v178; // x0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v179; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v180; // x8
  System_Collections_Generic_List_object__o *v181; // x0
  ServantVoiceData_o *v182; // x24
  _BOOL4 v183; // w20
  Il2CppObject *v184; // x21
  Il2CppObject *v185; // x0
  Il2CppObject *v186; // x0
  _BOOL8 IsExistsSound; // x0
  struct ServantEntity_o *v188; // x8
  _BOOL4 v189; // w21
  __int64 v190; // x22
  __int64 v191; // x23
  __int64 v192; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  __int64 v195; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  __int64 v198; // x20
  int32_t v199; // w1
  __int64 v200; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  struct System_String_o *id; // x1
  __int64 v204; // x0
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  int32_t v207; // w1
  __int64 v208; // x0
  const MethodInfo *v209; // x2
  struct ServantEntity_o *v210; // x8
  System_String_o *v211; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  __int64 v214; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  int32_t v217; // w1
  System_String_o *v218; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v219; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v220; // x8
  int v221; // w9
  __int64 v222; // x0
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v225; // x0
  System_Collections_Generic_List_Enumerator_object__o v226; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v227; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v228; // [xsp+40h] [xbp-90h]
  SoundCheckMenu__svtVoiceCheck_d__22_o **v229; // [xsp+48h] [xbp-88h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v231; // [xsp+60h] [xbp-70h] BYREF
  int v232; // [xsp+84h] [xbp-4Ch] BYREF
  SoundCheckMenu__svtVoiceCheck_d__22_o *v233; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16

  v4 = this;
  v233 = this;
  if ( (byte_4C35059 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C32C20(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
    sub_1C32C20(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__);
    sub_1C32C20(&SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_9518/*"NoblePhantasm_"*/);
    sub_1C32C20(&StringLiteral_22290/*"not exist : "*/);
    sub_1C32C20(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C32C20(&StringLiteral_4424/*"ChrVoice_"*/);
    sub_1C32C20(&StringLiteral_12760/*"Servants_"*/);
    this = (SoundCheckMenu__svtVoiceCheck_d__22_o *)sub_1C32C20(&StringLiteral_3084/*"Battle"*/);
    byte_4C35059 = 1;
  }
  v232 = 0;
  memset(&v231, 0, sizeof(v231));
  v230 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v228 = 0;
  v229 = &v233;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C32E6C(SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v7 = v233;
      v233->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass22_0_o *)v6;
      sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.__8__1, (int32_t)v6, v8, v9);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C32E7C(0);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v12 )
        sub_1C32E7C(0);
      v13 = DataManager__GetMasterData_object_(
              (DataManager_o *)v12,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      v14 = v233;
      v233->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)v13;
      sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields._svtVoiceMst_5__2, (int32_t)v13, v15, v16);
      v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v17 )
        sub_1C32E7C(0);
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)v17,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v19 = v233;
      v233->fields._svtLimitAddMst_5__3 = (struct ServantLimitAddMaster_o *)v18;
      sub_1C32BC4((CGThumbnailListItem_o *)&v19->fields._svtLimitAddMst_5__3, (int32_t)v18, v20, v21);
      v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v22 )
        sub_1C32E7C(0);
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)v22,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !MasterData_object )
        sub_1C32E7C(v23);
      v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)v23;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  (const MethodInfo_3395ABC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v26 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      if ( !v24 )
        sub_1C32E7C(v27);
      IsServant = DataMasterBase_object__object__object___getEntitys(
                    v24,
                    (const MethodInfo_339A574 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
      if ( !Entitys )
        sub_1C32E7C(IsServant);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C32E84(IsServant);
          v31 = &Entitys->obj.klass + i;
          v32 = (Il2CppObject *)v31[4];
          if ( !v32 )
            sub_1C32E7C(IsServant);
          IsServant = (System_Object_array *)ServantEntity__get_IsServant((ServantEntity_o *)v31[4], 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            if ( !v26 )
              sub_1C32E7C(IsServant);
            items = v26->fields._items;
            v36 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1C32E7C(IsServant);
            size = v26->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                v32,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v32;
              sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v26 )
        sub_1C32E7C(IsServant);
      if ( !_4__this )
        sub_1C32E7C(IsServant);
      _4__this->fields.checkMax = v26->fields._size;
      _8__1 = v233->fields.__8__1;
      v40 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v40,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C32E7C(v41);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v40;
      sub_1C32BC4((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v40, v42, v43);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v226,
        v26,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v44 = v233;
      v45 = *(_OWORD *)&v226.fields._list;
      p__7__wrap3 = (CGThumbnailListItem_o *)&v233->fields.__7__wrap3;
      v227 = v226;
      v233->fields.__7__wrap3.fields._current = (struct ServantEntity_o *)v226.fields._current;
      *(_OWORD *)&v44->fields.__7__wrap3.fields._list = v45;
      sub_1C32BC4(p__7__wrap3, 0, v47, v48);
      v49 = v233;
      v233->fields.__1__state = -3;
      goto LABEL_28;
    case 1:
      v4->fields.__1__state = -3;
      goto LABEL_70;
    case 2:
      _7__wrap12 = v4->fields.__7__wrap12;
      v4->fields.__1__state = -4;
      v51 = _7__wrap12 + 1;
      v4->fields.__7__wrap12 = _7__wrap12 + 1;
      goto LABEL_126;
    case 3:
      v4->fields.__8__2 = 0;
      p__8__2 = (CGThumbnailListItem_o *)&v4->fields.__8__2;
      LODWORD(p__8__2[-1].fields.viewObject) = -3;
      sub_1C32BC4(p__8__2, 0, v2, v3);
      v53 = v233;
      v233->fields._svtVoiceEntitys_5__6 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v53->fields._svtVoiceEntitys_5__6, 0, v54, v55);
      v56 = v233;
      v233->fields._svtEntity_5__5 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v56->fields._svtEntity_5__5, 0, v57, v58);
      v49 = v233;
LABEL_28:
      v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v49->fields.__7__wrap3,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
      v63 = v233;
      if ( v62 )
      {
        current = v233->fields.__7__wrap3.fields._current;
        v233->fields._svtEntity_5__5 = current;
        sub_1C32BC4((CGThumbnailListItem_o *)&v63->fields._svtEntity_5__5, (int32_t)current, v60, v61);
        v65 = (Il2CppObject *)sub_1C32E6C(SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
        System_Object___ctor(v65, 0);
        v66 = v233;
        v233->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass22_1_o *)v65;
        sub_1C32BC4((CGThumbnailListItem_o *)&v66->fields.__8__2, (int32_t)v65, v67, v68);
        _8__2 = v233->fields.__8__2;
        if ( !_8__2 )
          sub_1C32E7C(0);
        v72 = v233->fields.__8__1;
        _8__2->fields.CS___8__locals1 = v72;
        sub_1C32BC4((CGThumbnailListItem_o *)&_8__2->fields.CS___8__locals1, (int32_t)v72, v69, v70);
        svtEntity_5__5 = v233->fields._svtEntity_5__5;
        if ( !svtEntity_5__5 )
          sub_1C32E7C(v73);
        svtVoiceMst_5__2 = v233->fields._svtVoiceMst_5__2;
        v77 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.currentCryptoKey;
        v76 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v234.fields.currentCryptoKey = v77;
        *(_QWORD *)&v234.fields.fakeValue = v76;
        v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v234, 0);
        if ( !svtVoiceMst_5__2 )
          sub_1C32E7C(v78);
        Entity_42714556 = ServantVoiceMaster__getEntity_42714556(svtVoiceMst_5__2, v78, 0, 0);
        v80 = v233;
        v233->fields._svtVoiceEntitys_5__6 = Entity_42714556;
        sub_1C32BC4((CGThumbnailListItem_o *)&v80->fields._svtVoiceEntitys_5__6, (int32_t)Entity_42714556, v81, v82);
        v84 = v233->fields._svtEntity_5__5;
        if ( !v84 )
          sub_1C32E7C(v83);
        svtLimitAddMst_5__3 = v233->fields._svtLimitAddMst_5__3;
        v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v84->fields.id, 0);
        if ( !svtLimitAddMst_5__3 )
          sub_1C32E7C(v86);
        VoiceId = ServantLimitAddMaster__getVoiceId(svtLimitAddMst_5__3, v86, 0, 0);
        v232 = VoiceId;
        v88 = v233->fields.__8__2;
        if ( !v88 )
          sub_1C32E7C(VoiceId);
        CS___8__locals1 = v88->fields.CS___8__locals1;
        if ( !CS___8__locals1 )
          sub_1C32E7C(VoiceId);
        voiceDataPath = CS___8__locals1->fields.voiceDataPath;
        if ( !voiceDataPath )
          sub_1C32E7C(VoiceId);
        v91 = voiceDataPath->fields._size;
        v92 = voiceDataPath->fields._version + 1;
        voiceDataPath->fields._size = 0;
        voiceDataPath->fields._version = v92;
        if ( v91 >= 1 )
        {
          System_Array__Clear((System_Array_o *)voiceDataPath->fields._items, 0, v91, 0);
          v88 = v233->fields.__8__2;
          if ( !v88 )
            sub_1C32E7C(VoiceId);
        }
        v93 = v88->fields.CS___8__locals1;
        if ( !v93 )
          sub_1C32E7C(VoiceId);
        v94 = (System_Collections_Generic_List_object__o *)v93->fields.voiceDataPath;
        v95 = System_Int32__ToString((int32_t)&v232, 0);
        v96 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_4424/*"ChrVoice_"*/, v95, 0);
        v99 = v96;
        if ( !v94 )
          sub_1C32E7C(v96);
        v100 = v94->fields._items;
        v101 = Method_System_Collections_Generic_List_string__Add__;
        ++v94->fields._version;
        if ( !v100 )
          sub_1C32E7C(v96);
        v102 = v94->fields._size;
        if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            v96,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &v100->obj.klass + v102;
          v94->fields._size = v102 + 1;
          v103[4] = (Il2CppClass *)v99;
          sub_1C32BC4((CGThumbnailListItem_o *)(v103 + 4), (int32_t)v99, v97, v98);
        }
        v108 = v233->fields.__8__2;
        if ( !v108 )
          sub_1C32E7C(v104);
        v109 = v108->fields.CS___8__locals1;
        if ( !v109 )
          sub_1C32E7C(v104);
        v110 = (System_Collections_Generic_List_object__o *)v109->fields.voiceDataPath;
        v111 = System_Int32__ToString((int32_t)&v232, 0);
        v112 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_12760/*"Servants_"*/, v111, 0);
        v115 = v112;
        if ( !v110 )
          sub_1C32E7C(v112);
        v116 = v110->fields._items;
        v117 = Method_System_Collections_Generic_List_string__Add__;
        ++v110->fields._version;
        if ( !v116 )
          sub_1C32E7C(v112);
        v118 = v110->fields._size;
        if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v110,
            v112,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
        }
        else
        {
          v119 = &v116->obj.klass + v118;
          v110->fields._size = v118 + 1;
          v119[4] = (Il2CppClass *)v115;
          sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 4), (int32_t)v115, v113, v114);
        }
        v121 = v233->fields.__8__2;
        if ( !v121 )
          sub_1C32E7C(v120);
        v122 = v121->fields.CS___8__locals1;
        if ( !v122 )
          sub_1C32E7C(v120);
        v123 = (System_Collections_Generic_List_object__o *)v122->fields.voiceDataPath;
        v124 = System_Int32__ToString((int32_t)&v232, 0);
        v125 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_9518/*"NoblePhantasm_"*/, v124, 0);
        v128 = v125;
        if ( !v123 )
          sub_1C32E7C(v125);
        v129 = v123->fields._items;
        v130 = Method_System_Collections_Generic_List_string__Add__;
        ++v123->fields._version;
        if ( !v129 )
          sub_1C32E7C(v125);
        v131 = v123->fields._size;
        if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v123,
            v125,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = &v129->obj.klass + v131;
          v123->fields._size = v131 + 1;
          v132[4] = (Il2CppClass *)v128;
          sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 4), (int32_t)v128, v126, v127);
        }
        v134 = v233->fields.__8__2;
        if ( !v134 )
          sub_1C32E7C(v133);
        v134->fields.DataCnt = 0;
        v134->fields.isLoadEnd = 0;
        v135 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v136 = v233->fields.__8__2;
        if ( !v136 )
          sub_1C32E7C(v135);
        v137 = v136->fields.CS___8__locals1;
        if ( !v137 )
          sub_1C32E7C(v135);
        DataCnt = v136->fields.DataCnt;
        v139 = (SoundManager_o *)v135;
        v140 = (System_Collections_Generic_List_object__o *)v137->fields.voiceDataPath;
        v136->fields.DataCnt = DataCnt + 1;
        if ( !v140 )
          sub_1C32E7C(0);
        Item = System_Collections_Generic_List_object___get_Item(
                 v140,
                 DataCnt,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        v142 = (Il2CppObject *)v233->fields.__8__2;
        v143 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v143, v142, Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__, 0);
        if ( !v139 )
          sub_1C32E7C(v144);
        SoundManager__LoadAudioAssetStorage(v139, (System_String_o *)Item, v143, 1, 0);
        v4 = v233;
LABEL_70:
        v145 = v4->fields.__8__2;
        if ( !v145 )
          sub_1C32E7C(this);
        if ( !v145->fields.isLoadEnd )
        {
          v4->fields.__2__current = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
          result = 1;
          v233->fields.__1__state = 1;
          return result;
        }
        svtVoiceEntitys_5__6 = v4->fields._svtVoiceEntitys_5__6;
        v4->fields.__7__wrap6 = svtVoiceEntitys_5__6;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, (int32_t)svtVoiceEntitys_5__6, v2, v3);
        v150 = v233;
        v151 = 0;
        v233->fields.__7__wrap7 = 0;
        while ( 1 )
        {
          _7__wrap6 = v150->fields.__7__wrap6;
          if ( !_7__wrap6 )
            sub_1C32E7C(v147);
          v172 = _7__wrap6->max_length;
          if ( v151 >= v172 )
            break;
          if ( v151 >= (unsigned int)v172 )
            sub_1C32E84(v147);
          v152 = _7__wrap6->m_Items[v151];
          v150->fields._svtVoiceEntity_5__9 = v152;
          sub_1C32BC4((CGThumbnailListItem_o *)&v150->fields._svtVoiceEntity_5__9, (int32_t)v152, v148, v149);
          v150 = v233;
          if ( v233->fields._svtVoiceEntity_5__9 )
          {
            for ( j = 1; ; j = v150->fields._ii_5__10 + 1 )
            {
              p_svtVoiceEntity_5__9 = (CGThumbnailListItem_o *)&v150->fields._svtVoiceEntity_5__9;
              v150->fields._ii_5__10 = j;
              if ( j >= 25 )
                break;
              klass = (ServantVoiceEntity_o *)p_svtVoiceEntity_5__9->klass;
              if ( !klass )
                sub_1C32E7C(0);
              VoiceList = ServantVoiceEntity__getVoiceList(klass, j, 0);
              if ( VoiceList )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v226,
                  (System_Collections_Generic_List_object__o *)VoiceList,
                  (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
                v156 = v233;
                v157 = *(_OWORD *)&v226.fields._list;
                p__7__wrap10 = (CGThumbnailListItem_o *)&v233->fields.__7__wrap10;
                v227 = v226;
                v233->fields.__7__wrap10.fields._current = (struct ServantVoiceData_array *)v226.fields._current;
                *(_OWORD *)&v156->fields.__7__wrap10.fields._list = v157;
                sub_1C32BC4(p__7__wrap10, 0, v159, v160);
                v161 = v233;
                v233->fields.__1__state = -4;
                while ( 1 )
                {
                  v168 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           (System_Collections_Generic_List_Enumerator_object__o *)&v161->fields.__7__wrap10,
                           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
                  v169 = v233;
                  if ( !v168 )
                    break;
                  v162 = v233->fields.__7__wrap10.fields._current;
                  v233->fields.__7__wrap11 = v162;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v169->fields.__7__wrap11, (int32_t)v162, v166, v167);
                  v4 = v233;
                  v51 = 0;
                  v233->fields.__7__wrap12 = 0;
LABEL_126:
                  _7__wrap11 = v4->fields.__7__wrap11;
                  if ( !_7__wrap11 )
                    sub_1C32E7C(this);
                  v164 = _7__wrap11->max_length;
                  if ( v51 < (int)v164 )
                  {
                    if ( v51 >= v164 )
                      sub_1C32E84(this);
                    v179 = v4->fields.__8__2;
                    if ( !v179 )
                      sub_1C32E7C(this);
                    v180 = v179->fields.CS___8__locals1;
                    if ( !v180 )
                      sub_1C32E7C(this);
                    v181 = (System_Collections_Generic_List_object__o *)v180->fields.voiceDataPath;
                    if ( !v181 )
                      sub_1C32E7C(0);
                    v182 = _7__wrap11->m_Items[v51];
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v227,
                      v181,
                      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
                    v231 = v227;
                    do
                    {
                      v183 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v231,
                               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
                      if ( !v183 )
                        break;
                      v184 = v231.fields._current;
                      v185 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                      if ( !v182 )
                        sub_1C32E7C(v185);
                      if ( !v185 )
                        sub_1C32E7C(0);
                    }
                    while ( !SoundManager__IsExistsSound(
                               (SoundManager_o *)v185,
                               (System_String_o *)v184,
                               v182->fields.id,
                               0) );
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v231,
                      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
                    v186 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                    if ( !v182 )
                      sub_1C32E7C(v186);
                    if ( !v186 )
                      sub_1C32E7C(0);
                    IsExistsSound = SoundManager__IsExistsSound(
                                      (SoundManager_o *)v186,
                                      (System_String_o *)StringLiteral_3084/*"Battle"*/,
                                      v182->fields.id,
                                      0);
                    v188 = v233->fields._svtEntity_5__5;
                    if ( !v188 )
                      sub_1C32E7C(IsExistsSound);
                    v189 = IsExistsSound;
                    v191 = *(_QWORD *)&v188->fields.id.fields.currentCryptoKey;
                    v190 = *(_QWORD *)&v188->fields.id.fields.fakeValue;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v235.fields.currentCryptoKey = v191;
                    *(_QWORD *)&v235.fields.fakeValue = v190;
                    v192 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v235, 0);
                    if ( !_4__this )
                      sub_1C32E7C(v192);
                    if ( (((v183 || v189) | SoundCheckMenu__isExceptionCheck(_4__this, v192, v182->fields.id, 0)) & 1) == 0 )
                    {
                      v195 = sub_1C32CC8(string___TypeInfo, 5);
                      v198 = v195;
                      if ( !v195 )
                        sub_1C32E7C(0);
                      if ( !*(_DWORD *)(v195 + 24) )
                        sub_1C32E84(v195);
                      v199 = StringLiteral_22290/*"not exist : "*/;
                      *(_QWORD *)(v195 + 32) = StringLiteral_22290/*"not exist : "*/;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v195 + 32), v199, v196, v197);
                      if ( *(_DWORD *)(v198 + 24) <= 1u )
                        sub_1C32E84(v200);
                      id = v182->fields.id;
                      *(_QWORD *)(v198 + 40) = id;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v198 + 40), (int32_t)id, v201, v202);
                      if ( *(_DWORD *)(v198 + 24) <= 2u )
                        sub_1C32E84(v204);
                      v207 = StringLiteral_80/*"\ntarget : "*/;
                      *(_QWORD *)(v198 + 48) = StringLiteral_80/*"\ntarget : "*/;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v198 + 48), v207, v205, v206);
                      v210 = v233->fields._svtEntity_5__5;
                      if ( !v210 )
                        sub_1C32E7C(v208);
                      v230 = v210->fields.id;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v236.fields.currentCryptoKey = &v230;
                      *(_QWORD *)&v236.fields.fakeValue = 0;
                      v211 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v236, v209);
                      if ( *(_DWORD *)(v198 + 24) <= 3u )
                        sub_1C32E84(v211);
                      *(_QWORD *)(v198 + 56) = v211;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v198 + 56), (int32_t)v211, v212, v213);
                      if ( *(_DWORD *)(v198 + 24) <= 4u )
                        sub_1C32E84(v214);
                      v217 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v198 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v198 + 64), v217, v215, v216);
                      v218 = System_String__Concat_63559060((System_String_array *)v198, 0);
                      SoundCheckMenu__ErrorOutput(_4__this, v218, 0);
                    }
                    v219 = v233;
                    v233->fields.__2__current = 0;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v219->fields.__2__current, 0, v193, v194);
                    v220 = v233;
                    v221 = 2;
                    goto LABEL_173;
                  }
                  v4->fields.__7__wrap11 = 0;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__7__wrap11, 0, v2, v3);
                  v161 = v233;
                }
                SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(v233, v165);
                v150 = v233;
                v233->fields.__7__wrap10.fields._list = 0;
                *(_QWORD *)&v150->fields.__7__wrap10.fields._index = 0;
                v150->fields.__7__wrap10.fields._current = 0;
              }
              else
              {
                v150 = v233;
              }
            }
            p_svtVoiceEntity_5__9->klass = 0;
            sub_1C32BC4(p_svtVoiceEntity_5__9, 0, v148, v149);
            v150 = v233;
          }
          v151 = v150->fields.__7__wrap7 + 1;
          v150->fields.__7__wrap7 = v151;
        }
        v150->fields.__7__wrap6 = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v150->fields.__7__wrap6, 0, v148, v149);
        v174 = v233->fields.__8__2;
        if ( !v174 )
          sub_1C32E7C(v173);
        v175 = v174->fields.CS___8__locals1;
        if ( !v175 )
          sub_1C32E7C(v173);
        v176 = (System_Collections_Generic_List_object__o *)v175->fields.voiceDataPath;
        if ( !v176 )
          sub_1C32E7C(0);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v227,
          v176,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v231 = v227;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v231,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          v177 = v231.fields._current;
          v178 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( !v178 )
            sub_1C32E7C(0);
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v178, (System_String_o *)v177, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v231,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( !_4__this )
          sub_1C32E7C(v222);
        ++_4__this->fields.checkCnt;
        v225 = v233;
        v233->fields.__2__current = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v225->fields.__2__current, 0, v223, v224);
        v220 = v233;
        v221 = 3;
LABEL_173:
        v220->fields.__1__state = v221;
        return 1;
      }
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(v233, v59);
      v106 = v233;
      v233->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v106->fields.__7__wrap3.fields._index = 0;
      v106->fields.__7__wrap3.fields._current = 0;
      if ( !_4__this )
        sub_1C32E7C(v105);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SoundCheckMenu__svtVoiceCheck_d__22_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  if ( (byte_4C3505A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4C3505A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3505B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    byte_4C3505B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}