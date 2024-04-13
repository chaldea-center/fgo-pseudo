void __fastcall ClassButtonControlComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Array_o *v19; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Array_o *v27; // x19
  struct ClassButtonControlComponent_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Array_o *v35; // x19
  struct ClassButtonControlComponent_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Array_o *v43; // x19
  struct ClassButtonControlComponent_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_RuntimeFieldHandle_o v51; // 0:w1.4
  System_RuntimeFieldHandle_o v52; // 0:w1.4
  System_RuntimeFieldHandle_o v53; // 0:w1.4
  System_RuntimeFieldHandle_o v54; // 0:w1.4

  if ( (byte_42EA8D3 & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5,
      v16,
      v17,
      v18);
    byte_42EA8D3 = 1;
  }
  v19 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 10LL);
  v51.fields.value = Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v19, v51, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassButtonControlComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v19;
  sub_B5D560(static_fields, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 9LL);
  v52.fields.value = Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v27, v52, 0LL);
  v28 = ClassButtonControlComponent_TypeInfo->static_fields;
  v28->mstClassIdTableNoMixIcon = (struct System_Int32_array *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->mstClassIdTableNoMixIcon,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 10LL);
  v53.fields.value = Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v35, v53, 0LL);
  v36 = ClassButtonControlComponent_TypeInfo->static_fields;
  v36->supportGroupTypeTableHaveMixIcon = (struct System_Int32_array *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v36->supportGroupTypeTableHaveMixIcon,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 9LL);
  v54.fields.value = Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v43, v54, 0LL);
  v44 = ClassButtonControlComponent_TypeInfo->static_fields;
  v44->supportGroupTypeTableNoMixIcon = (struct System_Int32_array *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v44->supportGroupTypeTableNoMixIcon,
    (System_Int32_array **)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
  __int64 v3; // x3
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ClassButtonControlComponent_o *v12; // x0
  ClassButtonControlComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA8CF & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA8CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v9->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ClassButtonControlComponent_o *)sub_B5D990(v9);
  ClassButtonControlComponent__remove_callbackFunc(v12, v13, v14);
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


int32_t __fastcall ClassButtonControlComponent__getIconCursorPos(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ClassButtonControlComponent_c *v9; // x0
  System_Int32_array **p_supportGroupTypeTableHaveMixIcon; // x8
  int32_t v11; // w0

  if ( (byte_42EA8D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, classPos, (_DWORD)method, v3);
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, v6, v7, v8);
    byte_42EA8D2 = 1;
  }
  v9 = ClassButtonControlComponent_TypeInfo;
  if ( this->fields.haveMixIcon )
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v9 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v9->static_fields->supportGroupTypeTableHaveMixIcon;
  }
  else
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v9 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v9->static_fields->supportGroupTypeTableNoMixIcon;
  }
  v11 = System_Array__IndexOf_int_(
          *p_supportGroupTypeTableHaveMixIcon,
          classPos,
          (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  return v11 & ~(v11 >> 31);
}


int32_t __fastcall ClassButtonControlComponent__get_GetCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCursor;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent__init(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *callback,
        int32_t questId,
        int32_t questPhase,
        bool defaultPos,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct ClassButtonComponent_array *classButton; // x8
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int32_t currentCursor; // w8
  struct ClassButtonComponent_array *v47; // x8
  il2cpp_array_size_t v48; // w26
  __int64 v49; // x27
  struct ClassButtonControlComponent_StaticFields *saveNameList; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixIcon; // x9
  struct System_Int32_array *v52; // x9
  struct System_Int32_array *mstClassIdTableHaveMixIcon; // x8
  int32_t v54; // w20
  int32_t *v55; // x8
  struct ClassButtonControlComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *supportGroupTypeTableNoMixIcon; // x9
  struct System_Int32_array *mstClassIdTableNoMixIcon; // x9
  struct System_Int32_array *v59; // x9
  struct System_Int32_array *v60; // x8
  struct UISprite_array *classCursor; // x8
  ClassButtonComponent_o *v62; // x23
  int32_t v63; // w24
  struct ServantClassCompatibilityIconComponent_array *classCompatibilityIcon; // x8
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *v66; // x24
  struct ServantClassCompatibilityIconComponent_array *v67; // x8
  ServantClassCompatibilityIconComponent_o *v68; // x8
  struct ClassButtonComponent_array *v69; // x8
  UISprite_o *v70; // x24
  int32_t g_low; // w23
  struct ClassButtonComponent_array *v72; // x8
  ClassButtonComponent_o *v73; // x23
  ClassButtonComponent_CallbackFunc_o *v74; // x24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x0

  if ( (byte_42EA8D1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)callback, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&ClassButtonComponent_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ClassButtonControlComponent_OnSelectButton__, v12, v13, v14);
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    byte_42EA8D1 = 1;
  }
  classButton = this->fields.classButton;
  if ( classButton )
    LOBYTE(classButton) = classButton->max_length == 10;
  this->fields.haveMixIcon = (char)classButton;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v47 = this->fields.classButton;
  this->fields.updateEnable = 1;
  if ( !v47 )
LABEL_85:
    sub_B5D69C(Instance, v38);
  v48 = 0;
  v49 = 32LL;
  while ( (signed int)v48 < (signed int)v47->max_length )
  {
    Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
    if ( this->fields.haveMixIcon )
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
      }
      saveNameList = (struct ClassButtonControlComponent_StaticFields *)Instance[1].fields.saveNameList;
      supportGroupTypeTableHaveMixIcon = saveNameList->supportGroupTypeTableHaveMixIcon;
      if ( !supportGroupTypeTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v48 >= (signed int)supportGroupTypeTableHaveMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
        saveNameList = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      if ( !saveNameList->mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v48 >= (signed int)saveNameList->mstClassIdTableHaveMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        saveNameList = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v52 = saveNameList->supportGroupTypeTableHaveMixIcon;
      if ( !v52 )
        goto LABEL_85;
      if ( v48 >= v52->max_length )
        goto LABEL_87;
      mstClassIdTableHaveMixIcon = saveNameList->mstClassIdTableHaveMixIcon;
      if ( !mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( v48 >= mstClassIdTableHaveMixIcon->max_length )
        goto LABEL_87;
      v54 = v52->m_Items[v48 + 1];
      v55 = &mstClassIdTableHaveMixIcon->m_Items[v48 + 1];
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    else
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
      }
      static_fields = (struct ClassButtonControlComponent_StaticFields *)Instance[1].fields.saveNameList;
      supportGroupTypeTableNoMixIcon = static_fields->supportGroupTypeTableNoMixIcon;
      if ( !supportGroupTypeTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v48 >= (signed int)supportGroupTypeTableNoMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      mstClassIdTableNoMixIcon = static_fields->mstClassIdTableNoMixIcon;
      if ( !mstClassIdTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v48 >= (signed int)mstClassIdTableNoMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v59 = static_fields->supportGroupTypeTableNoMixIcon;
      if ( !v59 )
        goto LABEL_85;
      if ( v48 >= v59->max_length )
        goto LABEL_87;
      v60 = static_fields->mstClassIdTableNoMixIcon;
      if ( !v60 )
        goto LABEL_85;
      if ( v48 >= v60->max_length )
        goto LABEL_87;
      v54 = *(_DWORD *)((char *)&v59->obj.klass + v49);
      v55 = (int32_t *)((char *)v60 + v49);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  *v55,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_85;
    if ( v48 >= classCursor->max_length )
    {
LABEL_87:
      v81 = sub_B5D6C8(Instance);
      sub_B5D668(v81, 0LL);
    }
    v62 = (ClassButtonComponent_o *)Instance;
    Instance = (DataManager_o *)classCursor->m_Items[v48];
    if ( !Instance )
      goto LABEL_85;
    v63 = this->fields.currentCursor;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v54 == v63, 0LL);
    classCompatibilityIcon = this->fields.classCompatibilityIcon;
    if ( classCompatibilityIcon )
    {
      max_length = classCompatibilityIcon->max_length;
      if ( (int)v48 < (int)max_length )
      {
        if ( v48 >= max_length )
          goto LABEL_87;
        v66 = (UnityEngine_Object_o *)classCompatibilityIcon->m_Items[v48];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( questId == 0 || questPhase == 0 )
          {
            Instance = 0LL;
          }
          else
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_85;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !Instance )
              goto LABEL_85;
            Instance = (DataManager_o *)QuestPhaseMaster__GetEntity(
                                          (QuestPhaseMaster_o *)Instance,
                                          questId,
                                          questPhase,
                                          0LL);
          }
          v67 = this->fields.classCompatibilityIcon;
          if ( !v67 )
            goto LABEL_85;
          if ( v48 >= v67->max_length )
            goto LABEL_87;
          v68 = v67->m_Items[v48];
          if ( Instance )
          {
            if ( !v62 || !v68 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__SetIcon(
              v68,
              v62->fields.m_CachedPtr,
              (System_Int32_array *)Instance->fields.saveNameList,
              3,
              0LL);
          }
          else
          {
            if ( !v68 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__Clear(v68, 0LL);
          }
        }
      }
    }
    v69 = this->fields.classButton;
    if ( !v69 )
      goto LABEL_85;
    if ( v48 >= v69->max_length )
      goto LABEL_87;
    Instance = (DataManager_o *)v69->m_Items[v48];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( v62 )
      {
        v70 = (UISprite_o *)Instance;
        g_low = LODWORD(v62->fields.specifyDisabledColor.fields.g);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Instance = (DataManager_o *)AtlasManager__SetClassIcon(v70, g_low, 2, 0LL);
        v72 = this->fields.classButton;
        if ( v72 )
        {
          if ( v48 >= v72->max_length )
            goto LABEL_87;
          v73 = v72->m_Items[v48];
          v74 = (ClassButtonComponent_CallbackFunc_o *)sub_B5D694(ClassButtonComponent_CallbackFunc_TypeInfo);
          ClassButtonComponent_CallbackFunc___ctor(
            v74,
            (Il2CppObject *)this,
            Method_ClassButtonControlComponent_OnSelectButton__,
            0LL);
          if ( v73 )
          {
            v73->fields.callbackFunc = v74;
            v73->fields.classPos = v54;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v73->fields.callbackFunc,
              (System_Int32_array **)v74,
              v75,
              v76,
              v77,
              v78,
              v79,
              v80);
            v47 = this->fields.classButton;
            ++v48;
            v49 += 4LL;
            if ( v47 )
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
  __int64 v3; // x3
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  int32_t v12; // w0
  const MethodInfo *v13; // x1

  if ( (byte_42EA8D0 & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA8D0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v9->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = sub_B5D990(v9);
  ClassButtonControlComponent__IsMixSupportGroupType(v12, v13);
}


void __fastcall ClassButtonControlComponent__setCursor(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t currentCursor; // w8
  int32_t IconCursorPos; // w22
  const MethodInfo *v7; // x2
  UISprite_o *gameObject; // x0
  __int64 v9; // x1
  struct UISprite_array *classCursor; // x8
  il2cpp_array_size_t v11; // w21
  struct UISprite_array *v12; // x8
  ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // x0
  __int64 v14; // x0

  currentCursor = this->fields.currentCursor;
  if ( currentCursor != classPos )
  {
    this->fields.currentCursor = classPos;
    this->fields.oldCursor = currentCursor;
    IconCursorPos = ClassButtonControlComponent__getIconCursorPos(this, classPos, method);
    gameObject = (UISprite_o *)ClassButtonControlComponent__getIconCursorPos(this, this->fields.oldCursor, v7);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_13;
    if ( IconCursorPos < classCursor->max_length )
    {
      v11 = (unsigned int)gameObject;
      gameObject = classCursor->m_Items[IconCursorPos];
      if ( !gameObject )
        goto LABEL_13;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v12 = this->fields.classCursor;
      if ( !v12 )
        goto LABEL_13;
      if ( v11 < v12->max_length )
      {
        gameObject = v12->m_Items[v11];
        if ( gameObject )
        {
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
              ClassButtonControlComponent_CallbackFunc__Invoke(callbackFunc, classPos, 0LL);
            return;
          }
        }
LABEL_13:
        sub_B5D69C(gameObject, v9);
      }
    }
    v14 = sub_B5D6C8(gameObject);
    sub_B5D668(v14, 0LL);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5E97 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, classPos, (_DWORD)callback, object);
    byte_42E5E97 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__EndInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ClassButtonControlComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ClassButtonControlComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&classPos, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)classPos, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)classPos, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)classPos, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)classPos,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)classPos, v21);
    goto LABEL_37;
  }
}