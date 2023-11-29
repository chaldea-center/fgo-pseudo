void __fastcall ClassButtonControlComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x2
  System_Array_o *v17; // x19
  struct ClassButtonControlComponent_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x2
  System_Array_o *v26; // x19
  struct ClassButtonControlComponent_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x2
  System_Array_o *v35; // x19
  struct ClassButtonControlComponent_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_RuntimeFieldHandle_o v43; // 0:w1.4
  System_RuntimeFieldHandle_o v44; // 0:w1.4
  System_RuntimeFieldHandle_o v45; // 0:w1.4
  System_RuntimeFieldHandle_o v46; // 0:w1.4

  if ( (byte_40FBA35 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4,
      v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5,
      v6);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5,
      v7);
    byte_40FBA35 = 1;
  }
  v8 = (System_Array_o *)sub_B17014(int___TypeInfo, 10LL, v2);
  v43.fields.value = Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v8, v43, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassButtonControlComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B16F98(static_fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v17 = (System_Array_o *)sub_B17014(int___TypeInfo, 9LL, v16);
  v44.fields.value = Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v17, v44, 0LL);
  v18 = ClassButtonControlComponent_TypeInfo->static_fields;
  v18->mstClassIdTableNoMixIcon = (struct System_Int32_array *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->mstClassIdTableNoMixIcon,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v26 = (System_Array_o *)sub_B17014(int___TypeInfo, 10LL, v25);
  v45.fields.value = Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v26, v45, 0LL);
  v27 = ClassButtonControlComponent_TypeInfo->static_fields;
  v27->supportGroupTypeTableHaveMixIcon = (struct System_Int32_array *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v27->supportGroupTypeTableHaveMixIcon,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v35 = (System_Array_o *)sub_B17014(int___TypeInfo, 9LL, v34);
  v46.fields.value = Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v35, v46, 0LL);
  v36 = ClassButtonControlComponent_TypeInfo->static_fields;
  v36->supportGroupTypeTableNoMixIcon = (struct System_Int32_array *)v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->supportGroupTypeTableNoMixIcon,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void __fastcall ClassButtonControlComponent___ctor(ClassButtonControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ClassButtonControlComponent__IsMixSupportGroupType(int32_t classPos, const MethodInfo *method)
{
  return classPos == 9;
}


void __fastcall ClassButtonControlComponent__OnRotatetCursor(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentCursor; // w8
  int32_t v4; // w11
  int32_t v5; // w8
  int32_t v6; // w1

  if ( this->fields.updateEnable )
  {
    currentCursor = this->fields.currentCursor;
    if ( currentCursor + 1 < 10 )
      v4 = currentCursor + 1;
    else
      v4 = 0;
    if ( currentCursor + 1 < 9 )
      v5 = currentCursor + 1;
    else
      v5 = 0;
    if ( this->fields.haveMixIcon )
      v6 = v4;
    else
      v6 = v5;
    ClassButtonControlComponent__setCursor(this, v6, v2);
  }
}


void __fastcall ClassButtonControlComponent__OnSelectButton(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  if ( this->fields.updateEnable )
    ClassButtonControlComponent__setCursor(this, classPos, method);
}


void __fastcall ClassButtonControlComponent__add_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ClassButtonControlComponent_o *v11; // x0
  ClassButtonControlComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FBA31 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_40FBA31 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassButtonControlComponent_o *)sub_B173C8(v8);
  ClassButtonControlComponent__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ClassButtonControlComponent__getChangeCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.oldCursor == this->fields.currentCursor )
    return -1;
  else
    return this->fields.currentCursor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassButtonControlComponent__getIconCursorPos(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassButtonControlComponent_c *v6; // x0
  System_Int32_array **p_supportGroupTypeTableHaveMixIcon; // x8
  int32_t v8; // w0

  if ( (byte_40FBA34 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&classPos);
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, v5);
    byte_40FBA34 = 1;
  }
  v6 = ClassButtonControlComponent_TypeInfo;
  if ( this->fields.haveMixIcon )
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v6 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v6->static_fields->supportGroupTypeTableHaveMixIcon;
  }
  else
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v6 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v6->static_fields->supportGroupTypeTableNoMixIcon;
  }
  v8 = System_Array__IndexOf_int_(
         *p_supportGroupTypeTableHaveMixIcon,
         classPos,
         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  return v8 & ~(v8 >> 31);
}


int32_t __fastcall ClassButtonControlComponent__get_GetCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCursor;
}


void __fastcall ClassButtonControlComponent__init(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *callback,
        int32_t questId,
        int32_t questPhase,
        bool defaultPos,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct ClassButtonComponent_array *classButton; // x8
  WebViewManager_o *Instance; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int32_t currentCursor; // w8
  __int64 v28; // x1
  __int64 v29; // x2
  struct ClassButtonComponent_array *v30; // x8
  il2cpp_array_size_t v31; // w26
  __int64 v32; // x27
  void *Entity; // x0
  struct ClassButtonControlComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixIcon; // x9
  struct System_Int32_array *v36; // x9
  struct System_Int32_array *mstClassIdTableHaveMixIcon; // x8
  int32_t v38; // w20
  int32_t *v39; // x8
  struct ClassButtonControlComponent_StaticFields *v40; // x8
  struct System_Int32_array *supportGroupTypeTableNoMixIcon; // x9
  struct System_Int32_array *mstClassIdTableNoMixIcon; // x9
  struct System_Int32_array *v43; // x9
  struct System_Int32_array *v44; // x8
  struct UISprite_array *classCursor; // x8
  _DWORD *v46; // x23
  UnityEngine_Component_o *v47; // x0
  int32_t v48; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantClassCompatibilityIconComponent_array *classCompatibilityIcon; // x8
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *v52; // x24
  WebViewManager_o *v53; // x0
  QuestPhaseMaster_o *v54; // x0
  struct ServantClassCompatibilityIconComponent_array *v55; // x8
  ServantClassCompatibilityIconComponent_o *v56; // x8
  struct ClassButtonComponent_array *v57; // x8
  UnityEngine_Component_o *v58; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v60; // x24
  int32_t v61; // w23
  __int64 v62; // x3
  __int64 v63; // x4
  struct ClassButtonComponent_array *v64; // x8
  ClassButtonComponent_o *v65; // x23
  ClassButtonComponent_CallbackFunc_o *v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_40FBA33 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, callback);
    sub_B16FFC(&ClassButtonComponent_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_ClassButtonControlComponent_OnSelectButton__, v10);
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FBA33 = 1;
  }
  classButton = this->fields.classButton;
  if ( classButton )
    LOBYTE(classButton) = classButton->max_length == 10;
  this->fields.haveMixIcon = (char)classButton;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( defaultPos )
  {
    currentCursor = 0;
    this->fields.currentCursor = 0;
  }
  else
  {
    currentCursor = this->fields.currentCursor;
  }
  this->fields.callbackFunc = callback;
  this->fields.oldCursor = currentCursor;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v30 = this->fields.classButton;
  this->fields.updateEnable = 1;
  if ( !v30 )
LABEL_85:
    sub_B170D4();
  v31 = 0;
  v32 = 32LL;
  while ( (signed int)v31 < (signed int)v30->max_length )
  {
    Entity = ClassButtonControlComponent_TypeInfo;
    if ( this->fields.haveMixIcon )
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Entity = ClassButtonControlComponent_TypeInfo;
      }
      static_fields = (struct ClassButtonControlComponent_StaticFields *)*((_QWORD *)Entity + 23);
      supportGroupTypeTableHaveMixIcon = static_fields->supportGroupTypeTableHaveMixIcon;
      if ( !supportGroupTypeTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v31 >= (signed int)supportGroupTypeTableHaveMixIcon->max_length )
        return;
      if ( (*((_BYTE *)Entity + 307) & 4) != 0 && !*((_DWORD *)Entity + 56) )
      {
        j_il2cpp_runtime_class_init_0(Entity);
        Entity = ClassButtonControlComponent_TypeInfo;
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      if ( !static_fields->mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v31 >= (signed int)static_fields->mstClassIdTableHaveMixIcon->max_length )
        return;
      if ( (*((_BYTE *)Entity + 307) & 4) != 0 && !*((_DWORD *)Entity + 56) )
      {
        j_il2cpp_runtime_class_init_0(Entity);
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v36 = static_fields->supportGroupTypeTableHaveMixIcon;
      if ( !v36 )
        goto LABEL_85;
      if ( v31 >= v36->max_length )
        goto LABEL_87;
      mstClassIdTableHaveMixIcon = static_fields->mstClassIdTableHaveMixIcon;
      if ( !mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( v31 >= mstClassIdTableHaveMixIcon->max_length )
        goto LABEL_87;
      v38 = v36->m_Items[v31 + 1];
      v39 = &mstClassIdTableHaveMixIcon->m_Items[v31 + 1];
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    else
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Entity = ClassButtonControlComponent_TypeInfo;
      }
      v40 = (struct ClassButtonControlComponent_StaticFields *)*((_QWORD *)Entity + 23);
      supportGroupTypeTableNoMixIcon = v40->supportGroupTypeTableNoMixIcon;
      if ( !supportGroupTypeTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v31 >= (signed int)supportGroupTypeTableNoMixIcon->max_length )
        return;
      if ( (*((_BYTE *)Entity + 307) & 4) != 0 && !*((_DWORD *)Entity + 56) )
      {
        j_il2cpp_runtime_class_init_0(Entity);
        Entity = ClassButtonControlComponent_TypeInfo;
        v40 = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      mstClassIdTableNoMixIcon = v40->mstClassIdTableNoMixIcon;
      if ( !mstClassIdTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v31 >= (signed int)mstClassIdTableNoMixIcon->max_length )
        return;
      if ( (*((_BYTE *)Entity + 307) & 4) != 0 && !*((_DWORD *)Entity + 56) )
      {
        j_il2cpp_runtime_class_init_0(Entity);
        v40 = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v43 = v40->supportGroupTypeTableNoMixIcon;
      if ( !v43 )
        goto LABEL_85;
      if ( v31 >= v43->max_length )
        goto LABEL_87;
      v44 = v40->mstClassIdTableNoMixIcon;
      if ( !v44 )
        goto LABEL_85;
      if ( v31 >= v44->max_length )
        goto LABEL_87;
      v38 = *(_DWORD *)((char *)&v43->obj.klass + v32);
      v39 = (int32_t *)((char *)v44 + v32);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *v39,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_85;
    if ( v31 >= classCursor->max_length )
    {
LABEL_87:
      sub_B17100(Entity, v28, v29);
      sub_B170A0();
    }
    v46 = Entity;
    v47 = (UnityEngine_Component_o *)classCursor->m_Items[v31];
    if ( !v47 )
      goto LABEL_85;
    v48 = this->fields.currentCursor;
    gameObject = UnityEngine_Component__get_gameObject(v47, 0LL);
    if ( !gameObject )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive(gameObject, v38 == v48, 0LL);
    classCompatibilityIcon = this->fields.classCompatibilityIcon;
    if ( classCompatibilityIcon )
    {
      max_length = classCompatibilityIcon->max_length;
      if ( (int)v31 < (int)max_length )
      {
        if ( v31 >= max_length )
          goto LABEL_87;
        v52 = (UnityEngine_Object_o *)classCompatibilityIcon->m_Items[v31];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Entity = (void *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
        if ( ((unsigned __int8)Entity & 1) != 0 )
        {
          if ( questId == 0 || questPhase == 0 )
          {
            Entity = 0LL;
          }
          else
          {
            v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v53 )
              goto LABEL_85;
            v54 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v53,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !v54 )
              goto LABEL_85;
            Entity = QuestPhaseMaster__GetEntity(v54, questId, questPhase, 0LL);
          }
          v55 = this->fields.classCompatibilityIcon;
          if ( !v55 )
            goto LABEL_85;
          if ( v31 >= v55->max_length )
            goto LABEL_87;
          v56 = v55->m_Items[v31];
          if ( Entity )
          {
            if ( !v46 || !v56 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__SetIcon(v56, v46[4], *((System_Int32_array **)Entity + 6), 3, 0LL);
          }
          else
          {
            if ( !v56 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__Clear(v56, 0LL);
          }
        }
      }
    }
    v57 = this->fields.classButton;
    if ( !v57 )
      goto LABEL_85;
    if ( v31 >= v57->max_length )
      goto LABEL_87;
    v58 = (UnityEngine_Component_o *)v57->m_Items[v31];
    if ( v58 )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v58,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( v46 )
      {
        v60 = (UISprite_o *)Component_WebViewObject;
        v61 = v46[11];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Entity = (void *)AtlasManager__SetClassIcon(v60, v61, 2, 0LL);
        v64 = this->fields.classButton;
        if ( v64 )
        {
          if ( v31 >= v64->max_length )
            goto LABEL_87;
          v65 = v64->m_Items[v31];
          v66 = (ClassButtonComponent_CallbackFunc_o *)sub_B170CC(
                                                         ClassButtonComponent_CallbackFunc_TypeInfo,
                                                         v28,
                                                         v29,
                                                         v62,
                                                         v63);
          ClassButtonComponent_CallbackFunc___ctor(
            v66,
            (Il2CppObject *)this,
            Method_ClassButtonControlComponent_OnSelectButton__,
            0LL);
          if ( v65 )
          {
            v65->fields.callbackFunc = v66;
            v65->fields.classPos = v38;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v65->fields.callbackFunc,
              (System_Int32_array **)v66,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
            v30 = this->fields.classButton;
            ++v31;
            v32 += 4LL;
            if ( v30 )
              continue;
          }
        }
      }
    }
    goto LABEL_85;
  }
}


void __fastcall ClassButtonControlComponent__remove_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  int32_t v11; // w0
  const MethodInfo *v12; // x1

  if ( (byte_40FBA32 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_40FBA32 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = sub_B173C8(v8);
  ClassButtonControlComponent__IsMixSupportGroupType(v11, v12);
}


void __fastcall ClassButtonControlComponent__setCursor(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t currentCursor; // w8
  int32_t IconCursorPos; // w22
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UISprite_array *classCursor; // x8
  il2cpp_array_size_t v12; // w21
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v15; // x8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // x0

  currentCursor = this->fields.currentCursor;
  if ( currentCursor != classPos )
  {
    this->fields.currentCursor = classPos;
    this->fields.oldCursor = currentCursor;
    IconCursorPos = ClassButtonControlComponent__getIconCursorPos(this, classPos, method);
    v8 = ClassButtonControlComponent__getIconCursorPos(this, this->fields.oldCursor, v7);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_13;
    if ( IconCursorPos < classCursor->max_length )
    {
      v12 = v8;
      v13 = (UnityEngine_Component_o *)classCursor->m_Items[IconCursorPos];
      if ( !v13 )
        goto LABEL_13;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v15 = this->fields.classCursor;
      if ( !v15 )
        goto LABEL_13;
      if ( v12 < v15->max_length )
      {
        v16 = (UnityEngine_Component_o *)v15->m_Items[v12];
        if ( v16 )
        {
          v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
          if ( v17 )
          {
            UnityEngine_GameObject__SetActive(v17, 0, 0LL);
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
              ClassButtonControlComponent_CallbackFunc__Invoke(callbackFunc, classPos, 0LL);
            return;
          }
        }
LABEL_13:
        sub_B170D4();
      }
    }
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
}


void __fastcall ClassButtonControlComponent__setUpdateEnable(
        ClassButtonControlComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.updateEnable = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent_CallbackFunc___ctor(
        ClassButtonControlComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassButtonControlComponent_CallbackFunc__BeginInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = classPos;
  if ( (byte_40F70F9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&classPos);
    byte_40F70F9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__EndInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent_CallbackFunc__Invoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ClassButtonControlComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ClassButtonControlComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ClassButtonControlComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ClassButtonControlComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&classPos, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)classPos, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)classPos, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)classPos, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)classPos,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)classPos, v20);
    goto LABEL_37;
  }
}