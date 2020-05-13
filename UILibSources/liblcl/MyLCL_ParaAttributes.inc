
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

procedure ParaAttributes_Assign(AObj: TParaAttributes; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ParaAttributes_GetNamePath(AObj: TParaAttributes): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function ParaAttributes_ClassType(AObj: TParaAttributes): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ParaAttributes_ClassName(AObj: TParaAttributes): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ParaAttributes_InstanceSize(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ParaAttributes_InheritsFrom(AObj: TParaAttributes; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ParaAttributes_Equals(AObj: TParaAttributes; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ParaAttributes_GetHashCode(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ParaAttributes_ToString(AObj: TParaAttributes): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ParaAttributes_GetAlignment(AObj: TParaAttributes): TAlignment; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure ParaAttributes_SetAlignment(AObj: TParaAttributes; AValue: TAlignment); extdecl;
begin
  AObj.Alignment := AValue;
end;

function ParaAttributes_GetFirstIndent(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.FirstIndent;
end;

procedure ParaAttributes_SetFirstIndent(AObj: TParaAttributes; AValue: Integer); extdecl;
begin
  AObj.FirstIndent := AValue;
end;

function ParaAttributes_GetLeftIndent(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.LeftIndent;
end;

procedure ParaAttributes_SetLeftIndent(AObj: TParaAttributes; AValue: Integer); extdecl;
begin
  AObj.LeftIndent := AValue;
end;

function ParaAttributes_GetNumbering(AObj: TParaAttributes): TNumberingStyle; extdecl;
begin
  Result :=  AObj.Numbering;
end;

procedure ParaAttributes_SetNumbering(AObj: TParaAttributes; AValue: TNumberingStyle); extdecl;
begin
  AObj.Numbering := AValue;
end;

function ParaAttributes_GetRightIndent(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.RightIndent;
end;

procedure ParaAttributes_SetRightIndent(AObj: TParaAttributes; AValue: Integer); extdecl;
begin
  AObj.RightIndent := AValue;
end;

function ParaAttributes_GetTabCount(AObj: TParaAttributes): Integer; extdecl;
begin
  Result :=  AObj.TabCount;
end;

procedure ParaAttributes_SetTabCount(AObj: TParaAttributes; AValue: Integer); extdecl;
begin
  AObj.TabCount := AValue;
end;

function ParaAttributes_GetTab(AObj: TParaAttributes; Index: Byte): Integer; extdecl;
begin
  Result :=  AObj.Tab[Index];
end;

procedure ParaAttributes_SetTab(AObj: TParaAttributes; Index: Byte; AValue: Integer); extdecl;
begin
  AObj.Tab[Index] := AValue;
end;

function ParaAttributes_StaticClassType: TClass; extdecl;
begin
  Result := TParaAttributes;
end;

exports
  ParaAttributes_Assign,
  ParaAttributes_GetNamePath,
  ParaAttributes_ClassType,
  ParaAttributes_ClassName,
  ParaAttributes_InstanceSize,
  ParaAttributes_InheritsFrom,
  ParaAttributes_Equals,
  ParaAttributes_GetHashCode,
  ParaAttributes_ToString,
  ParaAttributes_GetAlignment,
  ParaAttributes_SetAlignment,
  ParaAttributes_GetFirstIndent,
  ParaAttributes_SetFirstIndent,
  ParaAttributes_GetLeftIndent,
  ParaAttributes_SetLeftIndent,
  ParaAttributes_GetNumbering,
  ParaAttributes_SetNumbering,
  ParaAttributes_GetRightIndent,
  ParaAttributes_SetRightIndent,
  ParaAttributes_GetTabCount,
  ParaAttributes_SetTabCount,
  ParaAttributes_GetTab,
  ParaAttributes_SetTab,
  ParaAttributes_StaticClassType;
