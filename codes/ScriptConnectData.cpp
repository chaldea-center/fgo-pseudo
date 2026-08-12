void ScriptConnectData___ctor(
        ScriptConnectData_o *this,
        System_String_o *connectPath,
        System_String_o *objectPath,
        System_Action_o *endCallback,
        System_Action_o *errorCallback,
        int32_t jumpLine,
        bool isView,
        const MethodInfo *method)
{
  ScriptConnectData_o *v11; // x22
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
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  v11 = this;
  this->fields.ConnectPath = connectPath;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)this,
    (int32_t)connectPath,
    objectPath,
    (System_String_o *)endCallback,
    (int32_t)errorCallback,
    jumpLine,
    isView,
    (bool)method);
  v11->fields.ObjectPath = objectPath;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.ObjectPath,
    (int32_t)objectPath,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v11->fields.EndCallback = endCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.EndCallback,
    (int32_t)endCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v11->fields.ErrorCallback = errorCallback;
  v11 = (ScriptConnectData_o *)((char *)v11 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v11, (int32_t)errorCallback, v26, v27, v28, v29, v30, v31);
  LODWORD(v11->fields.ObjectPath) = jumpLine;
  BYTE4(v11->fields.ObjectPath) = isView;
  BYTE5(v11->fields.ObjectPath) = 0;
}