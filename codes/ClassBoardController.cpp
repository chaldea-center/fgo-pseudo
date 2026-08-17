void ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  ClassBoardModelBuilder_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_5974645 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardModelBuilder_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    byte_5974645 = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_2213CCC(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0);
  this->fields._builder_k__BackingField = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._builder_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareViewList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lineViewList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (ClassBoardModelBuilder_o *)sub_2213CCC(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v24, 0);
  this->fields._GrandBuilder_k__BackingField = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandBuilder_k__BackingField,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.GrandSquareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.GrandSquareViewList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.GrandLineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.GrandLineViewList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ClassBoardController__Awake(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardController__CallbackSquareOnClick(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        int32_t acquireFlag,
        const MethodInfo *method)
{
  char v4; // w22
  __int64 v7; // x19
  Il2CppObject *Object_object; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ClassBoardSquare_o **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ClassBoardSquare_c *v23; // x9
  __int64 naturalAligment; // x10
  struct IClassBoardResourceCatalog_o *v25; // x2
  Il2CppObject *v26; // x21
  ClassBoardSquare_o *v27; // x20
  System_Action_o *v28; // x22
  System_Action_o *v29; // x23
  ClassBoardSquareOpenConfirmDialog_o *v30; // x0
  ClassBoardSquare_o *v31; // x1
  bool v32; // w2
  System_Action_o *v33; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  struct IClassBoardResourceCatalog_o *v39; // x21
  IClassBoardResourceCatalog_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  ClassBoardSquareDetailDialog_o *v44; // x21
  ClassBoardSquare_o *v45; // x20
  System_Action_o *v46; // x22
  struct IClassBoardResourceCatalog_o *v47; // x21
  IClassBoardResourceCatalog_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  ClassBoardDisableOpenDialog_o *v52; // x21
  ClassBoardSquare_o *v53; // x20
  System_Action_o *v54; // x22
  const MethodInfo *v55; // x3
  struct IClassBoardResourceCatalog_o *v56; // x22
  IClassBoardResourceCatalog_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  ClassBoardLockReleaseConditionDialog_o *v61; // x21
  ClassBoardSquare_o *v62; // x20
  System_Action_o *v63; // x22
  struct IClassBoardResourceCatalog_o *v64; // x22
  IClassBoardResourceCatalog_c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  Il2CppObject *v69; // x22
  __int64 v70; // x1
  ClassBoardSquare_o *v71; // x20
  ClassBoardController___c_c *v72; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__90_3; // x21
  Il2CppObject *v75; // x23
  struct ClassBoardController___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Action_o *v83; // x23
  ClassBoardLockOpenConfirmDialog_o *v84; // x0
  ClassBoardSquare_o *v85; // x1
  bool v86; // w2
  System_Action_o *v87; // x3
  Il2CppObject *v88; // x22
  __int64 v89; // x1
  ClassBoardSquare_o *v90; // x20
  ClassBoardController___c_c *v91; // x0
  struct ClassBoardController___c_StaticFields *v92; // x8
  System_Action_o *_9__90_5; // x21
  Il2CppObject *v94; // x23
  struct ClassBoardController___c_StaticFields *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct IClassBoardResourceCatalog_o *v102; // x2
  Il2CppObject *v103; // x21
  ClassBoardSquare_o *v104; // x20
  System_Action_o *v105; // x22

  v4 = acquireFlag;
  if ( (byte_5974628 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_2213A60(&ClassBoardLock_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__CallbackSquareOnClick_b__90_3__);
    sub_2213A60(&Method_ClassBoardController___c__CallbackSquareOnClick_b__90_5__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__0__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__11__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__12__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__1__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__2__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__4__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__6__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__7__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__8__);
    sub_2213A60(&ClassBoardController___c__DisplayClass90_0_TypeInfo);
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_5974628 = 1;
  }
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_91;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = square;
  v16 = (ClassBoardSquare_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)square, v17, v18, v19, v20, v21, v22);
  if ( (v4 & 1) != 0 )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v36 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
      if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_22;
        }
        v38 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_22:
        v38 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v38)(
                                        resourceCatalog,
                                        *(_QWORD *)(v38 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[7].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
        if ( Object_object )
        {
          v44 = (ClassBoardSquareDetailDialog_o *)Object_object;
          ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v45 = *(ClassBoardSquare_o **)(v7 + 24);
            v46 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v46,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__0__,
              0);
            ClassBoardSquareDetailDialog__Open(v44, v45, v46, 0);
            return;
          }
        }
      }
    }
    goto LABEL_91;
  }
  if ( (v4 & 2) != 0 )
  {
    v39 = this->fields.resourceCatalog;
    if ( v39 )
    {
      v40 = v39->klass;
      v41 = *(unsigned __int16 *)&v39->klass->_2.rank;
      if ( *(_WORD *)&v39->klass->_2.rank )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v42 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_28;
        }
        v43 = (__int64)&v40->vtable[*v42];
      }
      else
      {
LABEL_28:
        v43 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v43)(
                                        v39,
                                        *(_QWORD *)(v43 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[5].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
        if ( Object_object )
        {
          v52 = (ClassBoardDisableOpenDialog_o *)Object_object;
          LOBYTE(Object_object[29].monitor) = 0;
          ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)Object_object, v9);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v53 = *(ClassBoardSquare_o **)(v7 + 24);
            v54 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v54,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__1__,
              0);
            ClassBoardDisableOpenDialog__Open(v52, v53, v54, v55);
            return;
          }
        }
      }
    }
    goto LABEL_91;
  }
  if ( (v4 & 4) != 0 )
  {
    v47 = this->fields.resourceCatalog;
    if ( v47 )
    {
      v48 = v47->klass;
      v49 = *(unsigned __int16 *)&v47->klass->_2.rank;
      if ( *(_WORD *)&v47->klass->_2.rank )
      {
        v50 = &v48->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_39;
        }
        v51 = (__int64)&v48->vtable[*v50];
      }
      else
      {
LABEL_39:
        v51 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(
                                        v47,
                                        *(_QWORD *)(v51 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[6].monitor,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
        if ( Object_object )
        {
          v61 = (ClassBoardLockReleaseConditionDialog_o *)Object_object;
          ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v62 = *(ClassBoardSquare_o **)(v7 + 24);
            v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v63,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__2__,
              0);
            ClassBoardLockReleaseConditionDialog__Open(v61, v62, 0, v63, 0);
            return;
          }
        }
      }
    }
    goto LABEL_91;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v56 = this->fields.resourceCatalog;
    if ( v56 )
    {
      v57 = v56->klass;
      v58 = *(unsigned __int16 *)&v56->klass->_2.rank;
      if ( *(_WORD *)&v56->klass->_2.rank )
      {
        v59 = &v57->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_50;
        }
        v60 = (__int64)&v57->vtable[*v59];
      }
      else
      {
LABEL_50:
        v60 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v60)(
                                        v56,
                                        *(_QWORD *)(v60 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[6].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( Object_object )
        {
          v69 = Object_object;
          ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v71 = *v16;
            v72 = ClassBoardController___c_TypeInfo;
            if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v70);
              v72 = ClassBoardController___c_TypeInfo;
            }
            static_fields = v72->static_fields;
            _9__90_3 = static_fields->__9__90_3;
            if ( !_9__90_3 )
            {
              if ( !*(&v72->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v72, v70);
                static_fields = ClassBoardController___c_TypeInfo->static_fields;
              }
              v75 = (Il2CppObject *)static_fields->__9;
              _9__90_3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(_9__90_3, v75, Method_ClassBoardController___c__CallbackSquareOnClick_b__90_3__, 0);
              v76 = ClassBoardController___c_TypeInfo->static_fields;
              v76->__9__90_3 = _9__90_3;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v76->__9__90_3,
                (int32_t)_9__90_3,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82);
            }
            v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v83,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__4__,
              0);
            v84 = (ClassBoardLockOpenConfirmDialog_o *)v69;
            v85 = v71;
            v86 = 0;
            v87 = _9__90_3;
            goto LABEL_73;
          }
        }
      }
    }
LABEL_91:
    sub_2213CDC(Object_object, v9);
  }
  if ( (v4 & 8) != 0 )
  {
    v64 = this->fields.resourceCatalog;
    if ( v64 )
    {
      v65 = v64->klass;
      v66 = *(unsigned __int16 *)&v64->klass->_2.rank;
      if ( *(_WORD *)&v64->klass->_2.rank )
      {
        v67 = &v65->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v67 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_61;
        }
        v68 = (__int64)&v65->vtable[*v67];
      }
      else
      {
LABEL_61:
        v68 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v68)(
                                        v64,
                                        *(_QWORD *)(v68 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[5].monitor,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
        if ( Object_object )
        {
          v88 = Object_object;
          ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v90 = *v16;
            v91 = ClassBoardController___c_TypeInfo;
            if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v89);
              v91 = ClassBoardController___c_TypeInfo;
            }
            v92 = v91->static_fields;
            _9__90_5 = v92->__9__90_5;
            if ( !_9__90_5 )
            {
              if ( !*(&v91->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v91, v89);
                v92 = ClassBoardController___c_TypeInfo->static_fields;
              }
              v94 = (Il2CppObject *)v92->__9;
              _9__90_5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(_9__90_5, v94, Method_ClassBoardController___c__CallbackSquareOnClick_b__90_5__, 0);
              v95 = ClassBoardController___c_TypeInfo->static_fields;
              v95->__9__90_5 = _9__90_5;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v95->__9__90_5,
                (int32_t)_9__90_5,
                v96,
                v97,
                v98,
                v99,
                v100,
                v101);
            }
            v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v29,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__6__,
              0);
            v30 = (ClassBoardSquareOpenConfirmDialog_o *)v88;
            v31 = v90;
            v32 = 0;
            v33 = _9__90_5;
            goto LABEL_85;
          }
        }
      }
    }
    goto LABEL_91;
  }
  if ( *v16 )
  {
    v23 = (*v16)->klass;
    naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
    if ( v23->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ClassBoardLock_c *)v23->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
    {
      v102 = this->fields.resourceCatalog;
      if ( v102 )
      {
        Object_object = (Il2CppObject *)sub_200B5F0(0, IClassBoardResourceCatalog_TypeInfo, v102);
        if ( Object_object )
        {
          Object_object = BaseMonoBehaviour__createObject_object_(
                            (BaseMonoBehaviour_o *)this,
                            (Il2CppObject *)Object_object[6].klass,
                            this->fields.uiRoot,
                            0,
                            (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( Object_object )
          {
            v103 = Object_object;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
            Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                              this,
                                              this->klass->vtable._4_get_classBoardUIController.method);
            if ( Object_object )
            {
              ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
              v104 = *(ClassBoardSquare_o **)(v7 + 24);
              v105 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v105,
                (Il2CppObject *)v7,
                Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__7__,
                0);
              v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v83,
                (Il2CppObject *)v7,
                Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__8__,
                0);
              v84 = (ClassBoardLockOpenConfirmDialog_o *)v103;
              v85 = v104;
              v86 = 1;
              v87 = v105;
LABEL_73:
              ClassBoardLockOpenConfirmDialog__Open(v84, v85, v86, v87, v83, 0);
              return;
            }
          }
        }
      }
      goto LABEL_91;
    }
  }
  v25 = this->fields.resourceCatalog;
  if ( !v25 )
    goto LABEL_91;
  Object_object = (Il2CppObject *)sub_200B5F0(0, IClassBoardResourceCatalog_TypeInfo, v25);
  if ( !Object_object )
    goto LABEL_91;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    (Il2CppObject *)Object_object[5].monitor,
                    this->fields.uiRoot,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
  if ( !Object_object )
    goto LABEL_91;
  v26 = Object_object;
  ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
  Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                    this,
                                    this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Object_object )
    goto LABEL_91;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
  v27 = *(ClassBoardSquare_o **)(v7 + 24);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__11__,
    0);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__12__,
    0);
  v30 = (ClassBoardSquareOpenConfirmDialog_o *)v26;
  v31 = v27;
  v32 = 1;
  v33 = v28;
LABEL_85:
  ClassBoardSquareOpenConfirmDialog__Open(v30, v31, v32, v33, v29, 0);
}


void ClassBoardController__CheckOpenMissionClearDialogSave(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  ClassBoardController___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__97_0; // x23
  Il2CppObject *v33; // x24
  struct ClassBoardController___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x1
  ClassBoardController___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  struct ClassBoardController___c_StaticFields *v45; // x9
  System_Func_object__int__o *_9__97_1; // x23
  Il2CppObject *v47; // x24
  struct ClassBoardController___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  ClassBoardUIController_o *v56; // x19
  System_Action_o *v57; // x21
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v58; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_597462F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_2213A60(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_2213A60(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_2213A60(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_0__);
    sub_2213A60(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_1__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass97_0__CheckOpenMissionClearDialogSave_b__2__);
    sub_2213A60(&ClassBoardController___c__DisplayClass97_0_TypeInfo);
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_597462F = 1;
  }
  source = 0;
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v22;
  if ( !squareModel )
    goto LABEL_29;
  klass = squareModel->klass;
  v24 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_9;
    }
    v26 = (__int64)&klass->vtable[*p_offset + 17];
  }
  else
  {
LABEL_9:
    v26 = sub_224BC3C(squareModel, IClassBoardSquareModel_TypeInfo, 17);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))v26)(
    squareModel,
    &source,
    *(_QWORD *)(v26 + 8));
  v27 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v29 = ClassBoardController___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v28);
    v29 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__97_0 = (System_Func_object__bool__o *)static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, v28);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__97_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__97_0,
      v33,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_0__,
      0);
    v34 = ClassBoardController___c_TypeInfo->static_fields;
    v34->__9__97_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__97_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->__9__97_0, (int32_t)_9__97_0, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Where_object_(
          v30,
          (System_Func_TSource__bool__o *)_9__97_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v43 = ClassBoardController___c_TypeInfo;
  v44 = v41;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v42);
    v43 = ClassBoardController___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__97_1 = (System_Func_object__int__o *)v45->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v42);
      v45 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v47,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_1__,
      0);
    v48 = ClassBoardController___c_TypeInfo->static_fields;
    v48->__9__97_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__97_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__97_1, (int32_t)_9__97_1, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__97_1,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( !System_Linq_Enumerable__Any_object_(
          v55,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    goto LABEL_28;
  }
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8
    || (ClassBoardUIController__SetCameraWorkBlock(v8, 1, 0),
        v56 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method),
        v57 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v57,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass97_0__CheckOpenMissionClearDialogSave_b__2__,
          0),
        !v56) )
  {
LABEL_29:
    sub_2213CDC(v8, v9);
  }
  ClassBoardUIController__OpenMissionClearDialog(v56, v57, 0);
LABEL_28:
  v58 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v55,
                                                                                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v58, 0);
}


void ClassBoardController__CheckQuestOpenDialog(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o **v16; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  Il2CppObject *Object_object; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *Instance; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  Il2CppObject *v36; // x24
  System_String_o *v37; // x22
  System_Action_o *v38; // x23
  ClassBoardQuestOpenConfirmDialog_o *v39; // x21
  int32_t grandBaseId; // w19
  ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *v41; // x22
  int32_t v42; // [xsp+8h] [xbp-38h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974630 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
    sub_2213A60(&Method_ClassBoardQuestOpenConfirmDialog_Close__);
    sub_2213A60(&ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass98_0__CheckQuestOpenDialog_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass98_0_TypeInfo);
    sub_2213A60(&StringLiteral_14262/*"Terminal/Quest/{0}"*/);
    byte_5974630 = 1;
  }
  questId = 0;
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass98_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = (System_Action_o **)(v7 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  if ( !squareModel )
    goto LABEL_29;
  klass = squareModel->klass;
  v18 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_9;
    }
    v20 = (__int64)&(&klass->rgctx_data)[2 * *p_offset + 39];
  }
  else
  {
LABEL_9:
    v20 = sub_224BC3C(squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(squareModel, *(_QWORD *)(v20 + 8)) & 1) == 0 )
  {
    ActionExtensions__Call(*v16, 0);
    return;
  }
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8 )
    goto LABEL_29;
  if ( !ClassBoardUIController__IsOpenQuestOpenDialog(
          (ClassBoardUIController_o *)v8,
          this->fields.grandBaseId,
          &questId,
          0) )
  {
    ActionExtensions__Call(*v16, 0);
    return;
  }
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8 )
    goto LABEL_29;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v8, 1, 0);
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_29;
  v22 = resourceCatalog->klass;
  v23 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v24 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_20;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_20:
    v25 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v25)(
         resourceCatalog,
         *(_QWORD *)(v25 + 8));
  if ( !v8 )
    goto LABEL_29;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    *(Il2CppObject **)(v8 + 136),
                    this->fields.uiRoot,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
  *(_QWORD *)(v7 + 32) = Object_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)Object_object, v27, v28, v29, v30, v31, v32);
  v8 = *(_QWORD *)(v7 + 32);
  if ( !v8 )
    goto LABEL_29;
  ClassBoardQuestOpenConfirmDialog__Init((ClassBoardQuestOpenConfirmDialog_o *)v8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = questId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v42);
  v35 = System_String__Format((System_String_o *)StringLiteral_14262/*"Terminal/Quest/{0}"*/, v34, 0);
  v36 = *(Il2CppObject **)(v7 + 32);
  v37 = v35;
  v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v38, v36, Method_ClassBoardQuestOpenConfirmDialog_Close__, 0);
  if ( !Instance
    || (CommonUI__TryGetSceneTransitionAction(
          (CommonUI_o *)Instance,
          (System_Action_o **)(v7 + 24),
          v37,
          0,
          v38,
          0,
          0,
          0),
        v39 = *(ClassBoardQuestOpenConfirmDialog_o **)(v7 + 32),
        grandBaseId = this->fields.grandBaseId,
        v41 = (ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *)sub_2213CCC(ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo),
        ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
          v41,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass98_0__CheckQuestOpenDialog_b__0__,
          0),
        !v39) )
  {
LABEL_29:
    sub_2213CDC(v8, v9);
  }
  ClassBoardQuestOpenConfirmDialog__Open(v39, grandBaseId, v41, 0);
}


void ClassBoardController__CheckUMedalCreateEventTutorial(
        ClassBoardController_o *this,
        bool isGrandScoreTutorialDisplayed,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x23
  __int64 v17; // x1
  ClassBoardRootComponent_c *v18; // x0
  bool v19; // w0
  __int64 v20; // x1
  ClassBoardRootComponent_c *v21; // x0
  _BOOL4 isGrandScoreReleaseDialogOpen; // w8
  ClassBoardRootComponent_o *classBoardRootComponent; // x21
  bool v24; // w25
  System_String_o *U_MEDAL_CREATE_BG_MOVIE_NAME; // x22
  System_Action_o *v26; // x23

  if ( (byte_5974644 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ClassBoardRootComponent_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass119_0_TypeInfo);
    byte_5974644 = 1;
  }
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass119_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = endAction;
  v16 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)endAction, v10, v11, v12, v13, v14, v15);
  v18 = ClassBoardRootComponent_TypeInfo;
  if ( !*(&ClassBoardRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo, v17);
    v18 = ClassBoardRootComponent_TypeInfo;
  }
  v19 = EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
          v18->static_fields->U_MEDAL_CREATE_EVENT_ID,
          96,
          0);
  if ( this->fields.baseId == 9 && v19 )
  {
    v21 = ClassBoardRootComponent_TypeInfo;
    isGrandScoreReleaseDialogOpen = this->fields.isGrandScoreReleaseDialogOpen;
    classBoardRootComponent = this->fields.classBoardRootComponent;
    v24 = !isGrandScoreReleaseDialogOpen;
    if ( !*(&ClassBoardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo, v20);
      v21 = ClassBoardRootComponent_TypeInfo;
    }
    U_MEDAL_CREATE_BG_MOVIE_NAME = v21->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME;
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__0__,
      0);
    if ( classBoardRootComponent )
    {
      ClassBoardRootComponent__PlayMovie(
        classBoardRootComponent,
        U_MEDAL_CREATE_BG_MOVIE_NAME,
        v24 && !isGrandScoreTutorialDisplayed,
        v26,
        0);
      return;
    }
LABEL_15:
    sub_2213CDC(v8, v9);
  }
  if ( *(_QWORD *)v16 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v16 + 64LL),
      *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


ClassBoardSquare_o *ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        UnityEngine_Transform_o *parent,
        bool isGrand,
        const MethodInfo *method)
{
  BaseMonoBehaviour_o *v10; // x21
  _BOOL4 v11; // w8
  BaseMonoBehaviour_c *klass; // x23
  BaseMonoBehaviour_o *v13; // x24
  BaseMonoBehaviour_o *v14; // x25
  _QWORD *image; // x8
  __int64 v16; // x9
  IClassBoardResourceCatalog_c **v17; // x10
  __int64 v18; // x0
  Il2CppObject *Object_object; // x22
  _QWORD *v20; // x8
  __int64 v21; // x9
  IClassBoardResourceCatalog_c **v22; // x10

  v10 = (BaseMonoBehaviour_o *)this;
  if ( (byte_5974623 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974623 = 1;
  }
  if ( !assetId )
  {
    Object_object = 0;
    goto LABEL_29;
  }
  v11 = isGrand;
  klass = v10[3].klass;
  if ( v11 )
    v13 = 0;
  else
    v13 = v10;
  if ( v11 )
    v14 = v10;
  else
    v14 = 0;
  if ( v11 )
  {
    if ( !klass )
      goto LABEL_34;
    image = klass->_1.image;
    v16 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v17 = (IClassBoardResourceCatalog_c **)(image[22] + 8LL);
      while ( *(v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&image[2 * *(_DWORD *)v17 + 53];
    }
    else
    {
LABEL_16:
      v18 = sub_224BC3C(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 7);
    }
    v13 = v14;
  }
  else
  {
    if ( !klass )
      goto LABEL_34;
    v20 = klass->_1.image;
    v21 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v22 = (IClassBoardResourceCatalog_c **)(v20[22] + 8LL);
      while ( *(v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_23;
      }
      v18 = (__int64)&v20[2 * *(_DWORD *)v22 + 47];
    }
    else
    {
LABEL_23:
      v18 = sub_224BC3C(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 4);
    }
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v18)(
                                     klass,
                                     (unsigned int)assetId,
                                     *(_QWORD *)(v18 + 8));
  if ( !v13 )
LABEL_34:
    sub_2213CDC(this, defaultPrefab);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    v13,
                    (Il2CppObject *)this,
                    parent,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
LABEL_29:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, defaultPrefab);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0, 0) )
    return (ClassBoardSquare_o *)Object_object;
  else
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   v10,
                                   (Il2CppObject *)defaultPrefab,
                                   parent,
                                   0,
                                   (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void ClassBoardController__CreateViews(ClassBoardController_o *this, bool isGrand, const MethodInfo *method)
{
  ClassBoardController_c *klass; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 (__fastcall *v8)(ClassBoardController_o *, _QWORD, const MethodInfo *); // x10
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 *v14; // x25
  __int64 v15; // x8
  System_Collections_Generic_List_object__o *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x9
  UnityEngine_Transform_o *v19; // x22
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x25
  ClassBoardController_o *v25; // x23
  ClassBoardController_o *v26; // x29
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  IClassBoardSquareModel_o *v36; // x25
  __int64 v37; // x0
  __int64 v38; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x26
  IClassBoardResourceCatalog_c *v40; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  IClassBoardSquareModel_c *v44; // x8
  __int64 v45; // x9
  IClassBoardSquareModel_c **v46; // x10
  __int64 v47; // x0
  IClassBoardResourceCatalog_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  struct IClassBoardResourceCatalog_o *v54; // x26
  ClassBoardController_o *v55; // x10
  ClassBoardController_o *v56; // x9
  IClassBoardResourceCatalog_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  ClassBoardController_o *v61; // x10
  ClassBoardController_o *v62; // x9
  IClassBoardResourceCatalog_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  ClassBoardSquare_o **v69; // x10
  ClassBoardController_o *v70; // x26
  IClassBoardSquareModel_c *v71; // x8
  ClassBoardSquare_o *v72; // x27
  __int64 v73; // x9
  IClassBoardSquareModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x5
  IClassBoardResourceCatalog_c *v79; // x8
  __int64 v80; // x9
  int32_t *v81; // x10
  __int64 v82; // x0
  IClassBoardResourceCatalog_c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  ClassBoardSquare_o **v89; // x10
  __int64 v90; // x0
  __int64 v91; // x1
  ClassBoardSquare_o **v92; // x10
  __int64 v93; // x0
  __int64 v94; // x1
  IClassBoardSquareModel_c *v95; // x8
  __int64 v96; // x9
  IClassBoardSquareModel_c **v97; // x10
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x0
  __int64 v101; // x1
  IClassBoardSquareModel_c *v102; // x8
  __int64 v103; // x9
  IClassBoardSquareModel_c **v104; // x10
  __int64 v105; // x0
  __int64 v106; // x1
  ClassBoardSquare_o *v107; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x26
  __int64 v110; // x0
  __int64 v111; // x1
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  Il2CppClass **v121; // x0
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 *v126; // x23
  __int64 v127; // x8
  __int64 v128; // x9
  int *v129; // x10
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x23
  ClassBoardController_o *v134; // x26
  ClassBoardController_o *v135; // x25
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  __int64 v146; // x0
  __int64 v147; // x1
  struct IClassBoardResourceCatalog_o *v148; // x24
  IClassBoardLineModel_o *v149; // x23
  IClassBoardResourceCatalog_c *v150; // x8
  __int64 v151; // x9
  int32_t *v152; // x10
  __int64 v153; // x0
  IClassBoardResourceCatalog_c *v154; // x8
  __int64 v155; // x9
  int32_t *v156; // x10
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x1
  Il2CppObject **v160; // x8
  BaseMonoBehaviour_o *v161; // x0
  __int64 v162; // x0
  Il2CppObject *Object_object; // x0
  __int64 v164; // x1
  Il2CppObject *v165; // x24
  __int64 v166; // x0
  __int64 v167; // x1
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  Il2CppClass **v177; // x0
  __int64 v178; // x8
  __int64 v179; // x9
  int *v180; // x10
  __int64 v181; // x0
  __int64 v182; // [xsp+8h] [xbp-A8h]
  ClassBoardController_o *v183; // [xsp+10h] [xbp-A0h]
  ClassBoardController_o *v184; // [xsp+18h] [xbp-98h]
  ClassBoardController_o *v185; // [xsp+20h] [xbp-90h]
  ClassBoardController_o *v186; // [xsp+28h] [xbp-88h]
  __int64 v187; // [xsp+40h] [xbp-70h]
  __int64 v188; // [xsp+48h] [xbp-68h]

  if ( (byte_5974622 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    byte_5974622 = 1;
  }
  klass = this->klass;
  v6 = 416;
  if ( isGrand )
  {
    v6 = 464;
    v7 = 456;
  }
  else
  {
    v7 = 408;
  }
  v8 = *(__int64 (__fastcall **)(ClassBoardController_o *, _QWORD, const MethodInfo *))((char *)&klass->_1.image + v7);
  if ( isGrand )
    v9 = 248;
  else
    v9 = 112;
  if ( isGrand )
    v10 = 256;
  else
    v10 = 120;
  if ( isGrand )
    v11 = 200;
  else
    v11 = 40;
  v12 = v8(this, *(void **)((char *)&klass->_1.image + v6), method);
  if ( !v12 )
    goto LABEL_249;
  v14 = *(__int64 **)(v12 + 24);
  if ( !v14 )
    goto LABEL_249;
  v15 = *v14;
  v16 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v9);
  v17 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v10);
  v18 = *(unsigned __int16 *)(*v14 + 302);
  v19 = *(UnityEngine_Transform_o **)((char *)&this->klass + v11);
  v182 = v12;
  if ( *(_WORD *)(*v14 + 302) )
  {
    v20 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v20 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v18;
      v20 += 4;
      if ( !v18 )
        goto LABEL_21;
    }
    v21 = v15 + 16LL * *v20 + 312;
  }
  else
  {
LABEL_21:
    v21 = sub_224BC3C(v14, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v21)(v14, *(_QWORD *)(v21 + 8));
  v188 = v22;
  if ( !v22 )
    sub_2213CDC(v22, v23);
  v185 = 0;
  v186 = 0;
  v24 = v22;
  v184 = 0;
  v25 = 0;
  v26 = 0;
  v183 = 0;
  while ( 1 )
  {
    v27 = *(_QWORD *)v24;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_29;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_29:
      v30 = sub_224BC3C(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v24, *(_QWORD *)(v30 + 8));
    if ( (v31 & 1) == 0 )
      break;
    if ( !v188 )
      sub_2213CDC(v31, v13);
    v32 = *(_QWORD *)v188;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v188 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v188 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v34 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_37;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_37:
      v35 = sub_224BC3C(v188, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0);
    }
    v36 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v188, *(_QWORD *)(v35 + 8));
    v37 = sub_2213BB4(v36, IClassBoardLockModel_TypeInfo);
    if ( v37 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( isGrand )
        v25 = this;
      else
        v26 = this;
      if ( isGrand )
      {
        if ( !resourceCatalog )
          sub_2213CDC(v37, v38);
        v40 = resourceCatalog->klass;
        v41 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          p_offset = &v40->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v41;
            p_offset += 4;
            if ( !v41 )
              goto LABEL_49;
          }
          v43 = (__int64)&v40->vtable[*p_offset];
        }
        else
        {
LABEL_49:
          v43 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v67 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v43)(
                resourceCatalog,
                *(_QWORD *)(v43 + 8));
        if ( !v67 )
          sub_2213CDC(0, v68);
        v69 = (ClassBoardSquare_o **)(v67 + 64);
        v70 = v25;
      }
      else
      {
        if ( !resourceCatalog )
          sub_2213CDC(v37, v38);
        v48 = resourceCatalog->klass;
        v49 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          v50 = &v48->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_61;
          }
          v51 = (__int64)&v48->vtable[*v50];
        }
        else
        {
LABEL_61:
          v51 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v67 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(
                resourceCatalog,
                *(_QWORD *)(v51 + 8));
        if ( !v67 )
          sub_2213CDC(0, v68);
        v69 = (ClassBoardSquare_o **)(v67 + 32);
        v70 = v26;
      }
      if ( !v36 )
        sub_2213CDC(v67, v68);
      v71 = v36->klass;
      v72 = *v69;
      v73 = *(unsigned __int16 *)&v36->klass->_2.rank;
      if ( *(_WORD *)&v36->klass->_2.rank )
      {
        v74 = (IClassBoardSquareModel_c **)&v71->_1.interfaceOffsets->offset;
        while ( *(v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 2;
          if ( !v73 )
            goto LABEL_99;
        }
        v75 = (__int64)&v71->vtable[*(_DWORD *)v74 + 10];
      }
      else
      {
LABEL_99:
        v75 = sub_224BC3C(v36, IClassBoardSquareModel_TypeInfo, 10);
      }
      v76 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v75)(v36, *(_QWORD *)(v75 + 8));
      if ( !v70 )
        sub_2213CDC(v76, v77);
    }
    else
    {
      if ( !v36 )
        sub_2213CDC(0, v38);
      v44 = v36->klass;
      v45 = *(unsigned __int16 *)&v36->klass->_2.rank;
      if ( *(_WORD *)&v36->klass->_2.rank )
      {
        v46 = (IClassBoardSquareModel_c **)&v44->_1.interfaceOffsets->offset;
        while ( *(v46 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v45;
          v46 += 2;
          if ( !v45 )
            goto LABEL_55;
        }
        v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 5];
      }
      else
      {
LABEL_55:
        v47 = sub_224BC3C(v36, IClassBoardSquareModel_TypeInfo, 5);
      }
      v52 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v47)(v36, *(_QWORD *)(v47 + 8));
      v54 = this->fields.resourceCatalog;
      if ( (v52 & 1) != 0 )
      {
        if ( isGrand )
          v55 = v185;
        else
          v55 = this;
        v56 = v186;
        if ( isGrand )
          v56 = this;
        v185 = v55;
        v186 = v56;
        if ( isGrand )
        {
          if ( !v54 )
            sub_2213CDC(v52, v53);
          v57 = v54->klass;
          v58 = *(unsigned __int16 *)&v54->klass->_2.rank;
          if ( *(_WORD *)&v54->klass->_2.rank )
          {
            v59 = &v57->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v58;
              v59 += 4;
              if ( !v58 )
                goto LABEL_75;
            }
            v60 = (__int64)&v57->vtable[*v59];
          }
          else
          {
LABEL_75:
            v60 = sub_224BC3C(v54, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v87 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v60)(
                  v54,
                  *(_QWORD *)(v60 + 8));
          if ( !v87 )
            sub_2213CDC(0, v88);
          v70 = v186;
          v89 = (ClassBoardSquare_o **)(v87 + 72);
        }
        else
        {
          if ( !v54 )
            sub_2213CDC(v52, v53);
          v79 = v54->klass;
          v80 = *(unsigned __int16 *)&v54->klass->_2.rank;
          if ( *(_WORD *)&v54->klass->_2.rank )
          {
            v81 = &v79->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v81 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v80;
              v81 += 4;
              if ( !v80 )
                goto LABEL_108;
            }
            v82 = (__int64)&v79->vtable[*v81];
          }
          else
          {
LABEL_108:
            v82 = sub_224BC3C(v54, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v93 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v82)(
                  v54,
                  *(_QWORD *)(v82 + 8));
          if ( !v93 )
            sub_2213CDC(0, v94);
          v70 = v185;
          v89 = (ClassBoardSquare_o **)(v93 + 40);
        }
        v95 = v36->klass;
        v72 = *v89;
        v96 = *(unsigned __int16 *)&v36->klass->_2.rank;
        if ( *(_WORD *)&v36->klass->_2.rank )
        {
          v97 = (IClassBoardSquareModel_c **)&v95->_1.interfaceOffsets->offset;
          while ( *(v97 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v96;
            v97 += 2;
            if ( !v96 )
              goto LABEL_128;
          }
          v98 = (__int64)&v95->vtable[*(_DWORD *)v97 + 10];
        }
        else
        {
LABEL_128:
          v98 = sub_224BC3C(v36, IClassBoardSquareModel_TypeInfo, 10);
        }
        v76 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v98)(v36, *(_QWORD *)(v98 + 8));
        if ( !v70 )
          sub_2213CDC(v76, v99);
      }
      else
      {
        if ( isGrand )
          v61 = v183;
        else
          v61 = this;
        v62 = v184;
        if ( isGrand )
          v62 = this;
        v183 = v61;
        v184 = v62;
        if ( isGrand )
        {
          if ( !v54 )
            sub_2213CDC(v52, v53);
          v63 = v54->klass;
          v64 = *(unsigned __int16 *)&v54->klass->_2.rank;
          if ( *(_WORD *)&v54->klass->_2.rank )
          {
            v65 = &v63->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v65 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v64;
              v65 += 4;
              if ( !v64 )
                goto LABEL_87;
            }
            v66 = (__int64)&v63->vtable[*v65];
          }
          else
          {
LABEL_87:
            v66 = sub_224BC3C(v54, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v90 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v66)(
                  v54,
                  *(_QWORD *)(v66 + 8));
          if ( !v90 )
            sub_2213CDC(0, v91);
          v70 = v184;
          v92 = (ClassBoardSquare_o **)(v90 + 48);
        }
        else
        {
          if ( !v54 )
            sub_2213CDC(v52, v53);
          v83 = v54->klass;
          v84 = *(unsigned __int16 *)&v54->klass->_2.rank;
          if ( *(_WORD *)&v54->klass->_2.rank )
          {
            v85 = &v83->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v85 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_114;
            }
            v86 = (__int64)&v83->vtable[*v85];
          }
          else
          {
LABEL_114:
            v86 = sub_224BC3C(v54, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v100 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v86)(
                   v54,
                   *(_QWORD *)(v86 + 8));
          if ( !v100 )
            sub_2213CDC(0, v101);
          v70 = v183;
          v92 = (ClassBoardSquare_o **)(v100 + 16);
        }
        v102 = v36->klass;
        v72 = *v92;
        v103 = *(unsigned __int16 *)&v36->klass->_2.rank;
        if ( *(_WORD *)&v36->klass->_2.rank )
        {
          v104 = (IClassBoardSquareModel_c **)&v102->_1.interfaceOffsets->offset;
          while ( *(v104 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v103;
            v104 += 2;
            if ( !v103 )
              goto LABEL_139;
          }
          v105 = (__int64)&v102->vtable[*(_DWORD *)v104 + 10];
        }
        else
        {
LABEL_139:
          v105 = sub_224BC3C(v36, IClassBoardSquareModel_TypeInfo, 10);
        }
        v76 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v105)(v36, *(_QWORD *)(v105 + 8));
        if ( !v70 )
          sub_2213CDC(v76, v106);
      }
    }
    v107 = ClassBoardController__CloneSquareObject(v70, v72, v76, v19, isGrand, v78);
    v109 = (Il2CppObject *)v107;
    if ( !v107 )
      sub_2213CDC(0, v108);
    ClassBoardSquare__Setup(v107, v36, 0);
    if ( !v16
      || (items = v16->fields._items,
          v119 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__,
          ++v16->fields._version,
          !items) )
    {
      sub_2213CDC(v110, v111);
    }
    size = v16->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v109,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v121[4] = (Il2CppClass *)v109;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v121 + 4), (int32_t)v109, v112, v113, v114, v115, v116, v117);
    }
    v24 = v188;
  }
  if ( v188 )
  {
    v122 = *(_QWORD *)v188;
    v123 = *(unsigned __int16 *)(*(_QWORD *)v188 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v188 + 302LL) )
    {
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
      {
        --v123;
        v124 += 4;
        if ( !v123 )
          goto LABEL_155;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_155:
      v125 = sub_224BC3C(v188, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v125)(v188, *(_QWORD *)(v125 + 8));
  }
  v12 = 0;
  v126 = *(__int64 **)(v182 + 16);
  if ( !v126 )
LABEL_249:
    sub_2213CDC(v12, v13);
  v127 = *v126;
  v128 = *(unsigned __int16 *)(*v126 + 302);
  if ( *(_WORD *)(*v126 + 302) )
  {
    v129 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v129 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v128;
      v129 += 4;
      if ( !v128 )
        goto LABEL_163;
    }
    v130 = v127 + 16LL * *v129 + 312;
  }
  else
  {
LABEL_163:
    v130 = sub_224BC3C(*(_QWORD *)(v182 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v131 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v130)(v126, *(_QWORD *)(v130 + 8));
  v187 = v131;
  if ( !v131 )
    sub_2213CDC(v131, v132);
  v133 = v131;
  v134 = 0;
  v135 = 0;
  while ( 1 )
  {
    v136 = *(_QWORD *)v133;
    v137 = *(unsigned __int16 *)(*(_QWORD *)v133 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v133 + 302LL) )
    {
      v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v138 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v137;
        v138 += 4;
        if ( !v137 )
          goto LABEL_171;
      }
      v139 = v136 + 16LL * *v138 + 312;
    }
    else
    {
LABEL_171:
      v139 = sub_224BC3C(v133, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v140 = (*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v133, *(_QWORD *)(v139 + 8));
    if ( (v140 & 1) == 0 )
      break;
    if ( !v187 )
      sub_2213CDC(v140, v141);
    v142 = *(_QWORD *)v187;
    v143 = *(unsigned __int16 *)(*(_QWORD *)v187 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v187 + 302LL) )
    {
      v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v144 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v143;
        v144 += 4;
        if ( !v143 )
          goto LABEL_179;
      }
      v145 = v142 + 16LL * *v144 + 312;
    }
    else
    {
LABEL_179:
      v145 = sub_224BC3C(v187, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v146 = (*(__int64 (__fastcall **)(__int64, _QWORD))v145)(v187, *(_QWORD *)(v145 + 8));
    v148 = this->fields.resourceCatalog;
    v149 = (IClassBoardLineModel_o *)v146;
    if ( isGrand )
      v134 = this;
    else
      v135 = this;
    if ( isGrand )
    {
      if ( !v148 )
        sub_2213CDC(v146, v147);
      v150 = v148->klass;
      v151 = *(unsigned __int16 *)&v148->klass->_2.rank;
      if ( *(_WORD *)&v148->klass->_2.rank )
      {
        v152 = &v150->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v152 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v151;
          v152 += 4;
          if ( !v151 )
            goto LABEL_190;
        }
        v153 = (__int64)&v150->vtable[*v152];
      }
      else
      {
LABEL_190:
        v153 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v158 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v153)(
               v148,
               *(_QWORD *)(v153 + 8));
      if ( !v158 )
        sub_2213CDC(0, v159);
      v160 = (Il2CppObject **)(v158 + 56);
      v161 = (BaseMonoBehaviour_o *)v134;
    }
    else
    {
      if ( !v148 )
        sub_2213CDC(v146, v147);
      v154 = v148->klass;
      v155 = *(unsigned __int16 *)&v148->klass->_2.rank;
      if ( *(_WORD *)&v148->klass->_2.rank )
      {
        v156 = &v154->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v156 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v155;
          v156 += 4;
          if ( !v155 )
            goto LABEL_196;
        }
        v157 = (__int64)&v154->vtable[*v156];
      }
      else
      {
LABEL_196:
        v157 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v162 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v157)(
               v148,
               *(_QWORD *)(v157 + 8));
      if ( !v162 )
        sub_2213CDC(0, v159);
      v160 = (Il2CppObject **)(v162 + 24);
      v161 = (BaseMonoBehaviour_o *)v135;
    }
    if ( !v161 )
      sub_2213CDC(0, v159);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v161,
                      *v160,
                      v19,
                      0,
                      (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v165 = Object_object;
    if ( !Object_object )
      sub_2213CDC(0, v164);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v149, 0);
    if ( !v17
      || (v174 = v17->fields._items,
          v175 = Method_System_Collections_Generic_List_ClassBoardLine__Add__,
          ++v17->fields._version,
          !v174) )
    {
      sub_2213CDC(v166, v167);
    }
    v176 = v17->fields._size;
    if ( (unsigned int)v176 >= LODWORD(v174->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        v165,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
    }
    else
    {
      v177 = &v174->obj.klass + v176;
      v17->fields._size = v176 + 1;
      v177[4] = (Il2CppClass *)v165;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v177 + 4), (int32_t)v165, v168, v169, v170, v171, v172, v173);
    }
    v133 = v187;
  }
  if ( v187 )
  {
    v178 = *(_QWORD *)v187;
    v179 = *(unsigned __int16 *)(*(_QWORD *)v187 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v187 + 302LL) )
    {
      v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v180 - 1) != System_IDisposable_TypeInfo )
      {
        --v179;
        v180 += 4;
        if ( !v179 )
          goto LABEL_217;
      }
      v181 = v178 + 16LL * *v180 + 312;
    }
    else
    {
LABEL_217:
      v181 = sub_224BC3C(v187, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v181)(v187, *(_QWORD *)(v181 + 8));
  }
}


System_Collections_IEnumerator_o *ClassBoardController__DelayCheckGrandScoreTutorial(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974640 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__DelayCheckGrandScoreTutorial_d__115_TypeInfo);
    byte_5974640 = 1;
  }
  v3 = sub_2213CCC(ClassBoardController__DelayCheckGrandScoreTutorial_d__115_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__DispGrandScoreAddClassDialog(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_597463B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController_EndGrandBoardTransition__);
    byte_597463B = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardController_EndGrandBoardTransition__, 0);
  EventTutorialMaster__CheckTutorial(0, 105, v3, this->fields.grandBaseId, 0, 0, 0, 0);
}


void ClassBoardController__EndGrandBoardTransition(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo_47A2F30 *v5; // x0

  if ( (byte_597463C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_597463C = 1;
  }
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, 0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        v5 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
        this->fields.isGrandScoreReleaseDialogOpen = 0,
        (Instance = SingletonTemplate_object___get_Instance(v5)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardController__EndPlayGrandReturnTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  ClassBoardController_c *klass; // x8
  System_Action_o *v9; // x20

  if ( (byte_597463F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__114_0__);
    byte_597463F = 1;
  }
  if ( !isClickedClassScoreButton )
    ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, method);
  ClassBoardController__RefreshUi(this, this->fields.baseId, isClickedClassScoreButton, v3);
  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.GrandBoardObjectsParent;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  GrandBoardRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)GrandBoardRoot, 0);
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.background;
  if ( !GrandBoardRoot
    || (ClassBoardBackground__InitGrandClassReleasedEffect((ClassBoardBackground_o *)GrandBoardRoot, v6),
        klass = this->klass,
        this->fields.CurrentBoardType = 1,
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                        this,
                                                        klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)GrandBoardRoot, 0, 0),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_13:
    sub_2213CDC(GrandBoardRoot, v6);
  }
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)GrandBoardRoot, 0);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__114_0__,
    0);
  EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__EndPlayGrandTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_IEnumerator_o *v6; // x0
  bool *p_isPlayEffectToGrandBoard; // x21
  int32_t grandBaseId; // w8
  UnityEngine_Component_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  char v19; // w20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  ClassBoardBaseEntity_o *v24; // x0
  __int64 v25; // x1
  ClassBoardBaseEntity_o *v26; // x21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_IEnumerator_o *v31; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-38h]

  if ( (byte_5974639 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5974639 = 1;
  }
  if ( this->fields.isDirectlyGrandBoard )
  {
    if ( this->fields.isPlayEffectToGrandBoard )
    {
      if ( this->fields.baseId == 8 )
      {
        v6 = ClassBoardController__PlayExClassGrandScoreRelease(this, (const MethodInfo *)isClickedClassScoreButton);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
        return;
      }
      p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
LABEL_44:
      gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                this,
                                                this->klass->vtable._4_get_classBoardUIController.method,
                                                method);
      if ( !gameObject )
        goto LABEL_64;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      MainMenuBar__setMenuActive(1, 0, 0);
      if ( !isClickedClassScoreButton )
        goto LABEL_12;
      goto LABEL_11;
    }
    p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
  }
  else
  {
    p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
    if ( this->fields.isPlayEffectToGrandBoard )
      goto LABEL_44;
  }
  if ( isClickedClassScoreButton )
LABEL_11:
    ClassBoardController__SetOnClickBack(this, this->fields.directlyBackAction, method);
LABEL_12:
  if ( !this->fields.isDirectlyGrandBoard || *p_isPlayEffectToGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, isClickedClassScoreButton, v3);
  grandBaseId = this->fields.grandBaseId;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 0;
  if ( grandBaseId != 10001 || EventTutorialMaster__IsTutorialAvailable(0, 100, 0, 0, 0, 0, 0) )
  {
LABEL_58:
    v31 = ClassBoardController__DelayCheckGrandScoreTutorial(this, (const MethodInfo *)isClickedClassScoreButton);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v31, 0);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isClickedClassScoreButton);
  gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !gameObject )
    goto LABEL_64;
  gameObject = (UnityEngine_Component_o *)gameObject[1].fields.m_CachedPtr;
  if ( !gameObject )
    goto LABEL_64;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)gameObject,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v12);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_27;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_27:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( (v18 & 1) == 0 )
      break;
    if ( !v32 )
      sub_2213CDC(v18, isClickedClassScoreButton);
    v20 = v32->klass;
    v21 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_35;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_35:
      v23 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v24 = (ClassBoardBaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                      v32,
                                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_2213CDC(0, v25);
    if ( ClassBoardBaseEntity__IsGrand(v24, 0) && v26->fields.id != 10001 && ClassBoardBaseEntity__IsOpen(v26, 0) )
      goto LABEL_49;
  }
  v19 = 0;
LABEL_49:
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_54;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_54:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  if ( (v19 & 1) != 0 )
    goto LABEL_58;
  gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !gameObject )
LABEL_64:
    sub_2213CDC(gameObject, v10);
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)gameObject, 0);
}


void ClassBoardController__EndPlayReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionNotifyManager_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 *v20; // x22
  __int64 v21; // x8
  int v22; // w21
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w22
  __int64 v28; // x20
  System_Action_object__o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_object__o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Action_object__o *v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  ActionChain_o *v50; // x21
  __int64 v51; // x20
  System_Action_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_597462E & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__0__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__1__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__2__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__3__);
    sub_2213A60(&ClassBoardController___c__DisplayClass96_0_TypeInfo);
    byte_597462E = 1;
  }
  v5 = sub_2213CCC(ClassBoardController___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = squareModel;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)squareModel, v14, v15, v16, v17, v18, v19);
  IsNullOrEmpty = (MissionNotifyManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)this->fields.squareViewList,
                                              0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    this->fields.isPlayFullReleaseEffect = 0;
  }
  else
  {
    v20 = *(__int64 **)(v5 + 24);
    if ( !v20 )
      goto LABEL_28;
    v21 = *v20;
    v22 = (int)IsNullOrEmpty;
    v23 = *(unsigned __int16 *)(*v20 + 302);
    if ( *(_WORD *)(*v20 + 302) )
    {
      v24 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_11;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_11:
      v25 = sub_224BC3C(*(_QWORD *)(v5 + 24), IClassBoardSquareModel_TypeInfo, 1);
    }
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8));
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v26);
    IsNullOrEmpty = (MissionNotifyManager_o *)CondType__IsClassBoardSquareAllReleased(v27, 0);
    if ( ((this != 0) & ~v22) == 0 )
      goto LABEL_28;
    this->fields.isPlayFullReleaseEffect = (unsigned __int8)IsNullOrEmpty & 1;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      goto LABEL_19;
  }
  IsNullOrEmpty = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !IsNullOrEmpty )
    goto LABEL_28;
  MissionNotifyManager__EndPause(IsNullOrEmpty, 0);
LABEL_19:
  v28 = sub_2213B20(System_Action_Action____TypeInfo, 3);
  v29 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__0__,
    0);
  if ( !v28 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v28 + 32) = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__1__,
    0);
  if ( (*(_DWORD *)(v28 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  *(_QWORD *)(v28 + 40) = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 40), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__2__,
    0);
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_29;
  *(_QWORD *)(v28 + 48) = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 48), (int32_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v50, (System_Action_Action__array *)v28, 0);
  v51 = sub_2213B20(System_Action___TypeInfo, 1);
  v52 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__3__,
    0);
  if ( !v51 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v51 + 24) )
LABEL_29:
    sub_2213CE4(IsNullOrEmpty);
  *(_QWORD *)(v51 + 32) = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 32), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  if ( !v50
    || (IsNullOrEmpty = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                                    (ChainableActionBase_o *)v50,
                                                    (System_Action_array *)v51,
                                                    0)) == 0 )
  {
LABEL_28:
    sub_2213CDC(IsNullOrEmpty, v7);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)IsNullOrEmpty, 0);
}


void ClassBoardController__FinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_597462D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass95_0_TypeInfo);
    byte_597462D = 1;
  }
  v5 = sub_2213CCC(ClassBoardController___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = callback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__TouchEnable(v6, 0),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_12:
    sub_2213CDC(v6, v7);
  }
  ClassBoardUIController__SetCameraWorkBlock(v6, 0, 0);
  background = this->fields.background;
  if ( this->fields.isDirectlyGrandBoard )
  {
    cameraResetSec = 0.0;
    if ( !background )
      goto LABEL_12;
  }
  else
  {
    if ( !background )
      goto LABEL_12;
    cameraResetSec = background->fields.cameraResetSec;
  }
  cameraResetEasingType = background->fields.cameraResetEasingType;
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__0__,
    0);
  v25 = ClassBoardController__ResetClassBoardCameraCoroutine(this, cameraResetSec, cameraResetEasingType, v23, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v25, 0);
}


System_String_o *ClassBoardController__GetHeaderSpriteName(
        ClassBoardController_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5974625 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21628/*"img_txt_classscore_{0}"*/);
    byte_5974625 = 1;
  }
  v6 = id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format((System_String_o *)StringLiteral_21628/*"img_txt_classscore_{0}"*/, v4, 0);
}


void ClassBoardController__HideGrandBoard(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ClassBoardUIController_o *GrandSquareViewList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x1
  ClassBoardBackground_o *background; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x19
  SimpleAnimation_o *boardRootAnimation; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x5
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_597463E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass113_0__HideGrandBoard_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass113_0_TypeInfo);
    byte_597463E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  v5 = sub_2213CCC(ClassBoardController___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isClickedClassScoreButton;
  if ( this->fields.CurrentBoardType != 2 )
    return;
  GrandSquareViewList = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      this,
                                                      this->klass->vtable._4_get_classBoardUIController.method);
  if ( !GrandSquareViewList )
    goto LABEL_23;
  ClassBoardUIController__TouchDisable(GrandSquareViewList, 0);
  if ( !this->fields.grandUserSvtIds )
    goto LABEL_18;
  GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)GrandSquareViewList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  v23 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    if ( !v23.fields._current )
      sub_2213CDC(0, v14);
    ((void (__fastcall *)(Il2CppObject *, _QWORD))v23.fields._current->klass->vtable[8].methodPtr)(
      v23.fields._current,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandLineViewList;
  if ( !GrandSquareViewList )
LABEL_23:
    sub_2213CDC(GrandSquareViewList, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)GrandSquareViewList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
  {
    if ( !v22.fields._current )
      sub_2213CDC(0, v15);
    ClassBoardLine__PlayGrandToClassTransition((ClassBoardLine_o *)v22.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
LABEL_18:
  background = this->fields.background;
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass113_0__HideGrandBoard_b__0__,
    0);
  if ( !background )
    goto LABEL_23;
  ClassBoardBackground__PlayGrandReturnTransitionAnimation(
    background,
    boardRootAnimation,
    grandBoardRootAnimation,
    v19,
    0,
    v20);
}


void ClassBoardController__HideGrandBoardObj(ClassBoardController_o *this, bool isDispButton, const MethodInfo *method)
{
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  UnityEngine_GameObject_o *GrandBoardUnderMask; // x0
  UnityEngine_Component_o *GrandBoardObjectsParent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( GrandBoardRoot )
    UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardUnderMask = this->fields.GrandBoardUnderMask;
  if ( GrandBoardUnderMask )
    UnityEngine_GameObject__SetActive(GrandBoardUnderMask, 0, 0);
  GrandBoardObjectsParent = (UnityEngine_Component_o *)this->fields.GrandBoardObjectsParent;
  if ( GrandBoardObjectsParent )
  {
    gameObject = UnityEngine_Component__get_gameObject(GrandBoardObjectsParent, 0);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                             this,
                                             this->klass->vtable._4_get_classBoardUIController.method,
                                             method);
  if ( !gameObject
    || (ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)gameObject, isDispButton, 0),
        (gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                    this,
                                                    this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_11:
    sub_2213CDC(gameObject, v9);
  }
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)gameObject, 1, 0);
}


bool ClassBoardController__IsEmptyGrandServant(ClassBoardController_o *this, const MethodInfo *method)
{
  return BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0);
}


bool ClassBoardController__IsNeverSetGrandServant(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.grandUserSvtIds == 0;
}


bool ClassBoardController__IsTouchEnableUi(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  ClassBoardUIController_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_5974643 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974643 = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
    return 0;
  v5 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v5 )
    sub_2213CDC(0, v6);
  return ClassBoardUIController__get_IsTouchEnable(v5, 0);
}


void ClassBoardController__OnClickClassBoardResetButton(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Instance; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  CommonConfirmDialog_ClickDelegate_o *v24; // x24

  if ( (byte_5974642 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass117_0_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_14069/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_14070/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_14071/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/);
    byte_5974642 = 1;
  }
  v3 = sub_2213CCC(ClassBoardController___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Instance, v13, v14, v15, v16, v17, v18);
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v4 )
    goto LABEL_9;
  ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0);
  v20 = *(CommonUI_o **)(v3 + 16);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_14071/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/, 0);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_14070/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/, 0);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_14069/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/, 0);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__0__,
    0);
  if ( !v20 )
LABEL_9:
    sub_2213CDC(v4, v5);
  CommonUI__OpenConfirmDialog_37373184(
    v20,
    (System_String_o *)StringLiteral_113/*" "*/,
    v21,
    v22,
    v23,
    0,
    v24,
    0,
    30,
    0.0,
    36.0,
    1,
    0,
    0);
}


void ClassBoardController__OnClickClassBoardSelectButton(ClassBoardController_o *this, const MethodInfo *method)
{
  struct System_Action_o *toClassBoardSelectAction; // x8
  ClassBoardController_o *v3; // x19
  struct ClassBoardRootComponent_o *classBoardRootComponent; // x8

  toClassBoardSelectAction = this->fields.toClassBoardSelectAction;
  v3 = this;
  if ( toClassBoardSelectAction )
    this = (ClassBoardController_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))toClassBoardSelectAction->fields.invoke_impl)(
                                       toClassBoardSelectAction->fields.method_code,
                                       toClassBoardSelectAction->fields.method);
  classBoardRootComponent = v3->fields.classBoardRootComponent;
  if ( !classBoardRootComponent || (this = (ClassBoardController_o *)classBoardRootComponent->fields.pageSwitcher) == 0 )
    sub_2213CDC(this, method);
  ClassBoardPageSwitcher__ClearReturnSceneName((ClassBoardPageSwitcher_o *)this, 0);
}


void ClassBoardController__OnClickClassScoreButton(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_5974620 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__OnClickClassScoreButton_b__78_0__);
    byte_5974620 = 1;
  }
  if ( this->fields.CurrentBoardType == 2 )
  {
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController__OnClickClassScoreButton_b__78_0__, 0);
    ClassBoardController__SetOnClickBack(this, v4, v5);
    ClassBoardController__HideGrandBoard(this, 1, v6);
  }
  else
  {
    ClassBoardController__ShowGrandBoard(this, 1, v2);
  }
}


void ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  int32_t v8; // w20
  Il2CppObject *Instance; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x1

  if ( (byte_597461E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__OnClickEffectList_b__76_0__);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597461E = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    classStatisticsInfos = (ClassStatisticsInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !classStatisticsInfos )
      goto LABEL_18;
    if ( CommonUI__IsOpenClassBoardEffectListDialog((CommonUI_o *)classStatisticsInfos, 0) )
      return;
    v7 = 224;
    if ( this->fields.CurrentBoardType == 1 )
      v7 = 144;
    v8 = *(_DWORD *)((char *)&this->klass + v7);
    classStatisticsInfos = (ClassStatisticsInfo_array *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                          this,
                                                          this->klass->vtable._4_get_classBoardUIController.method);
    if ( !classStatisticsInfos )
      goto LABEL_18;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)classStatisticsInfos, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__76_0__, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0);
    if ( !Instance )
LABEL_18:
      sub_2213CDC(classStatisticsInfos, v6);
    CommonUI__OpenClassBoardEffectListDialog(
      (CommonUI_o *)Instance,
      0,
      v8,
      1,
      v10,
      0,
      0,
      0,
      0,
      classStatisticsInfos,
      0,
      0);
  }
}


void ClassBoardController__OnClickGrandScoreButton(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_597461F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__OnClickGrandScoreButton_b__77_0__);
    byte_597461F = 1;
  }
  if ( this->fields.CurrentBoardType == 1 )
  {
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController__OnClickGrandScoreButton_b__77_0__, 0);
    ClassBoardController__SetOnClickBack(this, v4, v5);
    ClassBoardController__ShowGrandBoard(this, 0, v6);
  }
  else
  {
    ClassBoardController__HideGrandBoard(this, 0, v2);
  }
}


void ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  ClassBoardUIController_o *v5; // x0
  __int64 v6; // x1
  int32_t CurrentBoardType; // w20
  System_Action_o *v8; // x0
  bool v9; // zf
  System_Action_o *v10; // x20
  int32_t v11; // w1
  System_Action_o *v12; // x2
  bool v13; // w3

  if ( (byte_597461C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__OnClickHelp_b__74_0__);
    sub_2213A60(&Method_ClassBoardController__OnClickHelp_b__74_1__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597461C = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v5 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                       this,
                                       this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v5 )
      sub_2213CDC(0, v6);
    ClassBoardUIController__SetCameraWorkBlock(v5, 1, 0);
    CurrentBoardType = this->fields.CurrentBoardType;
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v9 = CurrentBoardType == 1;
    v10 = v8;
    if ( v9 )
    {
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_0__, 0);
      v11 = 82;
      v12 = v10;
      v13 = 0;
    }
    else
    {
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_1__, 0);
      v11 = 100;
      v12 = v10;
      v13 = 1;
    }
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, v11, v12, v13, 0);
  }
}


void ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5974621 & 1) == 0 )
  {
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    byte_5974621 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_47A3058 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
    if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v5;
        p_offset += 2;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_8:
      v7 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(resourceCatalog, *(_QWORD *)(v7 + 8));
  }
}


void ClassBoardController__OnEndClickProcess(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  if ( !square
    || (square->fields._IsProcessingClick_k__BackingField = 0,
        (this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method,
                                            method)) == 0) )
  {
    sub_2213CDC(this, square);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0);
}


void ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Transform_o *boardObjectsParent; // x0
  UnityEngine_Transform_o *v13; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  __int64 v15; // x1
  ClassBoardController___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__92_0; // x22
  Il2CppObject *v20; // x23
  struct ClassBoardController___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  ClassBoardController___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  struct ClassBoardController___c_StaticFields *v32; // x9
  System_Func_object__int__o *_9__92_1; // x22
  Il2CppObject *v34; // x23
  struct ClassBoardController___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x0
  __int64 v44; // x1
  ClassBoardController___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x22
  struct ClassBoardController___c_StaticFields *v47; // x9
  System_Func_object__bool__o *_9__92_2; // x23
  Il2CppObject *v49; // x24
  struct ClassBoardController___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x1
  ClassBoardController___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  struct ClassBoardController___c_StaticFields *v61; // x9
  System_Func_object__int__o *_9__92_3; // x23
  Il2CppObject *v63; // x24
  struct ClassBoardController___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  const MethodInfo_38660DC *v72; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x22
  System_Object_array *v74; // x0
  __int64 v75; // x1
  ClassBoardController___c_c *v76; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  struct ClassBoardController___c_StaticFields *v78; // x9
  System_Func_object__object__o *_9__92_4; // x23
  Il2CppObject *v80; // x24
  struct ClassBoardController___c_StaticFields *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v89; // x0
  System_Object_array *v90; // x0
  __int64 v91; // x1
  ClassBoardController___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x21
  struct ClassBoardController___c_StaticFields *v94; // x9
  System_Func_object__object__o *_9__92_5; // x22
  Il2CppObject *v96; // x23
  struct ClassBoardController___c_StaticFields *v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v105; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v107; // x21
  const MethodInfo *v108; // x2
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597462A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_2213A60(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_2213A60(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_2213A60(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_0__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_1__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_2__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_3__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_4__);
    sub_2213A60(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_5__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__6__);
    sub_2213A60(&ClassBoardController___c__DisplayClass92_0_TypeInfo);
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_597462A = 1;
  }
  v3 = sub_2213CCC(ClassBoardController___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_52;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v109.fields.x = 0.0;
  v109.fields.y = 0.0;
  boardObjectsParent = this->fields.boardObjectsParent;
  v109.fields.z = 0.0;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 256;
  TransformHelper__SetLocalPosition(boardObjectsParent, v109, 0);
  v13 = this->fields.boardObjectsParent;
  if ( !byte_5969AE5 )
  {
    Instance = (Il2CppObject *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v13 )
    goto LABEL_52;
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v16 = ClassBoardController___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v15);
    v16 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__92_0 = (System_Func_object__bool__o *)static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__92_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__92_0,
      v20,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_0__,
      0);
    v21 = ClassBoardController___c_TypeInfo->static_fields;
    v21->__9__92_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__92_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__92_0, (int32_t)_9__92_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)_9__92_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v30 = ClassBoardController___c_TypeInfo;
  v31 = v28;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v29);
    v30 = ClassBoardController___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__92_1 = (System_Func_object__int__o *)v32->__9__92_1;
  if ( !_9__92_1 )
  {
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v29);
      v32 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__92_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_1,
      v34,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_1__,
      0);
    v35 = ClassBoardController___c_TypeInfo->static_fields;
    v35->__9__92_1 = (struct System_Func_ClassBoardLock__int__o *)_9__92_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__92_1, (int32_t)_9__92_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)_9__92_1,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  v43 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.GrandSquareViewList,
          (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v45 = ClassBoardController___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v44);
    v45 = ClassBoardController___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__92_2 = (System_Func_object__bool__o *)v47->__9__92_2;
  if ( !_9__92_2 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v44);
      v47 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__92_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__92_2,
      v49,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_2__,
      0);
    v50 = ClassBoardController___c_TypeInfo->static_fields;
    v50->__9__92_2 = (struct System_Func_ClassBoardLock__bool__o *)_9__92_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->__9__92_2, (int32_t)_9__92_2, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__Where_object_(
          v46,
          (System_Func_TSource__bool__o *)_9__92_2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v59 = ClassBoardController___c_TypeInfo;
  v60 = v57;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v58);
    v59 = ClassBoardController___c_TypeInfo;
  }
  v61 = v59->static_fields;
  _9__92_3 = (System_Func_object__int__o *)v61->__9__92_3;
  if ( !_9__92_3 )
  {
    if ( !*(&v59->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v59, v58);
      v61 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__92_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_3,
      v63,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_3__,
      0);
    v64 = ClassBoardController___c_TypeInfo->static_fields;
    v64->__9__92_3 = (struct System_Func_ClassBoardLock__int__o *)_9__92_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->__9__92_3, (int32_t)_9__92_3, v65, v66, v67, v68, v69, v70);
  }
  v71 = System_Linq_Enumerable__OrderBy_object__int_(
          v60,
          (System_Func_TSource__TKey__o *)_9__92_3,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  v72 = (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ClassBoardLock___;
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)v71;
  *(_BYTE *)(v3 + 16) = 0;
  if ( System_Linq_Enumerable__Any_object_(v42, v72) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v74 = System_Linq_Enumerable__ToArray_object_(
            v42,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v76 = ClassBoardController___c_TypeInfo;
    v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
    if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v75);
      v76 = ClassBoardController___c_TypeInfo;
    }
    v78 = v76->static_fields;
    _9__92_4 = (System_Func_object__object__o *)v78->__9__92_4;
    if ( !_9__92_4 )
    {
      if ( !*(&v76->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v76, v75);
        v78 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v80 = (Il2CppObject *)v78->__9;
      _9__92_4 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__92_4,
        v80,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_4__,
        0);
      v81 = ClassBoardController___c_TypeInfo->static_fields;
      v81->__9__92_4 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__92_4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v81->__9__92_4, (int32_t)_9__92_4, v82, v83, v84, v85, v86, v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v77,
                                                                 (System_Func_TSource__TResult__o *)_9__92_4,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v89 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v88,
                                                                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v89, 0);
  }
  if ( System_Linq_Enumerable__Any_object_(
         v73,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v90 = System_Linq_Enumerable__ToArray_object_(
            v73,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v92 = ClassBoardController___c_TypeInfo;
    v93 = (System_Collections_Generic_IEnumerable_TSource__o *)v90;
    if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v91);
      v92 = ClassBoardController___c_TypeInfo;
    }
    v94 = v92->static_fields;
    _9__92_5 = (System_Func_object__object__o *)v94->__9__92_5;
    if ( !_9__92_5 )
    {
      if ( !*(&v92->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v92, v91);
        v94 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v96 = (Il2CppObject *)v94->__9;
      _9__92_5 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__92_5,
        v96,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_5__,
        0);
      v97 = ClassBoardController___c_TypeInfo->static_fields;
      v97->__9__92_5 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__92_5;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v97->__9__92_5,
        (int32_t)_9__92_5,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    v104 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  v93,
                                                                  (System_Func_TSource__TResult__o *)_9__92_5,
                                                                  (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v105 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                       v104,
                                                                                       (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v105, 0);
  }
  effectController = this->fields.effectController;
  v107 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v107,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__6__,
    0);
  if ( !effectController )
LABEL_52:
    sub_2213CDC(Instance, v5);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v107, v108);
}


void ClassBoardController__PlayDirectlyGrandBoardOpenEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_597462B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__93_0__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_597462B = 1;
  }
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__TouchDisable(Instance, 0);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  if ( this->fields.isPlayEffectToGrandBoard )
  {
    Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                             this,
                                             this->klass->vtable._4_get_classBoardUIController.method);
    if ( Instance )
    {
      Instance = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        MainMenuBar__setMenuActive(0, 0, 0);
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_2213CDC(Instance, v4);
  }
  if ( this->fields.isDirectlyGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, 0, v5);
LABEL_12:
  effectController = this->fields.effectController;
  this->fields.isFinishedClassScoreAnimation = 0;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__93_0__,
    0);
  if ( !effectController )
    goto LABEL_14;
  ClassBoardEffectController__SkipClassBoardStartEffect(effectController, v7, v8);
  started = ClassBoardController__WaitFinishedClassBoardStartEffect(this, 0, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayExClassGrandScoreRelease(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597463D & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__PlayExClassGrandScoreRelease_d__112_TypeInfo);
    byte_597463D = 1;
  }
  v3 = sub_2213CCC(ClassBoardController__PlayExClassGrandScoreRelease_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__PlayFullReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Object_o *ClassBoardRoot; // x22
  __int64 *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  IClassBoardSquareModel_c **v33; // x10
  __int64 v34; // x0
  struct ClassBoardBackground_o *background; // x8
  float fullReleaseEffectCameraResetSec; // s8
  int32_t fullReleaseEffectCameraEasingType; // w21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_5974631 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass99_0__PlayFullReleaseEffect_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass99_0_TypeInfo);
    byte_5974631 = 1;
  }
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass99_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = squareModel;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)squareModel, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  if ( !this->fields.isPlayFullReleaseEffect )
    goto LABEL_8;
  ClassBoardRoot = (UnityEngine_Object_o *)this->fields.ClassBoardRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Equality(ClassBoardRoot, 0, 0) )
  {
LABEL_8:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
    return;
  }
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v8, 1, 0),
        (v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                this,
                this->klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)v8, 0), (v30 = *(__int64 **)(v7 + 16)) == 0) )
  {
LABEL_24:
    sub_2213CDC(v8, v9);
  }
  v31 = *v30;
  v32 = *(unsigned __int16 *)(*v30 + 302);
  if ( *(_WORD *)(*v30 + 302) )
  {
    v33 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_16;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 12) + 312;
  }
  else
  {
LABEL_16:
    v34 = sub_224BC3C(*(_QWORD *)(v7 + 16), IClassBoardSquareModel_TypeInfo, 12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  background = this->fields.background;
  if ( (v8 & 1) != 0 )
  {
    fullReleaseEffectCameraResetSec = 0.0;
    if ( !background )
      goto LABEL_24;
  }
  else
  {
    if ( !background )
      goto LABEL_24;
    fullReleaseEffectCameraResetSec = background->fields.fullReleaseEffectCameraResetSec;
  }
  fullReleaseEffectCameraEasingType = background->fields.fullReleaseEffectCameraEasingType;
  v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass99_0__PlayFullReleaseEffect_b__0__,
    0);
  v40 = ClassBoardController__ResetClassBoardCameraCoroutine(
          this,
          fullReleaseEffectCameraResetSec,
          fullReleaseEffectCameraEasingType,
          v38,
          v39);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v40, 0);
}


void ClassBoardController__PlayGrandExClassReleaseEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_597463A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController_DispGrandScoreAddClassDialog__);
    byte_597463A = 1;
  }
  background = this->fields.background;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController_DispGrandScoreAddClassDialog__, 0);
  if ( !background )
    sub_2213CDC(v5, v6);
  ClassBoardBackground__PlayStartGrandExClassReleaseEffectPlayer(background, v4, v7);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayGrandSquareAndLine(
        ClassBoardController_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5974638 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__PlayGrandSquareAndLine_d__107_TypeInfo);
    byte_5974638 = 1;
  }
  v5 = sub_2213CCC(ClassBoardController__PlayGrandSquareAndLine_d__107_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_IEnumerator_o *)v5;
  *(float *)(v5 + 32) = waitTime;
  return result;
}


void ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v24; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v26; // x0
  bool v27; // zf
  __int64 v28; // x8
  ClassBoardEffectController_o *v29; // x22
  float x; // s9
  float y; // s8
  float z; // s10
  float v33; // s12
  float v34; // s11
  float v35; // s13
  System_Action_o *v36; // x19
  const MethodInfo *v37; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974632 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass100_0__PlayMoveCamera_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass100_0_TypeInfo);
    byte_5974632 = 1;
  }
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__TouchDisable(transform, 0);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__SetCameraWorkBlock(transform, 1, 0);
  if ( !square )
    goto LABEL_20;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_20;
  klass = SquareModel_k__BackingField->klass;
  v24 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_12;
    }
    v26 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_12:
    v26 = sub_224BC3C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v27 = (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v26)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v26 + 8)) == this->fields.grandBaseId;
  v28 = 128;
  if ( v27 )
    v28 = 264;
  v29 = *(ClassBoardEffectController_o **)((char *)&this->klass + v28);
  transform = (ClassBoardUIController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0);
  if ( !transform )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_20;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v33 = localScale.fields.x;
  v34 = localScale.fields.y;
  v35 = localScale.fields.z;
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass100_0__PlayMoveCamera_b__0__,
    0);
  if ( !v29 )
LABEL_20:
    sub_2213CDC(transform, v9);
  v40.fields.x = x * v33;
  v40.fields.z = z * v35;
  v40.fields.y = y * v34;
  ClassBoardEffectController__PlaySelectMoveCamera(v29, v40, v36, v37);
}


void ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x23
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardUIController_o *v24; // x22
  __int64 v25; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v27; // x0
  struct IClassBoardSquareModel_o *v28; // x22
  IClassBoardSquareModel_c *v29; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **v31; // x10
  __int64 v32; // x0
  bool v33; // zf
  __int64 v34; // x8
  ClassBoardEffectController_o *v35; // x20
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3

  if ( (byte_5974629 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass91_0__PlayReleaseEffect_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass91_0_TypeInfo);
    byte_5974629 = 1;
  }
  v7 = sub_2213CCC(ClassBoardController___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)endAct, v16, v17, v18, v19, v20, v21);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_27;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_27;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !square )
    goto LABEL_27;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_27;
  klass = SquareModel_k__BackingField->klass;
  v24 = (ClassBoardUIController_o *)Instance;
  v25 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_13;
    }
    v27 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_13:
    v27 = sub_224BC3C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  Instance = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v27)(
               SquareModel_k__BackingField,
               *(_QWORD *)(v27 + 8));
  if ( !v24 )
    goto LABEL_27;
  ClassBoardUIController__UpdateItemList(v24, Instance & 1, 0);
  v28 = square->fields._SquareModel_k__BackingField;
  if ( !v28 )
    goto LABEL_27;
  v29 = v28->klass;
  v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
  if ( *(_WORD *)&v28->klass->_2.rank )
  {
    v31 = (IClassBoardSquareModel_c **)&v29->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_21;
    }
    v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1];
  }
  else
  {
LABEL_21:
    v32 = sub_224BC3C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v33 = (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) == this->fields.grandBaseId;
  v34 = 128;
  if ( v33 )
    v34 = 264;
  v35 = *(ClassBoardEffectController_o **)((char *)&this->klass + v34);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass91_0__PlayReleaseEffect_b__0__,
    0);
  if ( !v35 )
LABEL_27:
    sub_2213CDC(Instance, v9);
  ClassBoardEffectController__PlayRelease(v35, square, v36, v37);
}


void ClassBoardController__PlayTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct ClassBoardBackground_o *v14; // x8
  float *p_grandScoreSignEffectStartSecDirectly; // x8
  struct ClassBoardBackground_o *background; // x8
  float v17; // s8
  SimpleAnimation_o *boardRootAnimation; // x22
  SimpleAnimation_o *grandBoardRootAnimation; // x23
  ClassBoardBackground_o *v20; // x21
  System_Action_o *v21; // x24
  const MethodInfo *v22; // x5
  bool v23; // w4
  const MethodInfo *v24; // x1
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_5974637 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass106_0__PlayTransitionAnimation_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass106_0_TypeInfo);
    byte_5974637 = 1;
  }
  v5 = sub_2213CCC(ClassBoardController___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  GrandBoardRoot = this->fields.GrandBoardRoot;
  *(_BYTE *)(v5 + 24) = isClickedClassScoreButton;
  this->fields.CurrentBoardType = 2;
  if ( !GrandBoardRoot )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard )
  {
    background = this->fields.background;
    if ( !background )
      goto LABEL_18;
    p_grandScoreSignEffectStartSecDirectly = &background->fields.grandScoreSignEffectStartSecDirectly;
  }
  else
  {
    v14 = this->fields.background;
    if ( !v14 )
      goto LABEL_18;
    p_grandScoreSignEffectStartSecDirectly = &v14->fields.grandScoreSignEffectStartSec;
  }
  v17 = *p_grandScoreSignEffectStartSecDirectly;
  GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                 this,
                                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !GrandBoardRoot
    || (ClassBoardFigureController__SetUIPanelAlpha((ClassBoardFigureController_o *)GrandBoardRoot, 0.0, 0),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._7_get_ClassBoardFigureController.method)) == 0) )
  {
LABEL_18:
    sub_2213CDC(GrandBoardRoot, v7);
  }
  ClassBoardFigureController__ChangeDispServantFigure((ClassBoardFigureController_o *)GrandBoardRoot, 0, 0);
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v20 = this->fields.background;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass106_0__PlayTransitionAnimation_b__0__,
    0);
  if ( !this->fields.isDirectlyGrandBoard )
  {
    v23 = 0;
    if ( v20 )
      goto LABEL_16;
    goto LABEL_18;
  }
  v23 = !this->fields.isPlayEffectToGrandBoard;
  if ( !v20 )
    goto LABEL_18;
LABEL_16:
  ClassBoardBackground__PlayGrandTransitionAnimation(v20, boardRootAnimation, grandBoardRootAnimation, v21, v23, v22);
  v25 = ClassBoardController__PlayGrandSquareAndLine(this, v17, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v25, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__RefreshUi(
        ClassBoardController_o *this,
        int32_t currentBaseId,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  int v7; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  const MethodInfo *v11; // x2
  unsigned __int8 v12; // w20
  Il2CppObject *v13; // x22
  System_String_o *HeaderSpriteName; // x23
  ClassBoardUIController_o *v15; // x24
  __int64 v16; // x1
  System_Collections_ICollection_o *grandUserSvtIds; // x0
  LocalizationManager_c *v18; // x0
  __int64 *v19; // x23
  System_String_o *v20; // x23
  ClassBoardUIController_o *v21; // x24
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x25
  ClassBoardUIController_o *v23; // x19
  Il2CppClass *klass; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5974634 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7288/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/);
    sub_2213A60(&StringLiteral_7287/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/);
    sub_2213A60(&StringLiteral_21672/*"img_txt_grandscore"*/);
    sub_2213A60(&StringLiteral_3538/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_7286/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_5974634 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&currentBaseId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v10 = Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    currentBaseId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_56;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardBaseEntity__IsGrand(
                                                                  (ClassBoardBaseEntity_o *)entity,
                                                                  0);
  v12 = (unsigned __int8)Master_object;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_56;
    v13 = DataMasterBase_object__object__int___GetEntity(
            v10,
            (int32_t)entity[4].monitor,
            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    HeaderSpriteName = (System_String_o *)StringLiteral_21672/*"img_txt_grandscore"*/;
  }
  else
  {
    HeaderSpriteName = ClassBoardController__GetHeaderSpriteName(
                         (ClassBoardController_o *)Master_object,
                         currentBaseId,
                         v11);
    v13 = 0;
  }
  v15 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !v15 )
LABEL_56:
    sub_2213CDC(Master_object, v9);
  ClassBoardUIController__SetHeaderTitle(v15, (AtlasManagerUnit_o *)Master_object, HeaderSpriteName, 0);
  if ( (v12 & 1) == 0 )
    goto LABEL_18;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
  {
    v18 = LocalizationManager_TypeInfo;
    v19 = &StringLiteral_7286/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_20;
    goto LABEL_19;
  }
  grandUserSvtIds = (System_Collections_ICollection_o *)this->fields.grandUserSvtIds;
  if ( !grandUserSvtIds )
  {
    v18 = LocalizationManager_TypeInfo;
    v19 = &StringLiteral_7288/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( BasicHelper__IsNullOrEmpty(grandUserSvtIds, 0) )
  {
    v18 = LocalizationManager_TypeInfo;
    v19 = &StringLiteral_7287/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_19;
  }
  else
  {
LABEL_18:
    v18 = LocalizationManager_TypeInfo;
    v19 = &StringLiteral_3538/*"CLASS_BOARD_HEADER_MESSAGE"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_19:
      j_il2cpp_runtime_class_init_0(v18, v16);
  }
LABEL_20:
  v20 = LocalizationManager__Get((System_String_o *)*v19, 0);
  v21 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)this->fields.grandUserSvtIds,
                                                                  0);
  if ( !v21 )
    goto LABEL_56;
  ClassBoardUIController__SetHeaderMessage(
    v21,
    UiAtlasManagerUnit,
    v20,
    v12 & 1,
    ((unsigned __int8)Master_object & 1) == 0,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_56;
  ClassBoardUIController__ActivateGrandScoreButton(
    (ClassBoardUIController_o *)Master_object,
    ((v12 | isClickedClassScoreButton) & 1) == 0,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_56;
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)Master_object, (v12 ^ 1) & 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_56;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)Master_object, v12 & 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( (v12 & 1) != 0
    && (this->fields.isDirectlyGrandBoard || isClickedClassScoreButton)
    && !this->fields.isPlayEffectToGrandBoard )
  {
    v9 = this->fields.directlyBackAction != 0;
    if ( !Master_object )
      goto LABEL_56;
  }
  else
  {
    v9 = 0;
    if ( !Master_object )
      goto LABEL_56;
  }
  ClassBoardUIController__ActivateClassScoreButton((ClassBoardUIController_o *)Master_object, v9, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_56;
  ClassBoardUIController__ActivateClassBoardSelectButton(
    (ClassBoardUIController_o *)Master_object,
    (v12 ^ 1) & isClickedClassScoreButton & 1,
    0);
  if ( ((v12 ^ 1) & isClickedClassScoreButton & 1) != 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                    this,
                                                                    this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Master_object )
      goto LABEL_56;
    ClassBoardUIController__ChangeDisplayBackButtonToGrandScore((ClassBoardUIController_o *)Master_object, 0);
    goto LABEL_50;
  }
  if ( (v12 & 1) == 0 )
    goto LABEL_48;
  if ( (this->fields.isDirectlyGrandBoard || isClickedClassScoreButton) && !this->fields.isPlayEffectToGrandBoard )
  {
    if ( !v13 || this->fields.directlyBackAction )
      goto LABEL_48;
  }
  else if ( !v13 )
  {
    goto LABEL_48;
  }
  if ( ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)v13, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                    this,
                                                                    this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Master_object )
      goto LABEL_56;
    ClassBoardUIController__ChangeDisplayBackButtonToClassScore((ClassBoardUIController_o *)Master_object, 0);
    goto LABEL_50;
  }
LABEL_48:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_56;
  ClassBoardUIController__ChangeDisplayBackButtonClose((ClassBoardUIController_o *)Master_object, 0);
LABEL_50:
  if ( !entity )
    goto LABEL_56;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity )
    goto LABEL_56;
  v23 = (ClassBoardUIController_o *)Master_object;
  klass = entity[4].klass;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !v23 )
    goto LABEL_56;
  ClassBoardUIController__SetItemList(v23, (System_Int32_array *)klass, (AtlasManagerUnit_o *)Master_object, v12 & 1, 0);
}


void ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *boardObjectsParent; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  __int64 v15; // x1
  ClassBoardController___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__70_0; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardController___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v30; // w9
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  __int64 v32; // x1
  ClassBoardController___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x20
  struct ClassBoardController___c_StaticFields *v35; // x9
  System_Action_object__o *_9__70_1; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardController___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v46; // w2
  int v47; // w9
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  __int64 v49; // x1
  ClassBoardController___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_T__o *v51; // x20
  struct ClassBoardController___c_StaticFields *v52; // x9
  System_Action_object__o *_9__70_2; // x21
  Il2CppObject *v54; // x22
  struct ClassBoardController___c_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x8
  int32_t v63; // w2
  int v64; // w9
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  __int64 v66; // x1
  ClassBoardController___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_T__o *v68; // x20
  struct ClassBoardController___c_StaticFields *v69; // x9
  System_Action_object__o *_9__70_3; // x21
  Il2CppObject *v71; // x22
  struct ClassBoardController___c_StaticFields *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x8
  System_String_o *v85; // x2
  int v86; // w9
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597461A & 1) == 0 )
  {
    sub_2213A60(&System_Action_ClassBoardSquare__TypeInfo);
    sub_2213A60(&System_Action_ClassBoardLine__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_2213A60(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_2213A60(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__Release_b__70_0__);
    sub_2213A60(&Method_ClassBoardController___c__Release_b__70_1__);
    sub_2213A60(&Method_ClassBoardController___c__Release_b__70_2__);
    sub_2213A60(&Method_ClassBoardController___c__Release_b__70_3__);
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_597461A = 1;
  }
  v99.fields.x = 0.0;
  v99.fields.y = 0.0;
  v99.fields.z = 0.0;
  TransformHelper__SetLocalPosition(this->fields.boardObjectsParent, v99, 0);
  boardObjectsParent = this->fields.boardObjectsParent;
  if ( !byte_5969AE5 )
  {
    v3 = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !boardObjectsParent )
    goto LABEL_59;
  UnityEngine_Transform__set_localScale(boardObjectsParent, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v3 )
      goto LABEL_59;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                  this,
                                  this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                      this,
                                      this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( !v3 )
      goto LABEL_59;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    UnityEngine_Object__Destroy_83459800(v13, 0);
  }
  v14 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v16 = ClassBoardController___c_TypeInfo;
  v17 = v14;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v15);
    v16 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__70_0 = (System_Action_object__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_0, v20, Method_ClassBoardController___c__Release_b__70_0__, 0);
    v21 = ClassBoardController___c_TypeInfo->static_fields;
    v21->__9__70_0 = (struct System_Action_ClassBoardSquare__o *)_9__70_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__70_0, (int32_t)_9__70_0, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_59;
  size = squareViewList->fields._size;
  v30 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0);
  v31 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v33 = ClassBoardController___c_TypeInfo;
  v34 = v31;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v32);
    v33 = ClassBoardController___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__70_1 = (System_Action_object__o *)v35->__9__70_1;
  if ( !_9__70_1 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v32);
      v35 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__70_1 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_1, v37, Method_ClassBoardController___c__Release_b__70_1__, 0);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__70_1 = (struct System_Action_ClassBoardLine__o *)_9__70_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__70_1, (int32_t)_9__70_1, v39, v40, v41, v42, v43, v44);
  }
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)_9__70_1,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_59;
  v46 = lineViewList->fields._size;
  v47 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v47;
  if ( v46 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v46, 0);
  v48 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandSquareViewList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v50 = ClassBoardController___c_TypeInfo;
  v51 = v48;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v49);
    v50 = ClassBoardController___c_TypeInfo;
  }
  v52 = v50->static_fields;
  _9__70_2 = (System_Action_object__o *)v52->__9__70_2;
  if ( !_9__70_2 )
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, v49);
      v52 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__70_2 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_2, v54, Method_ClassBoardController___c__Release_b__70_2__, 0);
    v55 = ClassBoardController___c_TypeInfo->static_fields;
    v55->__9__70_2 = (struct System_Action_ClassBoardSquare__o *)_9__70_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v55->__9__70_2, (int32_t)_9__70_2, v56, v57, v58, v59, v60, v61);
  }
  BasicHelper__ForEach_object_(
    v51,
    (System_Action_T__o *)_9__70_2,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  GrandSquareViewList = this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_59;
  v63 = GrandSquareViewList->fields._size;
  v64 = GrandSquareViewList->fields._version + 1;
  GrandSquareViewList->fields._size = 0;
  GrandSquareViewList->fields._version = v64;
  if ( v63 >= 1 )
    System_Array__Clear((System_Array_o *)GrandSquareViewList->fields._items, 0, v63, 0);
  v65 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandLineViewList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v67 = ClassBoardController___c_TypeInfo;
  v68 = v65;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v66);
    v67 = ClassBoardController___c_TypeInfo;
  }
  v69 = v67->static_fields;
  _9__70_3 = (System_Action_object__o *)v69->__9__70_3;
  if ( !_9__70_3 )
  {
    if ( !*(&v67->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v67, v66);
      v69 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__70_3 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_3, v71, Method_ClassBoardController___c__Release_b__70_3__, 0);
    v72 = ClassBoardController___c_TypeInfo->static_fields;
    v72->__9__70_3 = (struct System_Action_ClassBoardLine__o *)_9__70_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->__9__70_3, (int32_t)_9__70_3, v73, v74, v75, v76, v77, v78);
  }
  BasicHelper__ForEach_object_(
    v68,
    (System_Action_T__o *)_9__70_3,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassBoardLine___);
  GrandLineViewList = this->fields.GrandLineViewList;
  if ( !GrandLineViewList )
    goto LABEL_59;
  v85 = (System_String_o *)(unsigned int)GrandLineViewList->fields._size;
  v86 = GrandLineViewList->fields._version + 1;
  GrandLineViewList->fields._size = 0;
  GrandLineViewList->fields._version = v86;
  if ( (int)v85 >= 1 )
    System_Array__Clear((System_Array_o *)GrandLineViewList->fields._items, 0, (int32_t)v85, 0);
  this->fields.effectController = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectController, 0, v85, v79, v80, v81, v82, v83);
  this->fields.GrandEffectController = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.GrandEffectController, 0, v87, v88, v89, v90, v91, v92);
  this->fields.background = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.background, 0, v93, v94, v95, v96, v97, v98);
  v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._6_get_builder.methodPtr)(
                                    this,
                                    this->klass->vtable._6_get_builder.method);
  if ( !v3
    || (ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v3, 0),
        (v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._9_get_GrandBuilder.methodPtr)(
                                           this,
                                           this->klass->vtable._9_get_GrandBuilder.method)) == 0) )
  {
LABEL_59:
    sub_2213CDC(v3, v4);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v3, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__ResetClassBoardCameraCoroutine(
        ClassBoardController_o *this,
        float sec,
        int32_t easingType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5974636 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__ResetClassBoardCameraCoroutine_d__105_TypeInfo);
    byte_5974636 = 1;
  }
  v9 = sub_2213CCC(ClassBoardController__ResetClassBoardCameraCoroutine_d__105_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v9 + 40) = sec;
  *(_DWORD *)(v9 + 44) = easingType;
  *(_QWORD *)(v9 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
}


void ClassBoardController__SetDirectlyBackAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.directlyBackAction = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.directlyBackAction,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__SetIsGrandScoreDialogOpen(ClassBoardController_o *this, const MethodInfo *method)
{
  this->fields.isGrandScoreReleaseDialogOpen = 1;
}


void ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  MissionNaviTransitionBoardItem_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_597461B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597461B = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    v7 = (MissionNaviTransitionBoardItem_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                               this,
                                               this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v7 )
      sub_2213CDC(0, v8);
    v7[1].klass = (MissionNaviTransitionBoardItem_c *)action;
    sub_2213A04(v7 + 1, (int32_t)action, v9, v10, v11, v12, v13, v14);
  }
}


void ClassBoardController__SetOnClickToGrandServantList(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_597461D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597461D = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    v7 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
           this,
           this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v7 )
      goto LABEL_14;
    *(_QWORD *)(v7 + 232) = action;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 232), (int32_t)action, v9, v10, v11, v12, v13, v14);
  }
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                  this,
                                  this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    v7 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
           this,
           this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 160) = action;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 160), (int32_t)action, v17, v18, v19, v20, v21, v22);
      return;
    }
LABEL_14:
    sub_2213CDC(v7, v8);
  }
}


void ClassBoardController__SetToClassBoardSelectAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.toClassBoardSelectAction = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.toClassBoardSelectAction,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__Setup(
        ClassBoardController_o *this,
        IClassBoardResourceCatalog_o *setResourceCatalog,
        ClassBoardBackground_o *classBoardBackground,
        int32_t baseId,
        int32_t iconId,
        bool isDirectlyMoveGrandBoard,
        bool isPlayEffectGrandBoard,
        const MethodInfo *method)
{
  bool v14; // w27
  bool v15; // w26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  char v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo_3820CA8 *v22; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  char v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v32; // x2
  UnityEngine_Texture_o *targetTexture; // x24
  const MethodInfo_45E9150 *v34; // x2
  MapCamera_o *v35; // x24
  __int64 v36; // x1
  BalanceConfig_c *v37; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v40; // x3
  System_Action_o *v41; // x24
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  char v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  struct UnityEngine_GameObject_o *boardRoot; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  char v54; // w5
  bool v55; // w6
  bool v56; // w7
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x23
  MapCamera_o *v61; // x24
  ClassBoardEffectController_o *v62; // x25
  const MethodInfo *v63; // x5
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  char v67; // w5
  bool v68; // w6
  bool v69; // w7
  const MethodInfo *v70; // x2
  __int64 v71; // x9
  __int64 v72; // x10
  System_Nullable_Vector3__o v73; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v75; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isDirectlyMoveGrandBoard;
  v15 = isPlayEffectGrandBoard;
  if ( (byte_5974617 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_ClassBoardController_ShowBoard__);
    sub_2213A60(&ClassBoardEffectController_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&StringLiteral_13473/*"Sony SO-41B"*/);
    byte_5974617 = 1;
  }
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (System_String_o *)classBoardBackground,
    *(System_String_o **)&baseId,
    iconId,
    isDirectlyMoveGrandBoard,
    isPlayEffectGrandBoard,
    (bool)method);
  this->fields.background = classBoardBackground;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.background,
    (int32_t)classBoardBackground,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___;
  this->fields.isPlayFullReleaseEffect = 0;
  this->fields.CurrentBoardType = 1;
  this->fields.isDirectlyGrandBoard = v14;
  this->fields.isPlayEffectToGrandBoard = v15;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v22);
  this->fields.classBoardRootComponent = (struct ClassBoardRootComponent_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardRootComponent,
    (int32_t)Component_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__Init(mapCamera, 0);
  if ( !classBoardBackground )
    goto LABEL_24;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v32);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.earthAccessoriesObject;
  if ( !mapCamera )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapCamera, 1, 0);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.currentCamera;
  if ( !mapCamera )
    goto LABEL_24;
  targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)mapCamera, 0);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0);
  if ( (int)mapCamera <= 4096 )
    goto LABEL_10;
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_deviceModel(0);
  if ( !mapCamera )
    goto LABEL_24;
  mapCamera = (MapCamera_o *)System_String__Equals_75686512(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_13473/*"Sony SO-41B"*/,
                               0);
  if ( ((unsigned __int8)mapCamera & 1) != 0 )
  {
LABEL_10:
    if ( !targetTexture )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, const MethodInfo *))targetTexture->klass->vtable._5_set_width.methodPtr)(
      targetTexture,
      4096,
      targetTexture->klass->vtable._5_set_width.method);
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, const MethodInfo *))targetTexture->klass->vtable._7_set_height.methodPtr)(
      targetTexture,
      2367,
      targetTexture->klass->vtable._7_set_height.method);
  }
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__SetMapTexture(mapCamera, targetTexture, 2491, 1440, 0);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__SetEnable(mapCamera, 1, 0);
  v35 = this->fields.mapCamera;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  *(_QWORD *)&v75.fields.hasValue = &v73;
  *(_QWORD *)&v75.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v73.fields.hasValue = 0;
  *(_QWORD *)&v73.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v75, zeroVector, v34);
  v37 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36);
    v37 = BalanceConfig_TypeInfo;
  }
  static_fields = v37->static_fields;
  p_size = (System_Nullable_float__o)&size;
  size = 0;
  System_Nullable_float____ctor(
    p_size,
    static_fields->ClassBoard2DCameraDefaultSize,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  if ( !v35 )
    goto LABEL_24;
  v40 = size;
  MapCamera__StartAutoWork(v35, 0.0, v73, v40, 0, 0, 0);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0);
  classBoardBackground->fields.showBoardCallback = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&classBoardBackground->fields.showBoardCallback,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v48);
  ClassBoardBackground__SetBoardParentAnimation(
    classBoardBackground,
    this->fields.boardParentAnimation,
    this->fields.isPlayEffectToGrandBoard,
    v49);
  boardRoot = this->fields.boardRoot;
  classBoardBackground->fields.boardRoot = boardRoot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&classBoardBackground->fields.boardRoot,
    (int32_t)boardRoot,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._6_get_builder.methodPtr)(
                               this,
                               this->klass->vtable._6_get_builder.method);
  if ( !mapCamera )
LABEL_24:
    sub_2213CDC(mapCamera, v30);
  ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0);
  ClassBoardController__CreateViews(this, 0, v57);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
    this,
    0,
    this->klass->vtable._11_SetupSquareOnClickListener.method);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._10_SetupClassBoardUIController.methodPtr)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._10_SetupClassBoardUIController.method);
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v58);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v61 = this->fields.mapCamera;
  v62 = (ClassBoardEffectController_o *)sub_2213CCC(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v62,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v61,
    classBoardBackground,
    v63);
  this->fields.effectController = v62;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectController,
    (int32_t)v62,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  ClassBoardController__SetupGrandClassBoard(this, classBoardBackground, v70);
  v71 = 528;
  if ( isDirectlyMoveGrandBoard )
  {
    v71 = 544;
    v72 = 536;
  }
  else
  {
    v72 = 520;
  }
  (*(void (__fastcall **)(ClassBoardController_o *, _QWORD))((char *)&this->klass->_1.image + v72))(
    this,
    *(void **)((char *)&this->klass->_1.image + v71));
}


void ClassBoardController__SetupClassBoardFigureController(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardController_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  Il2CppObject *effectController; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  bool IsNullOrEmpty; // w21
  ClassBoardController_o *v18; // x20

  v2 = this;
  if ( (byte_5974641 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
    this = (ClassBoardController_o *)sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    byte_5974641 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                     resourceCatalog,
                                     *(_QWORD *)(v7 + 8));
  if ( !this )
    goto LABEL_19;
  if ( !v2->fields.GrandBoardRoot )
    goto LABEL_19;
  effectController = (Il2CppObject *)this->fields.effectController;
  transform = UnityEngine_GameObject__get_transform(v2->fields.GrandBoardRoot, 0);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v2,
                    effectController,
                    transform,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, const MethodInfo *))v2->klass->vtable._8_set_ClassBoardFigureController.methodPtr)(
    v2,
    Object_object,
    v2->klass->vtable._8_set_ClassBoardFigureController.method);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                     v2,
                                     v2->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !this )
    goto LABEL_19;
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareViewList,
    (int32_t)v2,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->fields.grandUserSvtIds, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                     v2,
                                     v2->klass->vtable._7_get_ClassBoardFigureController.method);
  v18 = this;
  if ( IsNullOrEmpty )
  {
    this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( v18 )
    {
      ClassBoardFigureController__SetServantSelectSprite(
        (ClassBoardFigureController_o *)v18,
        (AtlasManagerUnit_o *)this,
        0);
      this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                         v2,
                                         v2->klass->vtable._7_get_ClassBoardFigureController.method);
      if ( this )
      {
        ClassBoardFigureController__SetServantSelectObj(
          (ClassBoardFigureController_o *)this,
          v2->fields.baseId,
          v2->fields.grandUserSvtIds != 0,
          0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_19;
  ClassBoardFigureController__SetSvtFigure((ClassBoardFigureController_o *)this, v2->fields.grandUserSvtIds, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__SetupClassBoardUIController(
        ClassBoardController_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardController_o *v4; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  Il2CppObject *Object_object; // x0
  __int64 v11; // x21
  System_Action_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x21
  System_Action_o *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x21
  System_Action_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x21
  System_Action_o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x21
  System_Action_o *v44; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x21
  System_Action_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  ClassBoardUIController_o *v59; // x21
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x22
  const MethodInfo *v61; // x2
  ClassBoardUIController_o *v62; // x20
  __int64 v63; // x1
  AtlasManagerUnit_o *v64; // x21
  __int64 v65; // x1
  ClassBoardController_o *v66; // x19
  Il2CppClass *v67; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_5974624 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_2213A60(&Method_ClassBoardController_OnClickClassBoardResetButton__);
    sub_2213A60(&Method_ClassBoardController_OnClickClassBoardSelectButton__);
    sub_2213A60(&Method_ClassBoardController_OnClickClassScoreButton__);
    sub_2213A60(&Method_ClassBoardController_OnClickEffectList__);
    sub_2213A60(&Method_ClassBoardController_OnClickGrandScoreButton__);
    sub_2213A60(&Method_ClassBoardController_OnClickHelp__);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ClassBoardController_o *)sub_2213A60(&StringLiteral_3538/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_5974624 = 1;
  }
  resourceCatalog = v4->fields.resourceCatalog;
  entity = 0;
  if ( !resourceCatalog )
    goto LABEL_35;
  klass = resourceCatalog->klass;
  v7 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                     resourceCatalog,
                                     *(_QWORD *)(v9 + 8));
  if ( !this )
    goto LABEL_35;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v4,
                    (Il2CppObject *)this->fields.lineViewList,
                    v4->fields.uiRoot,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, const MethodInfo *))v4->klass->vtable._5_set_classBoardUIController.methodPtr)(
    v4,
    Object_object,
    v4->klass->vtable._5_set_classBoardUIController.method);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0);
  v11 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0);
  if ( !v11 )
    goto LABEL_35;
  *(_QWORD *)(v11 + 176) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 176), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0);
  if ( !v19 )
    goto LABEL_35;
  *(_QWORD *)(v19 + 184) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 184), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v4, Method_ClassBoardController_OnClickGrandScoreButton__, 0);
  if ( !v27 )
    goto LABEL_35;
  *(_QWORD *)(v27 + 192) = v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 192), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassScoreButton__, 0);
  if ( !v35 )
    goto LABEL_35;
  *(_QWORD *)(v35 + 200) = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 200), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v44 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassBoardSelectButton__, 0);
  if ( !v43 )
    goto LABEL_35;
  *(_QWORD *)(v43 + 208) = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 208), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v52 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassBoardResetButton__, 0);
  if ( !v51 )
    goto LABEL_35;
  *(_QWORD *)(v51 + 216) = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 216), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  this = (ClassBoardController_o *)ClassBoardController__GetHeaderSpriteName(
                                     (ClassBoardController_o *)UiAtlasManagerUnit,
                                     baseId,
                                     v61);
  if ( !v59 )
    goto LABEL_35;
  ClassBoardUIController__SetHeaderTitle(v59, UiAtlasManagerUnit, (System_String_o *)this, 0);
  v62 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  v64 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3538/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0);
  if ( !v62 )
    goto LABEL_35;
  ClassBoardUIController__SetHeaderMessage(v62, v64, (System_String_o *)this, 0, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)this, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateClassScoreButton((ClassBoardUIController_o *)this, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateClassBoardSelectButton((ClassBoardUIController_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_35;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_35;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity
    || (v66 = this,
        v67 = entity[4].klass,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0),
        !v66) )
  {
LABEL_35:
    sub_2213CDC(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v66,
    (System_Int32_array *)v67,
    (AtlasManagerUnit_o *)this,
    0,
    0);
}


void ClassBoardController__SetupGrandClassBoard(
        ClassBoardController_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  const MethodInfo *v8; // x2
  ClassBoardBaseEntity_o *v9; // x21
  const MethodInfo *v10; // x1
  Il2CppMethodPointer methodPtr; // x10
  __int64 v12; // x0
  int32_t grandBaseId; // w22
  ClassBoardUIController_o *v14; // x23
  __int64 v15; // x0
  int32_t baseId; // w22
  ClassBoardUIController_o *v17; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x23
  MapCamera_o *mapCamera; // x24
  ClassBoardEffectController_o *v25; // x25
  const MethodInfo *v26; // x5
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5974618 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardEffectController_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974618 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, classBoardBackground);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_14;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(Master_object, this->fields.baseId, 0);
  v9 = GrandClassBoardBaseEntity;
  if ( GrandClassBoardBaseEntity )
  {
    methodPtr = this->klass->vtable._4_get_classBoardUIController.methodPtr;
    v10 = this->klass->vtable._4_get_classBoardUIController.method;
    this->fields.grandBaseId = GrandClassBoardBaseEntity->fields.id;
    v12 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))methodPtr)(this, v10);
    grandBaseId = this->fields.grandBaseId;
    v14 = (ClassBoardUIController_o *)v12;
    Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( !v14 )
      goto LABEL_14;
    ClassBoardUIController__SetGrandScoreButton(v14, grandBaseId, (AtlasManagerUnit_o *)Master_object, 0);
    v15 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
            this,
            this->klass->vtable._4_get_classBoardUIController.method);
    baseId = this->fields.baseId;
    v17 = (ClassBoardUIController_o *)v15;
    Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( !v17 )
      goto LABEL_14;
    ClassBoardUIController__SetClassScoreButton(v17, baseId, (AtlasManagerUnit_o *)Master_object, 0);
    if ( ClassBoardBaseEntity__IsOpen(v9, 0) )
    {
      Master_object = (ClassBoardBaseMaster_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._9_get_GrandBuilder.methodPtr)(
                                                  this,
                                                  this->klass->vtable._9_get_GrandBuilder.method);
      if ( Master_object )
      {
        ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)Master_object, this->fields.grandBaseId, 0);
        ClassBoardController__CreateViews(this, 1, v18);
        ClassBoardController__SetupGrandUserSvt(this, v19);
        ClassBoardController__SetupClassBoardFigureController(this, v20);
        if ( classBoardBackground )
        {
          ClassBoardBackground__SetGrandClassIcon(
            classBoardBackground,
            this->fields.grandBaseId,
            v9->fields.iconId,
            v21);
          ((void (__fastcall *)(ClassBoardController_o *, __int64, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
            this,
            1,
            this->klass->vtable._11_SetupSquareOnClickListener.method);
          GrandSquareViewList = this->fields.GrandSquareViewList;
          GrandLineViewList = this->fields.GrandLineViewList;
          mapCamera = this->fields.mapCamera;
          v25 = (ClassBoardEffectController_o *)sub_2213CCC(ClassBoardEffectController_TypeInfo);
          ClassBoardEffectController___ctor(
            v25,
            (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)GrandSquareViewList,
            (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)GrandLineViewList,
            mapCamera,
            classBoardBackground,
            v26);
          this->fields.GrandEffectController = v25;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.GrandEffectController,
            (int32_t)v25,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_2213CDC(Master_object, v6);
    }
  }
LABEL_13:
  ClassBoardController__HideGrandBoardObj(this, v9 != 0, v8);
}


void ClassBoardController__SetupGrandUserSvt(ClassBoardController_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_grandUserSvtIds; // x19
  __int64 v10; // x1
  GrandGraphMaster_o *Master_object; // x0
  int64_t userSvtId; // x1
  __int64 MasterName_k__BackingField_low; // x8
  GrandGraphMaster_o *v14; // x21
  __int64 v15; // x8
  UserServantGrandEntity_o *EntityFromGrandGraphId; // x0
  UserServantGrandEntity_o *v17; // x20
  System_Collections_Generic_List_long__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x25
  __int64 v29; // x22
  UserServantGrandEntity_o *v30; // x22
  __int64 v31; // x1
  System_Collections_Generic_List_long__o *v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  System_Collections_Generic_List_long__o *v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_5974619 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_5974619 = 1;
  }
  this->fields.grandUserSvtIds = 0;
  p_grandUserSvtIds = (MissionNaviTransitionBoardItem_o *)&this->fields.grandUserSvtIds;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandUserSvtIds, 0, v2, v3, v4, v5, v6, v7);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (GrandGraphMaster_o *)GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
                                          Master_object,
                                          this->fields.baseId,
                                          0);
  if ( !Master_object )
    return;
  MasterName_k__BackingField_low = LODWORD(Master_object->fields._MasterName_k__BackingField);
  v14 = Master_object;
  if ( MasterName_k__BackingField_low != 1 )
  {
    if ( (int)MasterName_k__BackingField_low < 1 )
      return;
    v28 = 0;
    while ( (unsigned int)v28 < (unsigned int)MasterName_k__BackingField_low )
    {
      v29 = *((_QWORD *)&v14->fields.revision + v28);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
      Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      if ( !v29 || !Master_object )
        goto LABEL_44;
      Master_object = (GrandGraphMaster_o *)UserServantGrandMaster__GetEntityFromGrandGraphId(
                                              (UserServantGrandMaster_o *)Master_object,
                                              *(_DWORD *)(v29 + 16),
                                              0);
      if ( Master_object )
      {
        v30 = (UserServantGrandEntity_o *)Master_object;
        if ( UserServantGrandEntity__IsMatchClassBoard(
               (UserServantGrandEntity_o *)Master_object,
               this->fields.baseId,
               0) )
        {
          Master_object = (GrandGraphMaster_o *)p_grandUserSvtIds->klass;
          if ( !p_grandUserSvtIds->klass )
          {
            v32 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v32,
              (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (MissionNaviTransitionBoardItem_c *)v32;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.grandUserSvtIds,
              (int32_t)v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            Master_object = (GrandGraphMaster_o *)p_grandUserSvtIds->klass;
            if ( !p_grandUserSvtIds->klass )
              goto LABEL_44;
          }
          v39 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          userSvtId = v30->fields.userSvtId;
          v40 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v39 )
            goto LABEL_44;
          v41 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              userSvtId,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v41 + 1;
            *(_QWORD *)(v39 + 8 * v41 + 32) = userSvtId;
          }
        }
        else
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
          Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (GrandGraphMaster_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                  (ClassBoardBaseMaster_o *)Master_object,
                                                  this->fields.baseId,
                                                  0);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (GrandGraphMaster_o *)UserServantGrandEntity__ContainsClassBoardBaseId(
                                                  v30,
                                                  Master_object->fields._MasterKind_k__BackingField,
                                                  0);
          if ( ((unsigned __int8)Master_object & 1) != 0 && !p_grandUserSvtIds->klass )
          {
            v42 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v42,
              (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (MissionNaviTransitionBoardItem_c *)v42;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.grandUserSvtIds,
              (int32_t)v42,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
          }
        }
      }
      LODWORD(MasterName_k__BackingField_low) = v14->fields._MasterName_k__BackingField;
      if ( (int)++v28 >= (int)MasterName_k__BackingField_low )
        return;
    }
LABEL_45:
    sub_2213CE4(Master_object);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !LODWORD(v14->fields._MasterName_k__BackingField) )
    goto LABEL_45;
  v15 = *(_QWORD *)&v14->fields.revision;
  if ( !v15 || !Master_object )
    goto LABEL_44;
  EntityFromGrandGraphId = UserServantGrandMaster__GetEntityFromGrandGraphId(
                             (UserServantGrandMaster_o *)Master_object,
                             *(_DWORD *)(v15 + 16),
                             0);
  if ( EntityFromGrandGraphId )
  {
    v17 = EntityFromGrandGraphId;
    v18 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v18,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    p_grandUserSvtIds->klass = (MissionNaviTransitionBoardItem_c *)v18;
    sub_2213A04(p_grandUserSvtIds, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    userSvtId = v17->fields.userSvtId;
    if ( userSvtId >= 1 )
    {
      Master_object = (GrandGraphMaster_o *)p_grandUserSvtIds->klass;
      if ( p_grandUserSvtIds->klass )
      {
        v25 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v26 = Method_System_Collections_Generic_List_long__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v25 )
        {
          v27 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              userSvtId,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v27 + 1;
            *(_QWORD *)(v25 + 8 * v27 + 32) = userSvtId;
          }
          return;
        }
      }
LABEL_44:
      sub_2213CDC(Master_object, userSvtId);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_Collections_Generic_List_object__o *v6; // x0
  Il2CppObject *current; // x20
  System_Action_object__o *v8; // x0
  __int64 v9; // x1
  System_Action_ClassBoardSquare__o *v10; // x21
  __int64 v11; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5974626 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ClassBoardSquare__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_5974626 = 1;
  }
  v5 = 112;
  if ( isGrand )
    v5 = 248;
  memset(&v13, 0, sizeof(v13));
  v6 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v5);
  if ( !v6 )
    sub_2213CDC(0, isGrand);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    v6,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v13.fields._current;
    v8 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardSquare__TypeInfo);
    if ( !this
      || (v10 = (System_Action_ClassBoardSquare__o *)v8,
          System_Action_object____ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)this->klass->vtable._12_SetupSquareOnClickListener.method,
            0),
          !current) )
    {
      sub_2213CDC(v8, v9);
    }
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, v10, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
}


void ClassBoardController__SetupSquareOnClickListener_55291268(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0
  _QWORD *v26; // x8
  __int64 naturalAligment; // x11
  __int64 *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **v31; // x10
  __int64 v32; // x0
  __int64 *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  IClassBoardSquareModel_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  IClassBoardSquareModel_c **v42; // x10
  __int64 v43; // x0
  char v44; // w0
  const MethodInfo *v45; // x3
  ClassBoardSquare_o *v46; // x21
  System_Action_o *v47; // x22
  const MethodInfo *v48; // x3

  if ( (byte_5974627 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ClassBoardLock_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__1__);
    sub_2213A60(&ClassBoardController___c__DisplayClass88_0_TypeInfo);
    byte_5974627 = 1;
  }
  v5 = sub_2213CCC(ClassBoardController___c__DisplayClass88_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_49;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = square;
  v14 = (__int64 *)(v5 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)square, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_49;
  v21 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 184LL);
  if ( !v21 )
    goto LABEL_49;
  v22 = *v21;
  v23 = *(unsigned __int16 *)(*v21 + 302);
  if ( *(_WORD *)(*v21 + 302) )
  {
    v24 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_10;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 15) + 312;
  }
  else
  {
LABEL_10:
    v25 = sub_224BC3C(v21, IClassBoardSquareModel_TypeInfo, 15);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v25)(v21, 0, *(_QWORD *)(v25 + 8));
  v26 = *(_QWORD **)(v5 + 32);
  *(_DWORD *)(v5 + 16) = v6;
  if ( (v6 & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_49;
    naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*v26 + 304LL) >= (unsigned int)naturalAligment
      && *(ClassBoardLock_c **)(*(_QWORD *)(*v26 + 200LL) + 8 * naturalAligment - 8) == ClassBoardLock_TypeInfo )
    {
      return;
    }
  }
  else if ( !v26 )
  {
    goto LABEL_49;
  }
  v28 = (__int64 *)v26[23];
  if ( !v28 )
    goto LABEL_49;
  v29 = *v28;
  v30 = *(unsigned __int16 *)(*v28 + 302);
  if ( *(_WORD *)(*v28 + 302) )
  {
    v31 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_23;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 5) + 312;
  }
  else
  {
LABEL_23:
    v32 = sub_224BC3C(v28, IClassBoardSquareModel_TypeInfo, 5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  if ( (v6 & 1) == 0 )
  {
    if ( *v14 )
    {
      v33 = *(__int64 **)(*v14 + 184);
      if ( v33 )
      {
        v34 = *v33;
        v35 = *(unsigned __int16 *)(*v33 + 302);
        if ( *(_WORD *)(*v33 + 302) )
        {
          v36 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *(v36 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_33;
          }
          v37 = v34 + 16LL * (*(_DWORD *)v36 + 12) + 312;
        }
        else
        {
LABEL_33:
          v37 = sub_224BC3C(v33, IClassBoardSquareModel_TypeInfo, 12);
        }
        if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) != 0
          && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
        {
          return;
        }
        v6 = *v14;
        if ( *v14 )
        {
          ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)v6, 1, 0);
          v38 = *v14;
          if ( *v14 )
          {
            v39 = *(__int64 **)(v38 + 184);
            *(_BYTE *)(v38 + 177) = 1;
            if ( v39 )
            {
              v40 = *v39;
              v41 = *(unsigned __int16 *)(*v39 + 302);
              if ( *(_WORD *)(*v39 + 302) )
              {
                v42 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *(v42 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v41;
                  v42 += 2;
                  if ( !v41 )
                    goto LABEL_44;
                }
                v43 = v40 + 16LL * (*(_DWORD *)v42 + 12) + 312;
              }
              else
              {
LABEL_44:
                v43 = sub_224BC3C(v39, IClassBoardSquareModel_TypeInfo, 12);
              }
              v44 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
              v46 = (ClassBoardSquare_o *)*v14;
              if ( (v44 & 1) != 0 )
              {
                ClassBoardController__CallbackSquareOnClick(this, v46, *(_DWORD *)(v5 + 16), v45);
              }
              else
              {
                v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v47,
                  (Il2CppObject *)v5,
                  Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__1__,
                  0);
                ClassBoardController__PlayMoveCamera(this, v46, v47, v48);
              }
              return;
            }
          }
        }
      }
    }
LABEL_49:
    sub_2213CDC(v6, v7);
  }
}


void ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974633 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__ShowBoardCoroutine_d__102_TypeInfo);
    byte_5974633 = 1;
  }
  v3 = sub_2213CCC(ClassBoardController__ShowBoardCoroutine_d__102_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__ShowGrandBoard(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  MapCamera_o *mapCamera; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo_45E9150 *v12; // x2
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  MapCamera_o *v16; // x22
  __int64 v17; // x1
  BalanceConfig_c *v18; // x0
  struct BalanceConfig_StaticFields *v19; // x8
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v21; // x3
  System_Nullable_Vector3__o v22; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974635 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5974635 = 1;
  }
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method,
               method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  mapCamera = this->fields.mapCamera;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
  if ( !mapCamera )
    goto LABEL_24;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  Instance = MapCamera__IsMatchPosAndZoomSize(
               mapCamera,
               v25,
               BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize,
               0);
  if ( (Instance & 1) == 0 )
  {
    background = this->fields.background;
    if ( this->fields.isDirectlyGrandBoard )
    {
      cameraResetSec = 0.0;
      if ( !background )
        goto LABEL_24;
    }
    else
    {
      if ( !background )
        goto LABEL_24;
      cameraResetSec = background->fields.cameraResetSec;
    }
    cameraResetEasingType = background->fields.cameraResetEasingType;
    v16 = this->fields.mapCamera;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    *(_QWORD *)&v24.fields.hasValue = &v22;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v24, zeroVector, v12);
    v18 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v18 = BalanceConfig_TypeInfo;
    }
    v19 = v18->static_fields;
    p_size = (System_Nullable_float__o)&size;
    size = 0;
    System_Nullable_float____ctor(
      p_size,
      v19->ClassBoard2DCameraDefaultSize,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    if ( v16 )
    {
      v21 = size;
      MapCamera__StartAutoWork(v16, cameraResetSec, v22, v21, cameraResetEasingType, 0, 0);
      goto LABEL_23;
    }
LABEL_24:
    sub_2213CDC(Instance, v6);
  }
LABEL_23:
  ClassBoardController__PlayTransitionAnimation(this, isClickedClassScoreButton, (const MethodInfo *)v12);
}


void ClassBoardController__Update(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *ClassBoardController__WaitFinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_597462C & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_TypeInfo);
    byte_597462C = 1;
  }
  v5 = sub_2213CCC(ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void ClassBoardController___EndPlayGrandReturnTransitionAnimation_b__114_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_2213CDC(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickClassScoreButton_b__78_0(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardController__ShowGrandBoard(this, 1, v2);
}


void ClassBoardController___OnClickEffectList_b__76_0(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974646 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974646 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0);
}


void ClassBoardController___OnClickGrandScoreButton_b__77_0(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardController__HideGrandBoard(this, 0, v2);
}


void ClassBoardController___OnClickHelp_b__74_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_2213CDC(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickHelp_b__74_1(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_2213CDC(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___PlayDirectlyGrandBoardOpenEffect_b__93_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x0
  struct ClassBoardBackground_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  background = this->fields.background;
  if ( !background
    || (ClassBoardBackground__CallAnimationEventBoardParent(background, method), (v4 = this->fields.background) == 0) )
  {
    sub_2213CDC(background, method);
  }
  ActionExtensions__Call(v4->fields.showBoardCallback, 0);
  v4->fields.showBoardCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.showBoardCallback, 0, v5, v6, v7, v8, v9, v10);
  this->fields.isFinishedClassScoreAnimation = 1;
}


void ClassBoardController___ShowBoardCoroutine_b__102_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_2213CDC(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


int32_t ClassBoardController__get_BaseId(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.baseId;
}


UnityEngine_GameObject_o *ClassBoardController__get_BoardRoot(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.boardRoot;
}


ClassBoardFigureController_o *ClassBoardController__get_ClassBoardFigureController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassBoardFigureController_k__BackingField;
}


ClassBoardModelBuilder_o *ClassBoardController__get_GrandBuilder(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBuilder_k__BackingField;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *ClassBoardController__get_LineViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)this->fields.lineViewList;
}


MapCamera_o *ClassBoardController__get_MapCamera(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *ClassBoardController__get_SquareViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)this->fields.squareViewList;
}


ClassBoardModelBuilder_o *ClassBoardController__get_builder(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields._builder_k__BackingField;
}


ClassBoardUIController_o *ClassBoardController__get_classBoardUIController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void ClassBoardController__set_ClassBoardFigureController(
        ClassBoardController_o *this,
        ClassBoardFigureController_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClassBoardFigureController_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassBoardFigureController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__set_classBoardUIController(
        ClassBoardController_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__115___ctor(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__DelayCheckGrandScoreTutorial_d__115__MoveNext(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x22
  Il2CppObject *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ClassBoardController___c__DisplayClass115_0_o *IsTutorialAvailable; // x0
  struct ClassBoardController_o *v20; // x1
  struct ClassBoardController___c__DisplayClass115_0_o *v21; // x21
  struct ClassBoardController___c__DisplayClass115_0_o *_8__1; // x20
  struct ClassBoardBackground_o *background; // x8
  float grandScoreDialogViewDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v25; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool result; // w0
  System_Action_o *v34; // x19

  if ( (byte_5974665 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass115_0__DelayCheckGrandScoreTutorial_b__0__);
    sub_2213A60(&ClassBoardController___c__DisplayClass115_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974665 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_2213CCC(ClassBoardController___c__DisplayClass115_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct ClassBoardController___c__DisplayClass115_0_o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    IsTutorialAvailable = this->fields.__8__1;
    if ( !IsTutorialAvailable )
      goto LABEL_17;
    v20 = this->fields.__4__this;
    IsTutorialAvailable->fields.__4__this = v20;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&IsTutorialAvailable->fields,
      (int32_t)v20,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v21 = this->fields.__8__1;
    IsTutorialAvailable = (struct ClassBoardController___c__DisplayClass115_0_o *)EventTutorialMaster__IsTutorialAvailable(
                                                                                    0,
                                                                                    100,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0);
    if ( !v21 )
      goto LABEL_17;
    _8__1 = this->fields.__8__1;
    v21->fields.isGrandScoreTutorialAvailable = (unsigned __int8)IsTutorialAvailable & 1;
    if ( !_8__1 )
      goto LABEL_17;
    if ( _8__1->fields.isGrandScoreTutorialAvailable )
    {
      if ( !_4__this )
        goto LABEL_17;
      if ( !_4__this->fields.isGrandScoreReleaseDialogOpen )
      {
        background = _4__this->fields.background;
        if ( background )
        {
          grandScoreDialogViewDelayTime = background->fields.grandScoreDialogViewDelayTime;
          v25 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v25, grandScoreDialogViewDelayTime, 0);
          this->fields.__2__current = (Il2CppObject *)v25;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v25, v27, v28, v29, v30, v31, v32);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_17:
        sub_2213CDC(IsTutorialAvailable, v12);
      }
    }
  }
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)_8__1,
    Method_ClassBoardController___c__DisplayClass115_0__DelayCheckGrandScoreTutorial_b__0__,
    0);
  if ( !_4__this )
    goto LABEL_17;
  EventTutorialMaster__CheckTutorial(0, 100, v34, _4__this->fields.grandBaseId, 0, 0, 0, 0);
  return 0;
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_IEnumerator_Reset(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__DelayCheckGrandScoreTutorial_d__115_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_IEnumerator_get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_IDisposable_Dispose(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__112___ctor(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayExClassGrandScoreRelease_d__112__MoveNext(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *v2; // x19
  int32_t _1__state; // w21
  SceneJumpInfo_o *v4; // x19
  struct ClassBoardController_o *_4__this; // x8
  struct ClassBoardBackground_o *background; // x8
  float GrandScoreExReleaseEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_5974666 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974666 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      background = _4__this->fields.background;
      if ( background )
      {
        GrandScoreExReleaseEffectDelayTime = background->fields.GrandScoreExReleaseEffectDelayTime;
        v8 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v8, GrandScoreExReleaseEffectDelayTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v8, v10, v11, v12, v13, v14, v15);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
    goto LABEL_11;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    v4 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48464976(v4, (System_String_o *)StringLiteral_1/*""*/, 9, 1, 0);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 91, 1, (Il2CppObject *)v4, 0);
      return _1__state == 0;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__PlayExClassGrandScoreRelease_d__112_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_IDisposable_Dispose(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayGrandSquareAndLine_d__107___ctor(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayGrandSquareAndLine_d__107__MoveNext(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayGrandSquareAndLine_d__107_o *v2; // x20
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x19
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x19
  MissionNaviTransitionBoardItem_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool result; // w0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_5974667 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974667 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  switch ( _1__state )
  {
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      goto LABEL_14;
    case 1:
      v2->fields.__1__state = -1;
LABEL_9:
      if ( !_4__this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_14:
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, 0, v15, v16, v17, v18, v19, v20);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 2;
        return result;
      }
      if ( _4__this->fields.grandUserSvtIds )
      {
        this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandSquareViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        v26 = v24;
        v24.fields._list = 0;
        *(_QWORD *)&v24.fields._index = &v26;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v26,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
        {
          if ( !v26.fields._current )
            sub_2213CDC(0, v21);
          ((void (__fastcall *)(Il2CppObject *, _QWORD))v26.fields._current->klass->vtable[7].methodPtr)(
            v26.fields._current,
            0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandLineViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
        v24.fields._list = 0;
        *(_QWORD *)&v24.fields._index = &v25;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
        {
          if ( !v25.fields._current )
            sub_2213CDC(0, v23);
          ClassBoardLine__PlayTransition((ClassBoardLine_o *)v25.fields._current, 0, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
      }
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                                        _4__this,
                                                                        _4__this->klass->vtable._7_get_ClassBoardFigureController.method);
      if ( this )
      {
        ClassBoardFigureController__StartSwitchServantCoroutine((ClassBoardFigureController_o *)this, 0);
        return 0;
      }
LABEL_35:
      sub_2213CDC(this, method);
    case 0:
      waitTime = v2->fields.waitTime;
      v2->fields.__1__state = -1;
      if ( waitTime > 0.0 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v6;
        v7 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(v7, (int32_t)v6, v8, v9, v10, v11, v12, v13);
        result = 1;
        v7[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
      goto LABEL_9;
  }
  return 0;
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__PlayGrandSquareAndLine_d__107_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayGrandSquareAndLine_d__107__System_IDisposable_Dispose(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__105___ctor(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ResetClassBoardCameraCoroutine_d__105__MoveNext(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  const MethodInfo_45E9150 *v2; // x2
  ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x21
  MapCamera_o *mapCamera; // x20
  float sec; // s8
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v12; // x3
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Nullable_float__o size; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v22; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v23; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_5974668 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *)sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_5974668 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
    mapCamera = _4__this->fields.mapCamera;
    sec = v3->fields.sec;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    *(_QWORD *)&v23.fields.hasValue = &v22;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v23.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v23, zeroVector, v2);
    v9 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      v9 = BalanceConfig_TypeInfo;
    }
    static_fields = v9->static_fields;
    p_size = (System_Nullable_float__o)&size;
    size = 0;
    System_Nullable_float____ctor(
      p_size,
      static_fields->ClassBoard2DCameraDefaultSize,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    if ( !mapCamera )
LABEL_18:
      sub_2213CDC(this, method);
    v12 = size;
    MapCamera__StartAutoWork(mapCamera, sec, v22, v12, v3->fields.easingType, 0, 0);
  }
  this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *)_4__this->fields.mapCamera;
  if ( !this )
    goto LABEL_18;
  if ( MapCamera__IsAutoWork((MapCamera_o *)this, 0) )
  {
    v3->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_2213A04(p__2__current, 0, v13, v14, v15, v16, v17, v18);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  ActionExtensions__Call(v3->fields.callback, 0);
  return 0;
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_IEnumerator_Reset(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__ResetClassBoardCameraCoroutine_d__105_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_IDisposable_Dispose(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ShowBoardCoroutine_d__102___ctor(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ShowBoardCoroutine_d__102__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  ClassBoardController__ShowBoardCoroutine_d__102_o *v2; // x20
  unsigned int _1__state; // w8
  struct ClassBoardController_o *_4__this; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  bool result; // w0
  __int64 v14; // x1
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_5974669 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController__ShowBoardCoroutine_b__102_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_5974669 = 1;
  }
  _1__state = v2->fields.__1__state;
  memset(&v18, 0, sizeof(v18));
  memset(&v17, 0, sizeof(v17));
  if ( _1__state < 2 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.boardObjectsParent;
    if ( !this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
    if ( !this )
      goto LABEL_26;
    if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_2213A04(p__2__current, 0, v5, v6, v7, v8, v9, v10);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.squareViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    v18 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
    {
      if ( !v18.fields._current )
        sub_2213CDC(0, v11);
      ((void (__fastcall *)(Il2CppObject *, bool))v18.fields._current->klass->vtable[7].methodPtr)(
        v18.fields._current,
        _4__this->fields.isDirectlyGrandBoard);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.lineViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_2213CDC(0, v14);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v17.fields._current, _4__this->fields.isDirectlyGrandBoard, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  _4__this,
                                                                  _4__this->klass->vtable._4_get_classBoardUIController.method);
    if ( !this )
LABEL_26:
      sub_2213CDC(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    if ( !_4__this->fields.isDirectlyGrandBoard )
    {
      v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__102_0__, 0);
      EventTutorialMaster__CheckTutorial(0, 82, v15, 0, 0, 0, 0, 0);
    }
  }
  return 0;
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__ShowBoardCoroutine_d__102_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ShowBoardCoroutine_d__102__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__94___ctor(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__MoveNext(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardController_o *_4__this; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_2213CDC(0, method);
  if ( _4__this->fields.isFinishedClassScoreAnimation )
  {
    ClassBoardController__FinishedClassBoardStartEffect(_4__this, this->fields.callback, v2);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_IEnumerator_Reset(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_IEnumerator_get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_IDisposable_Dispose(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974647 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_5974647 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c___CallbackSquareOnClick_b__90_3(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___CallbackSquareOnClick_b__90_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool ClassBoardController___c___CheckOpenMissionClearDialogSave_b__97_0(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  int v8; // w1
  const MethodInfo *v9; // x2
  IClassBoardLockModel_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  IClassBoardLockModel_c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  IClassBoardLockModel_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  char v22; // w8
  __int64 v24; // [xsp+0h] [xbp-30h] BYREF
  int v25; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v26; // 0:x0.12

  if ( (byte_5974650 & 1) == 0 )
  {
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_5974650 = 1;
  }
  v25 = 0;
  v24 = 0;
  if ( !x )
    sub_2213CDC(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(x, IClassBoardLockModel_TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
  *(_QWORD *)&v26.fields.Type = &v24;
  v25 = v8;
  v26.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v26, v9) )
    goto LABEL_30;
  v10 = x->klass;
  v11 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12 + 15];
  }
  else
  {
LABEL_15:
    v13 = sub_224BC3C(x, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v13)(x, 0, *(_QWORD *)(v13 + 8)) & 2) != 0 )
    goto LABEL_30;
  v14 = x->klass;
  v15 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    v16 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_22;
    }
    v17 = (__int64)&v14->vtable[*v16 + 15];
  }
  else
  {
LABEL_22:
    v17 = sub_224BC3C(x, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v17)(x, 0, *(_QWORD *)(v17 + 8)) & 4) != 0 )
  {
LABEL_30:
    v22 = 0;
  }
  else
  {
    v18 = x->klass;
    v19 = *(unsigned __int16 *)&x->klass->_2.rank;
    if ( *(_WORD *)&x->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v20 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_29;
      }
      v21 = (__int64)&v18->vtable[*v20 + 1];
    }
    else
    {
LABEL_29:
      v21 = sub_224BC3C(x, IClassBoardLockModel_TypeInfo, 1);
    }
    v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v21)(x, *(_QWORD *)(v21 + 8)) ^ 1;
  }
  return v22 & 1;
}


int32_t ClassBoardController___c___CheckOpenMissionClearDialogSave_b__97_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5974651 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_5974651 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__92_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  ClassBoardController___c_c *v11; // x8
  ClassBoardController___c_o *v12; // x20
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  ClassBoardController___c_c *v16; // x8
  ClassBoardController___c_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ClassBoardController___c_c *v21; // x8
  ClassBoardController___c_o *v22; // x19
  __int64 v23; // x9
  IClassBoardLockModel_c **v24; // x10
  __int64 v25; // x0
  char v26; // w8
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  int v29; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v30; // 0:x0.12

  if ( (byte_597464C & 1) == 0 )
  {
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_597464C = 1;
  }
  v29 = 0;
  v28 = 0;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(this, IClassBoardLockModel_TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  *(_QWORD *)&v30.fields.Type = &v28;
  v29 = v9;
  v30.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v30, v10) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  v11 = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&(&v11[1]._1.interfaceOffsets)[2 * *v14];
  }
  else
  {
LABEL_17:
    v15 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v15)(v12, 0, *(_QWORD *)(v15 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_25;
    }
    v20 = (__int64)&(&v16[1]._1.interfaceOffsets)[2 * *v19];
  }
  else
  {
LABEL_25:
    v20 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v20)(v17, 0, *(_QWORD *)(v20 + 8)) & 4) != 0 )
  {
LABEL_34:
    v26 = 0;
    return v26 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
LABEL_38:
    sub_2213CDC(this, x);
  v21 = this->klass;
  v22 = this;
  v23 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v24 = (IClassBoardLockModel_c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_33;
    }
    v25 = (__int64)(&v21->vtable._1_Finalize + *(_DWORD *)v24);
  }
  else
  {
LABEL_33:
    v25 = sub_224BC3C(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v26 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8)) ^ 1;
  return v26 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__92_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_597464D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_597464D = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0)) == 0 )
    sub_2213CDC(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__92_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  ClassBoardController___c_c *v11; // x8
  ClassBoardController___c_o *v12; // x20
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  ClassBoardController___c_c *v16; // x8
  ClassBoardController___c_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ClassBoardController___c_c *v21; // x8
  ClassBoardController___c_o *v22; // x19
  __int64 v23; // x9
  IClassBoardLockModel_c **v24; // x10
  __int64 v25; // x0
  char v26; // w8
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  int v29; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v30; // 0:x0.12

  if ( (byte_597464E & 1) == 0 )
  {
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_597464E = 1;
  }
  v29 = 0;
  v28 = 0;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(this, IClassBoardLockModel_TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  *(_QWORD *)&v30.fields.Type = &v28;
  v29 = v9;
  v30.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v30, v10) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  v11 = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&(&v11[1]._1.interfaceOffsets)[2 * *v14];
  }
  else
  {
LABEL_17:
    v15 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v15)(v12, 0, *(_QWORD *)(v15 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
    goto LABEL_38;
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_25;
    }
    v20 = (__int64)&(&v16[1]._1.interfaceOffsets)[2 * *v19];
  }
  else
  {
LABEL_25:
    v20 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v20)(v17, 0, *(_QWORD *)(v20 + 8)) & 4) != 0 )
  {
LABEL_34:
    v26 = 0;
    return v26 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0);
  if ( !this )
LABEL_38:
    sub_2213CDC(this, x);
  v21 = this->klass;
  v22 = this;
  v23 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v24 = (IClassBoardLockModel_c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_33;
    }
    v25 = (__int64)(&v21->vtable._1_Finalize + *(_DWORD *)v24);
  }
  else
  {
LABEL_33:
    v25 = sub_224BC3C(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v26 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8)) ^ 1;
  return v26 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__92_3(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_597464F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    byte_597464F = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0)) == 0 )
    sub_2213CDC(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__92_4(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ClassBoardLock__get_LockModel(x, 0);
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__92_5(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ClassBoardLock__get_LockModel(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ClassBoardLine__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_3(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_4(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ClassBoardLine__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___Release_b__70_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5974648 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974648 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5974649 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974649 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_2(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_597464A & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597464A = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_3(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_597464B & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597464B = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardController___c___SetupSquareOnClickListener_b__88_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___SetupSquareOnClickListener_b__88_7(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c__DisplayClass100_0___ctor(
        ClassBoardController___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass100_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (callback = this->fields.callback) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void ClassBoardController___c__DisplayClass106_0___ctor(
        ClassBoardController___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass106_0___PlayTransitionAnimation_b__0(
        ClassBoardController___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__EndPlayGrandTransitionAnimation(
    this->fields.__4__this,
    this->fields.isClickedClassScoreButton,
    v2);
}


void ClassBoardController___c__DisplayClass113_0___ctor(
        ClassBoardController___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass113_0___HideGrandBoard_b__0(
        ClassBoardController___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__EndPlayGrandReturnTransitionAnimation(
    this->fields.__4__this,
    this->fields.isClickedClassScoreButton,
    v2);
}


void ClassBoardController___c__DisplayClass115_0___ctor(
        ClassBoardController___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass115_0___DelayCheckGrandScoreTutorial_b__0(
        ClassBoardController___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x19
  _BOOL4 isGrandScoreTutorialAvailable; // w22
  System_Action_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_5974652 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardController_PlayGrandExClassReleaseEffect__);
    byte_5974652 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  isGrandScoreTutorialAvailable = this->fields.isGrandScoreTutorialAvailable;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, _4__this, Method_ClassBoardController_PlayGrandExClassReleaseEffect__, 0);
  if ( !_4__this )
    sub_2213CDC(v6, v7);
  ClassBoardController__CheckUMedalCreateEventTutorial(
    (ClassBoardController_o *)_4__this,
    isGrandScoreTutorialAvailable,
    v5,
    v8);
}


void ClassBoardController___c__DisplayClass117_0___ctor(
        ClassBoardController___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController___c__DisplayClass117_0___OnClickClassBoardResetButton_b__0(
        ClassBoardController___c__DisplayClass117_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *commonUI; // x20
  ClassBoardUIController_o *_4__this; // x0
  System_Action_o *_9__1; // x21
  float v8; // s8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5974653 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__1__);
    byte_5974653 = 1;
  }
  if ( isDecide )
  {
    commonUI = this->fields.commonUI;
    _4__this = (ClassBoardUIController_o *)AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, isDecide);
      _4__this = (ClassBoardUIController_o *)AvalonSceneManager_TypeInfo;
    }
    _9__1 = this->fields.__9__1;
    v8 = *(float *)&_4__this->fields.onClickEffectList->klass;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( !commonUI )
LABEL_14:
      sub_2213CDC(_4__this, isDecide);
    CommonUI__maskFadeout(commonUI, 1, v8, _9__1, 0);
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *, const MethodInfo *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc,
                                           method);
  if ( !_4__this )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0);
  _4__this = (ClassBoardUIController_o *)this->fields.commonUI;
  if ( !_4__this )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void ClassBoardController___c__DisplayClass117_0___OnClickClassBoardResetButton_b__1(
        ClassBoardController___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass117_0_o *v2; // x20
  struct ClassBoardController_o *_4__this; // x8
  int32_t baseId; // w21
  __int64 v5; // x19
  SceneJumpInfo_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ClassBoardController_o *v13; // x8
  struct ClassBoardRootComponent_o *classBoardRootComponent; // x8
  struct ClassBoardPageSwitcher_o *pageSwitcher; // x8
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8

  v2 = this;
  if ( (byte_5974654 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardController___c__DisplayClass117_0_o *)sub_2213A60(&StringLiteral_4647/*"ClassBoardReset"*/);
    byte_5974654 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  baseId = _4__this->fields.baseId;
  v5 = sub_2213CCC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_48464916((SceneJumpInfo_o *)v5, (System_String_o *)StringLiteral_4647/*"ClassBoardReset"*/, baseId, 0);
  if ( !v5 )
    goto LABEL_15;
  SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v5, 0);
  v6 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor(v6, 0);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_15;
  classBoardRootComponent = v13->fields.classBoardRootComponent;
  if ( !classBoardRootComponent )
    goto LABEL_15;
  pageSwitcher = classBoardRootComponent->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_15;
  SceneJumpInfo_k__BackingField = pageSwitcher->fields._SceneJumpInfo_k__BackingField;
  if ( SceneJumpInfo_k__BackingField )
    LODWORD(SceneJumpInfo_k__BackingField) = SceneJumpInfo_k__BackingField->fields.num;
  if ( !v6 )
    goto LABEL_15;
  if ( (_DWORD)SceneJumpInfo_k__BackingField == 1 )
    LODWORD(SceneJumpInfo_k__BackingField) = 0;
  v6->fields.num = (int)SceneJumpInfo_k__BackingField;
  *(_QWORD *)(v5 + 56) = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)v6, v7, v8, v9, v10, v11, v12);
  this = (ClassBoardController___c__DisplayClass117_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_15:
    sub_2213CDC(this, method);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 22, 1, (Il2CppObject *)v5, 0);
}


void ClassBoardController___c__DisplayClass119_0___ctor(
        ClassBoardController___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass119_0___CheckUMedalCreateEventTutorial_b__0(
        ClassBoardController___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__1; // x22
  int32_t U_MEDAL_CREATE_EVENT_ID; // w20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974655 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardRootComponent_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__1__);
    byte_5974655 = 1;
  }
  v3 = ClassBoardRootComponent_TypeInfo;
  if ( !*(&ClassBoardRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo, method);
    v3 = ClassBoardRootComponent_TypeInfo;
  }
  _9__1 = this->fields.__9__1;
  U_MEDAL_CREATE_EVENT_ID = v3->static_fields->U_MEDAL_CREATE_EVENT_ID;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  EventTutorialMaster__RequestTutorialEventSet(U_MEDAL_CREATE_EVENT_ID, 96, _9__1, 0);
}


void ClassBoardController___c__DisplayClass119_0___CheckUMedalCreateEventTutorial_b__1(
        ClassBoardController___c__DisplayClass119_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( endAction )
    ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
      endAction->fields.method_code,
      endAction->fields.method);
}


void ClassBoardController___c__DisplayClass88_0___ctor(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v4; // x9
  ClassBoardSquare_c *v5; // x9
  __int64 naturalAligment; // x10
  BaseMonoBehaviour_o *v7; // x20
  BaseMonoBehaviour_c *v8; // x2
  struct ClassBoardController_o *v9; // x8
  ClassBoardController___c__DisplayClass88_0_o *v10; // x20
  System_Action_o *_9__88_7; // x22
  ClassBoardSquare_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o *_9__8; // x24
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  ClassBoardSquareOpenConfirmDialog_o *v26; // x0
  ClassBoardSquare_o *v27; // x1
  bool v28; // w2
  BaseMonoBehaviour_o *_4__this; // x20
  BaseMonoBehaviour_c *klass; // x21
  _QWORD *image; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  BaseMonoBehaviour_o *v35; // x20
  BaseMonoBehaviour_c *v36; // x21
  _QWORD *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  struct ClassBoardController_o *v41; // x8
  ClassBoardController___c__DisplayClass88_0_o *v42; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *square; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  BaseMonoBehaviour_o *v51; // x20
  BaseMonoBehaviour_c *v52; // x21
  _QWORD *v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  struct ClassBoardController_o *v57; // x8
  ClassBoardController___c__DisplayClass88_0_o *v58; // x20
  const MethodInfo *v59; // x3
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  BaseMonoBehaviour_o *v68; // x20
  BaseMonoBehaviour_c *v69; // x21
  _QWORD *v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  struct ClassBoardController_o *v74; // x8
  ClassBoardController___c__DisplayClass88_0_o *v75; // x20
  System_Action_o *_9__4; // x23
  ClassBoardSquare_o *v77; // x21
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  BaseMonoBehaviour_o *v84; // x20
  BaseMonoBehaviour_c *v85; // x21
  _QWORD *v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  struct ClassBoardController_o *v90; // x8
  ClassBoardController___c__DisplayClass88_0_o *v91; // x20
  __int64 v92; // x1
  ClassBoardSquare_o *v93; // x21
  ClassBoardController___c_c *v94; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__88_5; // x22
  Il2CppObject *v97; // x23
  struct ClassBoardController___c_StaticFields *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  System_Action_o *_9__6; // x24
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  ClassBoardLockOpenConfirmDialog_o *v112; // x0
  ClassBoardSquare_o *v113; // x1
  bool v114; // w2
  struct ClassBoardController_o *v115; // x8
  ClassBoardController___c__DisplayClass88_0_o *v116; // x20
  __int64 v117; // x1
  ClassBoardSquare_o *v118; // x21
  ClassBoardController___c_c *v119; // x0
  struct ClassBoardController___c_StaticFields *v120; // x8
  Il2CppObject *v121; // x23
  struct ClassBoardController___c_StaticFields *v122; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  BaseMonoBehaviour_o *v135; // x20
  BaseMonoBehaviour_c *v136; // x2
  struct ClassBoardController_o *v137; // x8
  ClassBoardController___c__DisplayClass88_0_o *v138; // x20
  ClassBoardSquare_o *v139; // x21
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7

  v2 = this;
  if ( (byte_5974656 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_2213A60(&ClassBoardLock_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_5__);
    sub_2213A60(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_7__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__10__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__13__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__14__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__2__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__3__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__4__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__6__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__8__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__9__);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_5974656 = 1;
  }
  acquireFlag = v2->fields.acquireFlag;
  if ( (acquireFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_129;
    klass = _4__this[3].klass;
    if ( !klass )
      goto LABEL_129;
    image = klass->_1.image;
    v32 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v33 = (int *)(image[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v33 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_29;
      }
      v34 = (__int64)&image[2 * *v33 + 39];
    }
    else
    {
LABEL_29:
      v34 = sub_224BC3C(_4__this[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v34)(
                                                             klass,
                                                             *(_QWORD *)(v34 + 8));
    if ( !this )
      goto LABEL_129;
    v41 = v2->fields.__4__this;
    if ( !v41 )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__16,
                                                             v41->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_129;
    v42 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_129;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__2 = v2->fields.__9__2;
    square = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v45, v46, v47, v48, v49, v50);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v42, square, _9__2, 0);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v35 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v35 )
      goto LABEL_129;
    v36 = v35[3].klass;
    if ( !v36 )
      goto LABEL_129;
    v37 = v36->_1.image;
    v38 = *((unsigned __int16 *)v36->_1.image + 151);
    if ( *((_WORD *)v36->_1.image + 151) )
    {
      v39 = (int *)(v37[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v39 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_36;
      }
      v40 = (__int64)&v37[2 * *v39 + 39];
    }
    else
    {
LABEL_36:
      v40 = sub_224BC3C(v35[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v40)(
                                                             v36,
                                                             *(_QWORD *)(v40 + 8));
    if ( !this )
      goto LABEL_129;
    v57 = v2->fields.__4__this;
    if ( !v57 )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v35,
                                                             (Il2CppObject *)this->fields.__9__12,
                                                             v57->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_129;
    v58 = this;
    LOBYTE(this[3].fields.__9__2) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_129;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__3 = v2->fields.__9__3;
    v61 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__3__,
        0);
      v2->fields.__9__3 = _9__3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v62, v63, v64, v65, v66, v67);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v58, v61, _9__3, v59);
  }
  else
  {
    if ( (acquireFlag & 4) == 0 )
    {
      if ( (acquireFlag & 0x10) != 0 )
      {
        v68 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
        if ( !v68 )
          goto LABEL_129;
        v69 = v68[3].klass;
        if ( !v69 )
          goto LABEL_129;
        v70 = v69->_1.image;
        v71 = *((unsigned __int16 *)v69->_1.image + 151);
        if ( *((_WORD *)v69->_1.image + 151) )
        {
          v72 = (int *)(v70[22] + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v72 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v71;
            v72 += 4;
            if ( !v71 )
              goto LABEL_68;
          }
          v73 = (__int64)&v70[2 * *v72 + 39];
        }
        else
        {
LABEL_68:
          v73 = sub_224BC3C(v68[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v73)(
                                                                 v69,
                                                                 *(_QWORD *)(v73 + 8));
        if ( !this )
          goto LABEL_129;
        v90 = v2->fields.__4__this;
        if ( !v90 )
          goto LABEL_129;
        this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                 v68,
                                                                 (Il2CppObject *)this->fields.__9__9,
                                                                 v90->fields.uiRoot,
                                                                 0,
                                                                 (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !this )
          goto LABEL_129;
        v91 = this;
        ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0);
        this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
        if ( !this )
          goto LABEL_129;
        this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc);
        if ( !this )
          goto LABEL_129;
        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
        v93 = v2->fields.square;
        v94 = ClassBoardController___c_TypeInfo;
        if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v92);
          v94 = ClassBoardController___c_TypeInfo;
        }
        static_fields = v94->static_fields;
        _9__88_5 = static_fields->__9__88_5;
        if ( !_9__88_5 )
        {
          if ( !*(&v94->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v94, v92);
            static_fields = ClassBoardController___c_TypeInfo->static_fields;
          }
          v97 = (Il2CppObject *)static_fields->__9;
          _9__88_5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(_9__88_5, v97, Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_5__, 0);
          v98 = ClassBoardController___c_TypeInfo->static_fields;
          v98->__9__88_5 = _9__88_5;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v98->__9__88_5,
            (int32_t)_9__88_5,
            v99,
            v100,
            v101,
            v102,
            v103,
            v104);
        }
        _9__6 = v2->fields.__9__6;
        if ( !_9__6 )
        {
          _9__6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__6,
            (Il2CppObject *)v2,
            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__6__,
            0);
          v2->fields.__9__6 = _9__6;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__6,
            (int32_t)_9__6,
            v106,
            v107,
            v108,
            v109,
            v110,
            v111);
        }
        v112 = (ClassBoardLockOpenConfirmDialog_o *)v91;
        v113 = v93;
        v114 = 0;
      }
      else
      {
        if ( (acquireFlag & 8) != 0 )
        {
          v84 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
          if ( v84 )
          {
            v85 = v84[3].klass;
            if ( v85 )
            {
              v86 = v85->_1.image;
              v87 = *((unsigned __int16 *)v85->_1.image + 151);
              if ( *((_WORD *)v85->_1.image + 151) )
              {
                v88 = (int *)(v86[22] + 8LL);
                while ( *((IClassBoardResourceCatalog_c **)v88 - 1) != IClassBoardResourceCatalog_TypeInfo )
                {
                  --v87;
                  v88 += 4;
                  if ( !v87 )
                    goto LABEL_84;
                }
                v89 = (__int64)&v86[2 * *v88 + 39];
              }
              else
              {
LABEL_84:
                v89 = sub_224BC3C(v84[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
              }
              this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v89)(
                                                                       v85,
                                                                       *(_QWORD *)(v89 + 8));
              if ( this )
              {
                v115 = v2->fields.__4__this;
                if ( v115 )
                {
                  this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                           v84,
                                                                           (Il2CppObject *)this->fields.__9__11,
                                                                           v115->fields.uiRoot,
                                                                           0,
                                                                           (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
                  if ( this )
                  {
                    v116 = this;
                    ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
                    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
                    if ( this )
                    {
                      this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                               this,
                                                                               this->klass[1]._1.gc_desc);
                      if ( this )
                      {
                        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                        v118 = v2->fields.square;
                        v119 = ClassBoardController___c_TypeInfo;
                        if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v117);
                          v119 = ClassBoardController___c_TypeInfo;
                        }
                        v120 = v119->static_fields;
                        _9__88_7 = v120->__9__88_7;
                        if ( !_9__88_7 )
                        {
                          if ( !*(&v119->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(v119, v117);
                            v120 = ClassBoardController___c_TypeInfo->static_fields;
                          }
                          v121 = (Il2CppObject *)v120->__9;
                          _9__88_7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(
                            _9__88_7,
                            v121,
                            Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_7__,
                            0);
                          v122 = ClassBoardController___c_TypeInfo->static_fields;
                          v122->__9__88_7 = _9__88_7;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v122->__9__88_7,
                            (int32_t)_9__88_7,
                            v123,
                            v124,
                            v125,
                            v126,
                            v127,
                            v128);
                        }
                        _9__8 = v2->fields.__9__8;
                        if ( !_9__8 )
                        {
                          _9__8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(
                            _9__8,
                            (Il2CppObject *)v2,
                            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__8__,
                            0);
                          v2->fields.__9__8 = _9__8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__8,
                            (int32_t)_9__8,
                            v129,
                            v130,
                            v131,
                            v132,
                            v133,
                            v134);
                        }
                        v26 = (ClassBoardSquareOpenConfirmDialog_o *)v116;
                        v27 = v118;
                        v28 = 0;
                        goto LABEL_116;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_129:
          sub_2213CDC(this, method);
        }
        v4 = v2->fields.square;
        if ( !v4
          || (v5 = v4->klass,
              naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment,
              v5->_2.naturalAligment < (unsigned int)naturalAligment)
          || (ClassBoardLock_c *)v5->_2.typeHierarchy[naturalAligment - 1] != ClassBoardLock_TypeInfo )
        {
          v7 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
          if ( v7 )
          {
            v8 = v7[3].klass;
            if ( v8 )
            {
              this = (ClassBoardController___c__DisplayClass88_0_o *)sub_200B5F0(
                                                                       0,
                                                                       IClassBoardResourceCatalog_TypeInfo,
                                                                       v8);
              if ( this )
              {
                v9 = v2->fields.__4__this;
                if ( v9 )
                {
                  this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                           v7,
                                                                           (Il2CppObject *)this->fields.__9__11,
                                                                           v9->fields.uiRoot,
                                                                           0,
                                                                           (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
                  if ( this )
                  {
                    v10 = this;
                    ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
                    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
                    if ( this )
                    {
                      this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                               this,
                                                                               this->klass[1]._1.gc_desc);
                      if ( this )
                      {
                        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                        _9__88_7 = v2->fields.__9__13;
                        v12 = v2->fields.square;
                        if ( !_9__88_7 )
                        {
                          _9__88_7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(
                            _9__88_7,
                            (Il2CppObject *)v2,
                            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__13__,
                            0);
                          v2->fields.__9__13 = _9__88_7;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__13,
                            (int32_t)_9__88_7,
                            v13,
                            v14,
                            v15,
                            v16,
                            v17,
                            v18);
                        }
                        _9__8 = v2->fields.__9__14;
                        if ( !_9__8 )
                        {
                          _9__8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(
                            _9__8,
                            (Il2CppObject *)v2,
                            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__14__,
                            0);
                          v2->fields.__9__14 = _9__8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__14,
                            (int32_t)_9__8,
                            v20,
                            v21,
                            v22,
                            v23,
                            v24,
                            v25);
                        }
                        v26 = (ClassBoardSquareOpenConfirmDialog_o *)v10;
                        v27 = v12;
                        v28 = 1;
LABEL_116:
                        ClassBoardSquareOpenConfirmDialog__Open(v26, v27, v28, _9__88_7, _9__8, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_129;
        }
        v135 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
        if ( !v135 )
          goto LABEL_129;
        v136 = v135[3].klass;
        if ( !v136 )
          goto LABEL_129;
        this = (ClassBoardController___c__DisplayClass88_0_o *)sub_200B5F0(0, IClassBoardResourceCatalog_TypeInfo, v136);
        if ( !this )
          goto LABEL_129;
        v137 = v2->fields.__4__this;
        if ( !v137 )
          goto LABEL_129;
        this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                 v135,
                                                                 (Il2CppObject *)this->fields.__9__9,
                                                                 v137->fields.uiRoot,
                                                                 0,
                                                                 (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !this )
          goto LABEL_129;
        v138 = this;
        ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0);
        this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
        if ( !this )
          goto LABEL_129;
        this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc);
        if ( !this )
          goto LABEL_129;
        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
        _9__88_5 = v2->fields.__9__9;
        v139 = v2->fields.square;
        if ( !_9__88_5 )
        {
          _9__88_5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__88_5,
            (Il2CppObject *)v2,
            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__9__,
            0);
          v2->fields.__9__9 = _9__88_5;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__9,
            (int32_t)_9__88_5,
            v140,
            v141,
            v142,
            v143,
            v144,
            v145);
        }
        _9__6 = v2->fields.__9__10;
        if ( !_9__6 )
        {
          _9__6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__6,
            (Il2CppObject *)v2,
            Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__10__,
            0);
          v2->fields.__9__10 = _9__6;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__10,
            (int32_t)_9__6,
            v146,
            v147,
            v148,
            v149,
            v150,
            v151);
        }
        v112 = (ClassBoardLockOpenConfirmDialog_o *)v138;
        v113 = v139;
        v114 = 1;
      }
      ClassBoardLockOpenConfirmDialog__Open(v112, v113, v114, _9__88_5, _9__6, 0);
      return;
    }
    v51 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v51 )
      goto LABEL_129;
    v52 = v51[3].klass;
    if ( !v52 )
      goto LABEL_129;
    v53 = v52->_1.image;
    v54 = *((unsigned __int16 *)v52->_1.image + 151);
    if ( *((_WORD *)v52->_1.image + 151) )
    {
      v55 = (int *)(v53[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v55 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_52;
      }
      v56 = (__int64)&v53[2 * *v55 + 39];
    }
    else
    {
LABEL_52:
      v56 = sub_224BC3C(v51[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v56)(
                                                             v52,
                                                             *(_QWORD *)(v56 + 8));
    if ( !this )
      goto LABEL_129;
    v74 = v2->fields.__4__this;
    if ( !v74 )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v51,
                                                             (Il2CppObject *)this->fields.__9__10,
                                                             v74->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_129;
    v75 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_129;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_129;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__4 = v2->fields.__9__4;
    v77 = v2->fields.square;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v78, v79, v80, v81, v82, v83);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v75, v77, 0, _9__4, 0);
  }
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__CallbackSquareOnClick(this->fields.__4__this, this->fields.square, this->fields.acquireFlag, v2);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass88_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass88_0_o *v4; // x19
  System_Action_o *_9__12; // x23
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_5974658 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__12__);
    byte_5974658 = 1;
  }
  _9__12 = v4->fields.__9__12;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__12,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__12__,
      0);
    v4->fields.__9__12 = _9__12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__12, (int32_t)_9__12, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_2213CDC(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__12, v3);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  ClassBoardController___c__DisplayClass88_0_o *v9; // x20
  System_Action_object__o *_9__15; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ClassBoardController___c__DisplayClass88_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_5974659 & 1) == 0 )
  {
    sub_2213A60(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__15__);
    byte_5974659 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  v9 = this;
  _9__15 = (System_Action_object__o *)v2->fields.__9__15;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_object__o *)sub_2213CCC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__15,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__15__,
      0);
    v2->fields.__9__15 = (struct System_Action_IClassBoardSquareUser__o *)_9__15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__15, (int32_t)_9__15, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_21:
    sub_2213CDC(this, method);
  v17 = v9->klass;
  v18 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_224BC3C(v9, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass88_0_o *, System_Action_object__o *, _QWORD))v20)(
    v9,
    _9__15,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass88_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass88_0_o *v4; // x19
  System_Action_o *_9__16; // x23
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_597465A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__16__);
    byte_597465A = 1;
  }
  _9__16 = v4->fields.__9__16;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__16 )
  {
    _9__16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__16,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__16__,
      0);
    v4->fields.__9__16 = _9__16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__16, (int32_t)_9__16, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_2213CDC(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__16, v3);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__16(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__4(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__6(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  ClassBoardController___c__DisplayClass88_0_o *v9; // x20
  System_Action_object__o *_9__11; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ClassBoardController___c__DisplayClass88_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_5974657 & 1) == 0 )
  {
    sub_2213A60(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__11__);
    byte_5974657 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  v9 = this;
  _9__11 = (System_Action_object__o *)v2->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_object__o *)sub_2213CCC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__11,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__11__,
      0);
    v2->fields.__9__11 = (struct System_Action_IClassBoardSquareUser__o *)_9__11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_21:
    sub_2213CDC(this, method);
  v17 = v9->klass;
  v18 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_224BC3C(v9, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass88_0_o *, System_Action_object__o *, _QWORD))v20)(
    v9,
    _9__11,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___ctor(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__0(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__1(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__10(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardController_o *_4__this; // x0
  const MethodInfo *v5; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, v2), (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v5);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__11(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  ClassBoardController___c__DisplayClass90_0_o *v9; // x20
  System_Action_object__o *_9__13; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ClassBoardController___c__DisplayClass90_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_597465D & 1) == 0 )
  {
    sub_2213A60(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__13__);
    byte_597465D = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass90_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  v9 = this;
  _9__13 = (System_Action_object__o *)v2->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_object__o *)sub_2213CCC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__13,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__13__,
      0);
    v2->fields.__9__13 = (struct System_Action_IClassBoardSquareUser__o *)_9__13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_21:
    sub_2213CDC(this, method);
  v17 = v9->klass;
  v18 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_224BC3C(v9, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass90_0_o *, System_Action_object__o *, _QWORD))v20)(
    v9,
    _9__13,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__12(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__13(
        ClassBoardController___c__DisplayClass90_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass90_0_o *v4; // x19
  System_Action_o *_9__14; // x23
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_597465E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__14__);
    byte_597465E = 1;
  }
  _9__14 = v4->fields.__9__14;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__14__,
      0);
    v4->fields.__9__14 = _9__14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__14, (int32_t)_9__14, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_2213CDC(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__14, v3);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__14(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardController_o *_4__this; // x0
  const MethodInfo *v5; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, v2), (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v5);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__2(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__4(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__6(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__7(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  ClassBoardController___c__DisplayClass90_0_o *v9; // x20
  System_Action_object__o *_9__9; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ClassBoardController___c__DisplayClass90_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_597465B & 1) == 0 )
  {
    sub_2213A60(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__9__);
    byte_597465B = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass90_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  v9 = this;
  _9__9 = (System_Action_object__o *)v2->fields.__9__9;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_object__o *)sub_2213CCC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__9,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__9__,
      0);
    v2->fields.__9__9 = (struct System_Action_IClassBoardSquareUser__o *)_9__9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_21:
    sub_2213CDC(this, method);
  v17 = v9->klass;
  v18 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_224BC3C(v9, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass90_0_o *, System_Action_object__o *, _QWORD))v20)(
    v9,
    _9__9,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__8(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardController__OnEndClickProcess(this->fields.__4__this, this->fields.square, v2);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__9(
        ClassBoardController___c__DisplayClass90_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass90_0_o *v4; // x19
  System_Action_o *_9__10; // x23
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_597465C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_2213A60(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__10__);
    byte_597465C = 1;
  }
  _9__10 = v4->fields.__9__10;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__10__,
      0);
    v4->fields.__9__10 = _9__10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__10, (int32_t)_9__10, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_2213CDC(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__10, v3);
}


void ClassBoardController___c__DisplayClass91_0___ctor(
        ClassBoardController___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass91_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  struct ClassBoardController_o *v4; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__91_1; // x21
  Il2CppObject *v8; // x22
  struct ClassBoardController___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ClassBoardController_o *v16; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v18; // x8
  System_Action_object__o *_9__91_2; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardController___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ClassBoardController_o *v28; // x8
  System_Collections_Generic_List_object__o *GrandSquareViewList; // x20
  struct ClassBoardController___c_StaticFields *v30; // x8
  System_Action_object__o *_9__91_3; // x21
  Il2CppObject *v32; // x22
  struct ClassBoardController___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct ClassBoardController_o *v40; // x8
  System_Collections_Generic_List_object__o *GrandLineViewList; // x20
  struct ClassBoardController___c_StaticFields *v42; // x8
  System_Action_object__o *_9__91_4; // x21
  Il2CppObject *v44; // x22
  struct ClassBoardController___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_597465F & 1) == 0 )
  {
    sub_2213A60(&System_Action_ClassBoardSquare__TypeInfo);
    sub_2213A60(&System_Action_ClassBoardLine__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_2213A60(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_1__);
    sub_2213A60(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_2__);
    sub_2213A60(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_3__);
    sub_2213A60(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_4__);
    sub_2213A60(&ClassBoardController___c_TypeInfo);
    byte_597465F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_40;
  squareViewList = (System_Collections_Generic_List_object__o *)v4->fields.squareViewList;
  _4__this = ClassBoardController___c_TypeInfo;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, method);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__91_1 = (System_Action_object__o *)static_fields->__9__91_1;
  if ( !_9__91_1 )
  {
    if ( !*((_DWORD *)_4__this + 57) )
    {
      j_il2cpp_runtime_class_init_0(_4__this, method);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__91_1 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__91_1, v8, Method_ClassBoardController___c__PlayReleaseEffect_b__91_1__, 0);
    v9 = ClassBoardController___c_TypeInfo->static_fields;
    v9->__9__91_1 = (struct System_Action_ClassBoardSquare__o *)_9__91_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__91_1, (int32_t)_9__91_1, v10, v11, v12, v13, v14, v15);
  }
  if ( !squareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__91_1,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v16->fields.lineViewList;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, method);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v18 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__91_2 = (System_Action_object__o *)v18->__9__91_2;
  if ( !_9__91_2 )
  {
    if ( !*((_DWORD *)_4__this + 57) )
    {
      j_il2cpp_runtime_class_init_0(_4__this, method);
      v18 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__91_2 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__91_2, v20, Method_ClassBoardController___c__PlayReleaseEffect_b__91_2__, 0);
    v21 = ClassBoardController___c_TypeInfo->static_fields;
    v21->__9__91_2 = (struct System_Action_ClassBoardLine__o *)_9__91_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__91_2, (int32_t)_9__91_2, v22, v23, v24, v25, v26, v27);
  }
  if ( !lineViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__91_2,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandSquareViewList = (System_Collections_Generic_List_object__o *)v28->fields.GrandSquareViewList;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, method);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v30 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__91_3 = (System_Action_object__o *)v30->__9__91_3;
  if ( !_9__91_3 )
  {
    if ( !*((_DWORD *)_4__this + 57) )
    {
      j_il2cpp_runtime_class_init_0(_4__this, method);
      v30 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__91_3 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__91_3, v32, Method_ClassBoardController___c__PlayReleaseEffect_b__91_3__, 0);
    v33 = ClassBoardController___c_TypeInfo->static_fields;
    v33->__9__91_3 = (struct System_Action_ClassBoardSquare__o *)_9__91_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__91_3, (int32_t)_9__91_3, v34, v35, v36, v37, v38, v39);
  }
  if ( !GrandSquareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    GrandSquareViewList,
    (System_Action_T__o *)_9__91_3,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandLineViewList = (System_Collections_Generic_List_object__o *)v40->fields.GrandLineViewList;
  if ( !*(&ClassBoardController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, method);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v42 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__91_4 = (System_Action_object__o *)v42->__9__91_4;
  if ( !_9__91_4 )
  {
    if ( !*((_DWORD *)_4__this + 57) )
    {
      j_il2cpp_runtime_class_init_0(_4__this, method);
      v42 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__91_4 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__91_4, v44, Method_ClassBoardController___c__PlayReleaseEffect_b__91_4__, 0);
    v45 = ClassBoardController___c_TypeInfo->static_fields;
    v45->__9__91_4 = (struct System_Action_ClassBoardLine__o *)_9__91_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__91_4, (int32_t)_9__91_4, v46, v47, v48, v49, v50, v51);
  }
  if ( !GrandLineViewList )
LABEL_40:
    sub_2213CDC(_4__this, method);
  System_Collections_Generic_List_object___ForEach(
    GrandLineViewList,
    (System_Action_T__o *)_9__91_4,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void ClassBoardController___c__DisplayClass92_0___ctor(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass92_0___PlayClassBoardStartEffect_b__6(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *_4__this; // x0
  ClassBoardUIController_o *v4; // x20
  System_Action_o *_9__7; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974660 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__7__);
    byte_5974660 = 1;
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( this->fields.isLockCondReleased )
  {
    if ( _4__this )
    {
      _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                               _4__this,
                                               _4__this->klass[1]._1.gc_desc);
      if ( _4__this )
      {
        ClassBoardUIController__TouchEnable(_4__this, 0);
        _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
        if ( _4__this )
        {
          _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                                   _4__this,
                                                   _4__this->klass[1]._1.gc_desc);
          v4 = _4__this;
          _9__7 = this->fields.__9__7;
          if ( !_9__7 )
          {
            _9__7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__7,
              (Il2CppObject *)this,
              Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__7__,
              0);
            this->fields.__9__7 = _9__7;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.__9__7,
              (int32_t)_9__7,
              v6,
              v7,
              v8,
              v9,
              v10,
              v11);
          }
          if ( v4 )
          {
            ClassBoardUIController__OpenMissionClearDialog(v4, _9__7, 0);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_18;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc);
  if ( !_4__this )
    goto LABEL_18;
  ClassBoardUIController__TouchEnable(_4__this, 0);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc);
  if ( !_4__this )
    goto LABEL_18;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0);
LABEL_16:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_18;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardController___c__DisplayClass92_0___PlayClassBoardStartEffect_b__7(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass95_0___ctor(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass95_0___FinishedClassBoardStartEffect_b__0(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *_4__this; // x0
  System_Action_o *v5; // x1
  struct ClassBoardController_o *v6; // x8
  System_Action_o *_9__1; // x22
  struct ClassBoardController_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  struct ClassBoardController_o *v16; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974661 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__1__);
    byte_5974661 = 1;
  }
  _4__this = this->fields.__4__this;
  entity = 0;
  if ( !_4__this )
    goto LABEL_25;
  v5 = (System_Action_o *)*((_QWORD *)_4__this + 20);
  if ( !v5 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, 0);
    _4__this = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    v6 = this->fields.__4__this;
    if ( !v6 || !_4__this )
      goto LABEL_25;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)_4__this,
            &entity,
            v6->fields.baseId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      goto LABEL_16;
    _4__this = entity;
    if ( !entity )
      goto LABEL_25;
    _4__this = (void *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)entity, 0);
    if ( ((unsigned __int8)_4__this & 1) != 0 )
    {
      _9__1 = this->fields.__9__1;
      v8 = this->fields.__4__this;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__1__,
          0);
        this->fields.__9__1 = _9__1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__1,
          (int32_t)_9__1,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
      if ( !v8 )
        goto LABEL_25;
      _4__this = v8;
      v5 = _9__1;
    }
    else
    {
LABEL_16:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_25;
      v5 = (System_Action_o *)*((_QWORD *)_4__this + 19);
    }
  }
  ClassBoardController__SetOnClickBack((ClassBoardController_o *)_4__this, v5, v2);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  ClassBoardController__ShowGrandBoard((ClassBoardController_o *)_4__this, 0, v15);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  if ( !v16->fields.isPlayEffectToGrandBoard || v16->fields.baseId != 8 )
  {
    _4__this = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( _4__this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
      goto LABEL_24;
    }
LABEL_25:
    sub_2213CDC(_4__this, method);
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass95_0___FinishedClassBoardStartEffect_b__1(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ClassBoardController__HideGrandBoard(_4__this, 0, v2);
}


void ClassBoardController___c__DisplayClass96_0___ctor(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, f);
  ClassBoardController__CheckOpenMissionClearDialogSave(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, f);
  ClassBoardController__CheckQuestOpenDialog(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__2(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, f);
  ClassBoardController__PlayFullReleaseEffect(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__3(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass96_0_o *v2; // x19
  struct ClassBoardController_o *_4__this; // x8

  v2 = this;
  if ( (byte_5974662 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass96_0_o *)sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5974662 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isPlayFullReleaseEffect = 0,
        (this = (ClassBoardController___c__DisplayClass96_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
}


void ClassBoardController___c__DisplayClass97_0___ctor(
        ClassBoardController___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass97_0___CheckOpenMissionClearDialogSave_b__2(
        ClassBoardController___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass98_0___ctor(
        ClassBoardController___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController___c__DisplayClass98_0___CheckQuestOpenDialog_b__0(
        ClassBoardController___c__DisplayClass98_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass98_0_Fields *p_transitionAction; // x8
  ClassBoardQuestOpenConfirmDialog_o *questOpenConfirmDialog; // x0

  if ( isDecide )
  {
    p_transitionAction = (ClassBoardController___c__DisplayClass98_0_Fields *)&this->fields.transitionAction;
  }
  else
  {
    questOpenConfirmDialog = this->fields.questOpenConfirmDialog;
    if ( !questOpenConfirmDialog )
      sub_2213CDC(0, isDecide);
    ClassBoardQuestOpenConfirmDialog__Close(questOpenConfirmDialog, 0);
    p_transitionAction = &this->fields;
  }
  ActionExtensions__Call(p_transitionAction->callback, 0);
}


void ClassBoardController___c__DisplayClass99_0___ctor(
        ClassBoardController___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass99_0___PlayFullReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 m_CachedPtr; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct IClassBoardSquareModel_o *squareModel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v14; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v16; // x0
  struct ClassBoardController_o *_4__this; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  struct IClassBoardResourceCatalog_o *v23; // x21
  IClassBoardResourceCatalog_c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  UnityEngine_Object_o **v28; // x8
  UnityEngine_Object_o *v29; // x21
  BaseMonoBehaviour_o *v30; // x22
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct IClassBoardSquareModel_o *v39; // x22
  IClassBoardSquareModel_c *v40; // x8
  ClassBoardFullReleaseEffectComponent_o *v41; // x21
  __int64 v42; // x9
  IClassBoardSquareModel_c **v43; // x10
  __int64 v44; // x0
  struct ClassBoardController_o *v45; // x8
  int32_t *p_grandBaseId; // x8
  ClassBoardFullReleaseEffectComponent_o *v47; // x19
  System_Action_o *v48; // x21

  if ( (byte_5974663 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ClassBoardController___c__DisplayClass99_1__PlayFullReleaseEffect_b__1__);
    sub_2213A60(&ClassBoardController___c__DisplayClass99_1_TypeInfo);
    byte_5974663 = 1;
  }
  v3 = sub_2213CCC(ClassBoardController___c__DisplayClass99_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  squareModel = this->fields.squareModel;
  if ( !squareModel )
    goto LABEL_53;
  klass = squareModel->klass;
  v14 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_9;
    }
    v16 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v16 = sub_224BC3C(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v16)(
                  squareModel,
                  *(_QWORD *)(v16 + 8));
  _4__this = this->fields.__4__this;
  if ( (m_CachedPtr & 1) != 0 )
  {
    if ( !_4__this )
      goto LABEL_53;
    resourceCatalog = _4__this->fields.resourceCatalog;
    if ( !resourceCatalog )
      goto LABEL_53;
    v19 = resourceCatalog->klass;
    v20 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
    if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v21 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v22)(
                    resourceCatalog,
                    *(_QWORD *)(v22 + 8));
    if ( !m_CachedPtr )
      goto LABEL_53;
    v28 = (UnityEngine_Object_o **)(m_CachedPtr + 152);
  }
  else
  {
    if ( !_4__this )
      goto LABEL_53;
    v23 = _4__this->fields.resourceCatalog;
    if ( !v23 )
      goto LABEL_53;
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v26 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_25;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_25:
      v27 = sub_224BC3C(v23, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v27)(
                    v23,
                    *(_QWORD *)(v27 + 8));
    if ( !m_CachedPtr )
      goto LABEL_53;
    v28 = (UnityEngine_Object_o **)(m_CachedPtr + 144);
  }
  v29 = *v28;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  m_CachedPtr = UnityEngine_Object__op_Equality(v29, 0, 0);
  if ( (m_CachedPtr & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.callback, 0);
    return;
  }
  v30 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v30 )
    goto LABEL_53;
  m_CachedPtr = v30[2].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_53;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)m_CachedPtr, 0);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    v30,
                    (Il2CppObject *)v29,
                    transform,
                    0,
                    (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
  *(_QWORD *)(v3 + 16) = Object_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Object_object, v33, v34, v35, v36, v37, v38);
  v39 = this->fields.squareModel;
  if ( !v39 )
    goto LABEL_53;
  v40 = v39->klass;
  v41 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16);
  v42 = *(unsigned __int16 *)&v39->klass->_2.rank;
  if ( *(_WORD *)&v39->klass->_2.rank )
  {
    v43 = (IClassBoardSquareModel_c **)&v40->_1.interfaceOffsets->offset;
    while ( *(v43 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v42;
      v43 += 2;
      if ( !v42 )
        goto LABEL_43;
    }
    v44 = (__int64)&(&v40->rgctx_data)[2 * *(_DWORD *)v43 + 39];
  }
  else
  {
LABEL_43:
    v44 = sub_224BC3C(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v44)(v39, *(_QWORD *)(v44 + 8));
  v45 = this->fields.__4__this;
  if ( (m_CachedPtr & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_53;
    p_grandBaseId = &v45->fields.grandBaseId;
  }
  else
  {
    if ( !v45 )
      goto LABEL_53;
    p_grandBaseId = &v45->fields.baseId;
  }
  if ( !v41
    || (ClassBoardFullReleaseEffectComponent__SetClassIcon(v41, *p_grandBaseId, 0),
        v47 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16),
        v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v48,
          (Il2CppObject *)v3,
          Method_ClassBoardController___c__DisplayClass99_1__PlayFullReleaseEffect_b__1__,
          0),
        !v47) )
  {
LABEL_53:
    sub_2213CDC(m_CachedPtr, v5);
  }
  ClassBoardFullReleaseEffectComponent__Play(v47, v48, 0);
}


void ClassBoardController___c__DisplayClass99_1___ctor(
        ClassBoardController___c__DisplayClass99_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass99_1___PlayFullReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass99_1_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass99_1_o *v2; // x19
  struct ClassBoardController___c__DisplayClass99_0_o *CS___8__locals1; // x8
  struct ClassBoardController___c__DisplayClass99_0_o *v4; // x8
  struct ClassBoardController___c__DisplayClass99_0_o *v5; // x8
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_5974664 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass99_1_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974664 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_14;
  this = (ClassBoardController___c__DisplayClass99_1_o *)v4->fields.__4__this;
  if ( !this
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass99_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0),
        (v5 = v2->fields.CS___8__locals1) == 0)
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)v5->fields.__4__this) == 0
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass99_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)this, 0),
        (this = (ClassBoardController___c__DisplayClass99_1_o *)v2->fields.fullReleaseEffect) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}