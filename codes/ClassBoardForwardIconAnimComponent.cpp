void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EA7F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19698/*"img_class_{0}"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17193/*"btn_class"*/, v9, v10, v11);
    byte_42EA7F1 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_19698/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_19698/*"img_class_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.spriteNameFormatIcon, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_17193/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17193/*"btn_class"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.spriteNameButton, v13, v14, v15, v16, v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__PlayAnim(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0LL), (v4 = this->fields.anim) == 0LL)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B5D69C(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_51249124(v4, name, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v30; // x0
  __int64 v31; // x3
  IClassBoardResourceCatalog_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int list; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA7F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, (_DWORD)resourceCatalog, baseId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    byte_42EA7F0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    baseId,
                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    return;
  if ( !resourceCatalog )
    goto LABEL_27;
  klass = resourceCatalog->klass;
  v23 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v21);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(p_method + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  sb = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v23->fields.list;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    spriteNameFormatIcon,
                                                                                    v30,
                                                                                    0LL);
  if ( !sb )
    goto LABEL_27;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v32 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v34 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_21:
    v35 = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v31);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v35)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v35 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL )
  {
LABEL_27:
    sub_B5D69C(Master_WarQuestSelectionMaster, v20);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}